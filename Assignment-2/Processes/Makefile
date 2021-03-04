PROJECT_NAME = ASSIGNMENT 2

SRC = link.c

$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out
