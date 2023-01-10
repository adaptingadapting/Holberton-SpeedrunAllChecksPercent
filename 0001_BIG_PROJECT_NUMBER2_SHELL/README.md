The speedrun is coming to an end, it took me longer than expected to get here but that is fine, lets see what we can do with this shell project on our own, the part that i remember the most was having finished everything apparently but getting 0 points because i hadnt done the exit status or error managment nesscesary.
so i will take care of those things from the start as i begin this new project

in day one i advanced quite far, i "tried" (succeeded) to used linked lists for something but since execve takes arrays of strings that felt silly, still im keeping that. everything else is pretty similar, this time i did build an env builtin and i have sliightly changed the flow of the program, still needs work on error and memory managment but its on the right track

day two and three i focused only on memory and error handling and i have to say it was harder than expected, there were some subtleties especially today that i had a harder time fixing, like i forgot to free path and such in a for loop and things like that

the good thing about doing the shell project again was that i did it with linked lists and this opened my eyes to the idea of doing it this way, you can see that at the start i was skeptical about the aproach but now i see why i was wrong. by putting your arguments in a linked list, you can keep on adding very easiliy to the list as you recieve more and more arguments, whereas in the old project i had put all of my eggs in an array of size 80, what if someone were to put 81 arguments in my last shell? yeah it wouldnt be good.

thats all for the shell project and for the speedrun. gnight