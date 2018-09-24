INCLUDES = -I /home/rakshith/C/makefileexample/Main
CFLAGS = -I /home/rakshith/C/makefileexample/Main/  
file1:	src1.o
	cc -o file1 src1.o
src1.o : header1.h src1.c
	cc -c ${CFLAGS} src1.c 
clean :
	rm src1.o

