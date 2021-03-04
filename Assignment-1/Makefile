PROJECT_NAME = ASSIGNMENT1

SRC = src/String.c\
src/bitmask.c\
src/utils.c\
test.c

INC = -Iinc

$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@ $(INC)

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
