# Name of the project
PROJECT_NAME = Calculator
 
# Output directory
BUILD = build
 
# All source code files
SRC = src/basic_trig.c\
src/main.c\
test/test_calculator_operations.c\
unity/unity.c
 
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out
 
# All include folders with header files
INC = -Iinc\
-Iunity
 
#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =
 
# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out
 
# Document files
DOCUMENTATION_OUTPUT = documentation/html
 
# Default target built
$(PROJECT_NAME):all
 
# Run the target even if the matching name exists
.PHONY: run clean test doc all
 
all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm
	
# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out
 
# Document the code using Doxygen
#doc:
#   make -C ./documentation
 
# Build and run the unit tests
test:$(BUILD)
	gcc $(SRC) $(INC) -o $(TEST_OUTPUT) -lm
	./$(TEST_OUTPUT)
 
# Remove all the built files, invoke by `make clean`
analysis:	
	cppcheck $(SRC)	
	
memcheck: $(PROJECT_NAME).out
	valgrind ./$(PROJECT_NAME).out

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
	
# Create new build folder if not present
$(BUILD):
	mkdir build
