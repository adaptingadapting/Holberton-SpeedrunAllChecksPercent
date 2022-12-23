README for the printf project, the first big one and the first group project as well, a daunting task back then but not so much now, im expecting this to take me a few hours for all the mandatory ones, i wont do advanced tasks for printf

functions:

get_function:

	compares a string to one of the accepted formats and if and when they match it returns a pointer to a function that takes care of the rest

functions:
	there are a few interesting things about the first two main functions, putchar and print string, not many but there are, i think the main one is that you have the option to go for write instead of the std library putchar as your methor of putting a char to the screen, the problem with that aproach is that write seems to be to fast sometimes and print ahead of time or out of order and that has led me away from using it in this version also, like it did in the past.

however the main function that is needed for printf is definetively the itoa function, used to turn the number given as input to a string and print it on the screen. and that is what im going to try now

itoa has been added after a few hours maybe? maybe only one id like to think, im off to eat, i have to say i am slightly proud of my implementation of the number prinintg function, it only prints from 0 to 9 now but making it work for hex should be a super daunting task, i think the way i did it is pretty unique and yeah thats why i am proud in the end, off to the other functions