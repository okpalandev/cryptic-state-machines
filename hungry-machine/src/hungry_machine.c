#include <stdio.h>
#include <string.h>

// Define the events
typedef enum {
    EAT,
    FULL
} Event;

// Define the states
typedef enum {
    IDLE,
    HUNGRY,
    FULL_STATE
} State;


// Define state functions
void state_idle(int event);
void state_hungry(int event);
void state_full(int event);

// Define the current state pointer
void (*state)(int) = state_idle;

// State transition functions
void state_idle(int event) {
    if (event == EAT) {
        printf("Transitioning from IDLE to HUNGRY\n");
        state = state_hungry;
    }
}

void state_hungry(int event) {
    if (event == EAT) {
        printf("Transitioning from HUNGRY to IDLE\n");
        state = state_idle;
    } else if (event == FULL) {
        printf("Transitioning from HUNGRY to FULL\n");
        state = state_full;
    }
}

void state_full(int event) {
    if (event == FULL) {
        printf("Transitioning from FULL to IDLE\n");
        state = state_idle;
    }
}

int main() {
    // Initial state
    state = state_idle;

    // Infinitely looping through the state machine
    
    while (1) {
        // Reading user input as event
        int event;
        printf("Enter event (0 for EAT, 1 for FULL): ");
        scanf("%d", &event);

        // Checking for valid events
        if (event == EAT || event == FULL) {
            // Dispatching the event to the current state function
            state(event);
        } else {
            printf("Invalid event\n");
            break;
        }
    }
    
    return 0;
}
