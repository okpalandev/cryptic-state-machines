
- Use NASM to assemble the .asm file: 
nasm -f elf32 -o ../obj/cryptic_state_machine.o /cryptic_state_machine.asm
- Link the object file to create an executable: gcc -m32 -o bin/cryptic_state_machine ./obj/cryptic_state_machine -fno-stack-protector -no-pie -z noexecstack