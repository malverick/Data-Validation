# Data-Validation
Check for validity of data input by user.

A mini-project on validation of data which the user enters.

This project involves the creation of E-mail account of a user and checks in each step whether the input provided by the user is valid or not.

The project is implemented in two ways:

1. A stand-alone independent C program

2. A library called `data_validate` is created in which the prototype is defined for each and every function and the user just need to import the library in his main program and work accordingly. There is a file `data_validate.h` which contains all the function decalrations(it's return type and formal parameters) and global declarations if any. Another file `data_validate.c` which contains definitions of all the functions declared in `data_validate.h`. Finally, there is `main.c` which is for testing the header file/library created.

To run the project - 

1. Clone the repository or download ZIP.

# For cloning

	1. Open terminal
	2. `git clone https://github.com/malverick/Data-Validation.git`
	3. `cd Data-Validation`

(Now you are in the project directory) 

# For downloading ZIP

	1. Click on `Clone or Download` option at extreme right of header and `Download ZIP` from there.
	2. Open terminal
	3. `cd /dir/containing/downloaded/zip`
	4. `unzip Data-Validation-master.zip`
	5. `cd Data-Validation-master`

(Now you are in the project directory)

2. If you want to test the stand-alone C program then, 
	1. `cd Stand-alone\ C\ program/`
	2. `gcc main.c`
	3. `./a.out`

3. If you want to test the header file then,
	1. `cd Library/`
	2. `gcc data_validate.c main.c`
	3. `./a.out`

