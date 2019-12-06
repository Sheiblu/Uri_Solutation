#include<stdio.h>

getInputValue(char a);

int main() {
   char input [1005] ;
   int i = 0;
    while(1){
        gets(input);
        if( strlen(input) == 1 && input[0] == '0') break;

        int totalSum = 0;
            for(i = 0; i < strlen(input); i++){
                totalSum += getInputValue(input[i]);
            }

            i = 1;
            while(totalSum > 9){
                    int temp = 0;
                    i++;
                    while(totalSum > 0){
                        temp += totalSum % 10;
                        totalSum /= 10;
                    }
                    totalSum = temp;
            }

        if(totalSum % 9 == 0 ) {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", input, i);

        } else {
            printf("%s is not a multiple of 9.\n", input);
        }
   }
  return 0;
}

int getInputValue(char a){
   int result  = 0;
   switch(a){
    case '0': result = 0;
             break;
    case '1': result = 1;
             break;
    case '2': result = 2;
             break;
    case '3': result = 3;
             break;
    case '4': result = 4;
             break;
    case '5': result = 5;
             break;
    case '6': result = 6;
             break;
    case '7': result = 7;
             break;
    case '8': result = 8;
             break;
    case '9': result = 9;
             break;

   }
   return  result;
}

