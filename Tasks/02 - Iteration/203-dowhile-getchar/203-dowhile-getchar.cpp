#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c ", userEnteredCharacter);
        printf("(ASCII %d),\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);   

    } while (userEnteredCharacter != 'q');            //Repeat if condition is met - note the != operator

    puts("Finished");
}
