test1:
	gcc -o cpu cpu.c -Wall
	./cpu A

test2:
	gcc -o cpu cpu.c -Wall
	./cpu A & ./cpu B & ./cpu C & ./cpu D &