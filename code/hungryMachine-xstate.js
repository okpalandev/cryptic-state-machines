const { createMachine,interpret } = require("xstate");

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

const service = interpret(hungryMachine)
.onTransition(state => {
    console.log(state.value);
})
.start();

service.send('EAT');
console.log('The state is:', service.state.value); // 'hungry'

service.send('EAT');
console.log('The state is:', service.state.value); // 'hungry'

service.send('FULL');
console.log('The state is:', service.state.value); // 'full

