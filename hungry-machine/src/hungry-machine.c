#include <stdio.h>

// Defining the states
typedef enum {
  idle,
  hungry,
  full
} State;

// Defining the events
typedef enum {
  EAT,
  FULL
} Event;

// Defining the transitions
typedef struct {
  State src_state;
  Event event;
  State dst_state;
} Transition;


int main() {
  // Creating transitions for the cryptic state machine
  Transition transition_table[] = {
    {idle, EAT, hungry},
    {hungry, EAT, idle},
    {hungry, FULL, full}
  };
  
  // Defining the initial state and current state
  State initial_state = idle;
  State current_state = idle;

  // Infinitely looping through the cryptic machine
  while (1) {
    // Reading user input as event
    Event event;
    printf("Enter event (0 for EAT, 1 for FULL): ");
    
    scanf("%d", &event);

    // Checking for valid events
    if (event == EAT || event == FULL) {
      // Looping through the transition table to find the correct transition
      for (int i = 0; i < sizeof(transition_table) / sizeof(Transition); i++) {
        // Checking for the current state and event to determine the next state
        if (transition_table[i].src_state == current_state && transition_table[i].event == event) {
          current_state = transition_table[i].dst_state;
          break;
        }
      }
      // Printing the current state

      printf("Current state: %d\n", current_state);
      // Executing code based on the current state
      switch (current_state) {
        case idle:
          // Code for idle state
          printf("You are in the idle state\n");
          break;
        case hungry:
          // Code for hungry state
          printf("You are hungry\n");
          break;
        case full:
          // Code for full state
          printf("You are full now!\n");
          // Executing additional code for full state
          printf("Executing additional code for full state\n");
          break;
      }
    }
    else {
      printf("Invalid event");
      break;
    }
  }

  return 0;
}


