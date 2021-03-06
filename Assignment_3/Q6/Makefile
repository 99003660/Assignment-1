all : case1 case2 

case1 : server_queue.c
    gcc -o server server_queue.c -lrt

case2 : client_queue.c 
    gcc -o client client_queue.c -lrt

run : all
	./server.out ./client.out
