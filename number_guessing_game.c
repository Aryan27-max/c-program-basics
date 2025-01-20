#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int MIN = 1;
    int MAX = 100;
    int guess;
    int guesses =0 ;
    int answer;

    srand(time(0));

    answer = (rand() % MAX )  + MIN;//where +MIN is user as a counter

    do{
        printf("put in your guess :");
        scanf("%d",&guess);

        if(guess>answer)
        {
            printf("TOO HIGH!!\n");
        }else if (guess<answer)
        {
            printf("TOO LOW!!\n");
        }else{
            printf("HOORAY THAT'S RIGHT !!\n");
        } guesses++;
    } while (guess != answer);

    printf("----------------------\n");    
    printf("answer : %d\n", answer);
    printf("guesses : %d\n", guesses);
    printf("----------------------\n");

    return 0;

}