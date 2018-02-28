CFLAGS= -c -Og -g -std=gnu99

%.o : %.c
	gcc $(CFLAGS) $*.c

all : e1_sol e2_sol e1_reference e2_reference
e1_sol: e1.o e1_driver.o
	gcc $^ -o $@

e2_sol: e2.o e2_driver.o
	gcc $^ -o $@

e1_reference: e1_reference.o e1_driver.o
	gcc $^ -o $@

e2_reference: e2_reference.o e2_driver.o
	gcc $^ -o $@
