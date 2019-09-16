abc.exe: main.o big3.o fact.o palindrome.o
	gcc -o abc.exe main.o big3.o fact.o palindrome.o
	
main.o:	main.c
	gcc -c main.c
big3.o: big3.c
	gcc -c big3.c
fact.o:	fact.c
	gcc -c fact.c
palindrome.o: palindrome.c
	gcc -c palindrome.c

clean:	
	rm -rf *.o *.exe

