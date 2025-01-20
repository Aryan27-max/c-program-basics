#include<stdio.h>
#include<ctype.h>

int main () {
    
    char questions[][100] = { "Q1. what year did C debut ?",
                       "Q2. who is the father of c program ?",
                       "Q3. whatis the predecessor of C ?"};
    
    char options[][100] = { "A.1950","B.1999","C.1972","D.1983",
                            "A.dennish ritchie","B.tom holand","C.aryan","D.tim cook",
                            "A.Objective C","B.B","C.C++","D.C#",};

   char answers[3] = {'C','A','B'};
   
   int numberOfquestions = sizeof(questions)/ sizeof(questions[0]);
   
   char guess;
   char score = 0;
   
   printf("QUIZ GAME ! \n");
   
   for(int i = 0 ;  i < numberOfquestions ; i++)
   {
       printf("%s\n", questions[i]);
       
       for (int j = i * 4; j < (i * 4) + 4; j++) {
                printf("%s\n", options[j]);}
   
       printf("YOUR answer :");
       scanf(" %c",&guess); // leave a space before %c to counter the inpuut buffer
     
       
       guess = toupper(guess);
       
       if( guess == answers[i])
       {
         printf("CORRECT !\n");
         score++;
       }else{
           printf("WRONG !\n");
       }
   }
   
       printf("Final Score : %d/%d\n", score ,numberOfquestions );
       
   return 0;
    
}
