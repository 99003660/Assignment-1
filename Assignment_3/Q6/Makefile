all : prog1 prog2 

prog1 : server.c
    gcc -o server server.c -lrt

prog2 : user2.c 
    gcc -o client client.c -lrt

run : all
	./server.out ./client.out
