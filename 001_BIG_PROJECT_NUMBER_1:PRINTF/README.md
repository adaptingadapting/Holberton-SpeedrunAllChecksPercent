README for the printf project, the first big one and the first group project as well, a daunting task back then but not so much now, im expecting this to take me a few hours for all the mandatory ones, i wont do advanced tasks for printf

functions:

get_function:

	compares a string to one of the accepted formats and if and when they match it returns a pointer to a function that takes care of the rest

functions:
	there are a few interesting things about the first two main functions, putchar and print string, not many but there are, i think the main one is that you have the option to go for write instead of the std library putchar as your methor of putting a char to the screen, the problem with that aproach is that write seems to be to fast sometimes and print ahead of time or out of order and that has led me away from using it in this version also, like it did in the past.

however the main function that is needed for printf is definetively the itoa function, used to turn the number given as input to a string and print it on the screen. and that is what im going to try now