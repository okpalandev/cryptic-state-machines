# Application of Cryptic State Machines

## by Nnamdi Michael Okpala.

### Introduction:

Within the realm of automata theory, there are two main types of state machine.A state machine is an abstract machine that move from one state to another till it get to the end.

1) Behavioural State Machine:
   A Behavioural State Machine is one that is conserend  of/within a system.A system is a collection of components working together. This is useful when modelling determinstic behaviour such as a:  game states.

2) Protocol State Machine:
   This state machine is conserned with **events**, amd is determinsitic by nature as it transition for one event to another. This is useful when modelling networking protocol which are event driven.

3) Cryptic State Machine:
   A cryptic state machine is a state machine which on encountering  the same **state** yield a different **transistions**. Unlike a typical **behavioural state** machine is determinstic by nature yielding the same **transistion** for the same **state**.This is a useful concepts as it is derived by how cryptic language works.The means a cryptic state machine has loops.. By definition,A cryptic language has one obvious meaning which can be derived very easily,and another meaning which is harder to understand/ parse contextually. 
   for example:
   
   - "I never said she stole my money" has seven different meanings depending on the stressed word.
     This can be used to create a cryptic service in which a cryptic(modelled from a cryptic state machine) algorithm runs given a given state machine.

### Diagram for a Cryptic State Machine

A hungry individual who will still remain **hungry** in the state **hungry** state until their have eaten enough entering a **full** state.This hungry state could  be two or more times meaning the NFA-to-DFA of a cryptic state machine would contains cyclic loops to the node itself for this given instance.A cyclic state diagram is non-determinstic.

The cryptic state machine can be examplified as using the state machine diagrams:
![Hungry Machine](../assets/hungrymachine.png "Hungry Machine - A Cryptic State Machine")
![Another Hungry Machine](https://stately.ai/registry/machines/9fc7f8f8-fccd-4475-b689-5e21cdd20be0.dark.png "Hungry Machine - A cryptic state machiine")



### Unethical Applciation of Cryptic State Machines
Consequently, Cryptic State Machine can be used in rogue manner in which as states the initial state is changed during the runtime to a rougue state which can then be used to enumerate a different set of states
which has a mallicisous implementation.

This demonstration  requires the **initial** state to be changed,and would result in the application behaviourally normally ,but performing cryptic  and rogue and supicious activites undetected.

For example, Shell Code can be executed in a **rouge** state.

[Rouge State Example](../assets/rougestate.png "Rouge State Example")  

This can be used to perform various unethical activities such as:

- Stealing sensitive data from a system by embedding the shellcode in a cryptic state machine. The shellcode would only be triggered when the state machine enters the rogue state, making it harder for security systems to detect.

- Creating backdoors in systems by manipulating the state transitions. This way, the shellcode can be executed and access to the system can be gained without being detected easily.

- Performing covert operations without being traced. Cryptic state machines can be used to create a hidden network within a system, allowing communication and data transfer without being detected.

Overall, the unethical applications of cryptic state machines are diverse and can pose a serious threat to system security. It is important for security systems to be vigilant and constantly evolve to detect and prevent such malicious activities.