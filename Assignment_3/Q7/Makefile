all : case1 case2 

case1 : user1_pipe.c
    gcc -o user1 user1_pipe.c -lpthread

case2 : user2_pipe.c 
    gcc -o user2 user2_pipe.c -lpthread

run : all
	./user1.out ./user2.out
