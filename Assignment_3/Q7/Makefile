all : prog01 prog02 

prog01 : user1.c
    gcc -o user1 user1.c -lpthread

prog02 : user2.c 
    gcc -o user2 user2.c -lpthread

run : all
	./user1.out ./user2.out
