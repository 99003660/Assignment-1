PROJECT_NAME = ASSIGNMENT

SRC = Src/String.c\
Src/bitmask.c\
Src/utils.c\
test.c

INC = -IInc

$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@ $(INC)

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
