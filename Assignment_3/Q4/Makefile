all : prog01 prog02 

prog01 : server.c
    gcc -o server server.c -lrt

prog02 : user2.c 
    gcc -o client client.c -lrt

run : all
	./server.out ./client.out
