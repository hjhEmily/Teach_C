test : main.o
	gcc -o helloworld HelloWorld.c

do :
	./helloworld

main.o : HelloWorld.c
	gcc -c HelloWorld.c

clean:
	rm -f HelloWorld.o helloworld


