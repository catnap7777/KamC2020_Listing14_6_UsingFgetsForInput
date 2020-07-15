// Listing 14.6 - Using fgets function for keyboard input; page 337

#include <stdio.h>

//NOTE:  If you go past the buffer length, it just "loops" the data around
//       and prints on the next line. It does this until the user enters
//       a carriage return for a blank line

//#define MAXLEN 10
//NOTE2: to actually store 20 characters, you would need to declare an array
//       of [21] because you need 1 character for the ending null character.
//       In this array for example, you can only store 19 characters and the null character
#define MAXLEN 20

int main(void)
{
    char buffer[MAXLEN];

    puts("\nEnter text a line at a time; enter a blank line to exit.\n");

    while (1)
    {
        fgets(buffer, MAXLEN, stdin);

        if(buffer[0] == '\n')
            break;

        puts(buffer);
    }
    return 0;
}
