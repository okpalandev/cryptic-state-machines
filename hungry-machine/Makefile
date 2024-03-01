CC=gcc
CFLAGS=-m32 -fno-stack-protector -no-pie -z noexecstack

NASM=nasm
NASMFLAGS=-f elf32

LD=ld
LDFLAGS=-m elf_i386

BINDIR=./bin
OBJDIR=./obj
SRCDIR=./src

all: cryptic_machine

cryptic_machine: $(OBJDIR)/bind.o $(OBJDIR)/hungry_machine.o
	$(CC) $(CFLAGS) -Wl,-e,smain -o $(BINDIR)/cryptic_machine $^ 

$(OBJDIR)/bind.o: $(SRCDIR)/bind.asm
	$(NASM) $(NASMFLAGS) $< -o $@

$(OBJDIR)/hungry_machine.o: $(SRCDIR)/hungry_machine.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJDIR)/*.o $(BINDIR)/cryptic_machine
