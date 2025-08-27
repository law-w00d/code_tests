# Run tests of your custom functions
The start of a very primitive program for testing functions.

In main.c, the user can call any number of test_*func*(), passing some parameters:
A pointer to the function used to run the test; Any arguments the function needs; The expected return value;

The command line output will display a basic summary of each test, whether it passed or failed, the expected value, and the actual return value.

## Recent changes:
Implemented a basic clock timer to time functions, displayed in milliseconds.

The code for this needs to be refactored - currently it is just a proof of concept.

## Limitations:
I was experimenting with a more universal "test_function" function that can operate on a function with any return type, which would be passed a variable agrument list.

Upon further research, it seems C (being a strongly typed language) does not have the capability to perform this (but I will continue searching for solutions).

## Using the program:
There are 3 major files: main.c; tests.h; func.h;

Write the actual custom functions in func.h just as you would normally.

Write a "test" of that function in tests.h. When you call the "test" of that function, you pass a pointer to the function you want to use to test it.

This function pointer must return the correct type and accept the correct number and type of arguments.

It was designed this way so that the user may write multiple versions of the same function and test each version with the same test_function (PROVIDED that each version returns the same type and takes the same arguments).

You will also pass the arguments to use (the "test values") as well as the expected result.

Finally, main.c is where you call the test_functions and specify the actual arguments to use.

## Possible upgrades:
This is my first iteration of this program (which I only spent 15 minutes on) so there is much room for improvement.

In the future I would like to make the test functions as broad as possible so that a new test_function doesn't have to be created for each different function you want to test.