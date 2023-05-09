//GAME NO1

/*
Number-guessing game that uses input validation 
(isdigit() function) to verify that the user has entered a 
digit and not a nondigit (letter). 

Store a random number 
(use int rand(void) function) between 1 and 5 into a 
variable each time the program is run. Prompt the user to 
guess a number between 1 and 5 and alert the user if he 
was correct or not.

*/


#include <stdio.h>
#include <stdlib.h>



main()

{

int guessRight ;                                            // declearing a variable to hold our random value

srand(time(0));                                          //Making the game autonomously random

guessRight = (rand() % 5 + 1 - 1 ) + 1;                 //Initialising the random function and ranging our output
//srand(time(0));

int guess;                                              //variable for User defined value




printf("\n Guess: GIVE ME A NUMBER BETWEEN 1 and 5. \n");

scanf("%d", &guess);


//Checking our guessed value and returning a corresponding outcome
if (!isdigit(guess))

{

    if (guess==guessRight){
        printf("\n YES! SMART DUDE!");
        printf("\n Your guess was: %d", guessRight);
}

    else{
        printf("\n UNFORTUNATELY NO. ");
        printf("\n Your guess was: %d", guess);

        printf("\n Correct answer: is %d", guessRight);

    }
}


else{
    printf("\n Your input was invalid ");
}

    return 0;
}



//GAME NO2
/*

// A programm to store and return random numbers
#include<stdio.h>
#include<stdlib.h>                                   //Defining the standard library for random functions inclusive


int main()
{
    int task[8];                                    //Container to hold our value
    
    //We desire to make it absolutely random
    //if not, the sequence remains unchanged, hence
    srand(time(0));                       
    for (int i = 0; i <= 5; i++ )
    {
        task[i] = rand() % (49 + 1 - 1) + 1;        //Ranging the container in a random fashion
        //printf("%d\n", task[i]);
        
        printf("%d\n", task[i]);
        
      //printf("Call your numbers:,\n");
        //scanf("%d", &task[i]);
    }
    //for(int i = 0; i <= 6; i++){
    //    printf("%d", task[i]);
    //}
    //printf("\n", task);


    return 0;
}


*/
