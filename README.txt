Brief introduction of the program:

The program runs the game know as "Nim". "Nim" is a board gaem in which 2 players start the game by placing some rocks in three rows and the remove those rocks turn by turn. The person who removes the last rock wins.

Compiling the program:

The program should be compiled in the terminal using the "gcc" and appropriate flags which are "-std=c99", "-Wall" and "-pedantic". The exact code to compile the program is:

"gcc -std=c99 -Wall -pedantic a3.c [-o a3]"

The [-o a3] is optional but helps in giving an easy filename.

Running the program:

Program can be run in the terminal using "./[filename]" (filename can be any name you give to the file. By default, it is a.out). Once the program starts, it displays the name of the game and asks for the number of rocks one wants to place in each row. User can input any positive integer. After that, the game will be played turn by turn. Each player takes his turn and inputs the Row number and the number of Rocks he wants to remove from that row. The game displays the board after each turn and the player who removes the last rock wins. 

Limitations:

The program is only compiled and tested on a raspberry pi and is not guaranteed to work on every system available. The number of rocks can only be a positive integer which means the maximum number of rocks employable are 2,147,483,647. The number of rows is not customizable and is always 3. The program do check for the errors such as:
1. Negative integers for number of rocks or the row number.
2. 0 rocks entered by the user in all rows when starting the game.
3. Input for Row number being greater than 3 (number of rows available).
4. Input for number of rocks greater than the number of rocks present in that particular row.
After checking for the errors, it promts the user for a re-entry and keeps running. However, The number of rocks or the row number cannot be a negative integer, a rational number, a character or a string.