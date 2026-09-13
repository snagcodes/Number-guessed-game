#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    // initalize of random number generator
    srand(time (0));
    // generate random between 1 to 100
    int randomnumber= rand() %100 +1;
    int no_of_guesses =0;
    int guessed_number;
    // print the random number;
    //print("random number:%d\n",randomnumber)

    do{
        printf("guess the number");
        scanf("%d\n",&guessed_number);
        if ( guessed_number> randomnumber){
        printf("lower number please !\n");    
        }
        else if ( guessed_number< randomnumber){
            printf("higher number please !\n");
        }
        else {
            printf("congrats !\n");
        }
        no_of_guesses++;
    }while (guessed_number!=randomnumber);
    printf("you guessed the number in %d gueesed", no_of_guesses);





    return 0;
}
    

