const { createMachine } = require("xstate");
const hungryMachine = createMachine({
  context: {},
  id: "idle",
  initial: "idle",
  states: {
    idle: {
      on: {
        EAT: {
          target: "hungry",
        },
      },
    },
    hungry: {
      on: {
        EAT: {
          target: "idle",
        },
        FULL: {
          target: "full",
        },
      },
    },
    full: {
      type: "final",
    },
  },
}).withConfig({});