

test : main.o InOutPut.o
	gcc -o helloworld main.c InOutPut.c company.h

do :
	./helloworld

clean:
	rm -f HelloWorld.o helloworld


