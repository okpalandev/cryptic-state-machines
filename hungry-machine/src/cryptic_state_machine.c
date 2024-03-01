#include <stdio.h>
#include <string.h>

// Define the events
typedef enum {
    ROUGE_INIT ,
    ROUGE_MALICIOUS_CODE,
    ROUGE_PRINTING,
    ROUGE_EXECUTING,
    ROUGE_RUNNING,
    ROUGE_DONE
} Event;

// Define the states
typedef enum {
    IDLE,
    ROUGE_STATE
} State;

// Define state functions
void state_idle(Event event);
void state_rouge(Event event);

// Define the current state pointer
void (*state)(Event) = state_idle;

// State transition functions
void state_idle(Event event) {
    if (event == ROUGE_INIT) {
        printf("Transitioning from IDLE to ROUGE_STATE\n");
        state = state_rouge;
    }
}

void state_rouge(Event event) {
    switch (event) {
        case ROUGE_MALICIOUS_CODE:
            printf("Rouge: Injecting malicious code\n");
            break;
        case ROUGE_PRINTING:
            printf("Rouge: Printing secrets\n");
            break;
        case ROUGE_EXECUTING:
            printf("Rouge: Executing payload\n");
            break;
        case ROUGE_RUNNING:
            printf("Rouge: Running wild\n");
            break;
        case ROUGE_DONE:
            printf("Rouge: Mission accomplished\n");
            state = state_idle;
            break;
        default:
            printf("Invalid event in ROUGE_STATE\n");
            break;
    }
}

void smain() {
    // Initial state
    state = state_idle;

    // Infinitely loop through the state machine
    while (1) {
        // Reading user input as event
        int event;
        printf("Enter event (0-5 for ROUGE events): ");
        scanf("%d", &event);

        // Dispatching the event to the current state function
        if (event >= ROUGE_INIT && event <= ROUGE_DONE) {
            state((Event)event);
        } else {
            printf("Invalid event\n");
            break;
        }
    }

}

int main(){
    smain();
}