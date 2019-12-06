#include<stdio.h>

int main(){
     char input [1005] ;
     char support [1005];
     int i = 0, point = 1, loop = 0, j = 0;
     scanf("%d", &loop);
     gets(input);

     for(j=0; j < loop; j++) {
      gets(input);
      support[0] = input[0];
      i = 0, point = 1;

      for(i = 1; i < strlen(input); i++){
            if(input[i] == ')' && support[point-1] == '(') point--;
            else if(input[i] == ']' && support[point-1] == '[') point--;
            else support[point++] = input [i];
      }

            if( (strlen(input))== 0|| point == 0) printf("Yes\n");
            else printf("No\n");

     }

    return 0;
}
