#include<stdio.h>
int main(){

    float n1,n2,n3,n4;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    n1 = ((n1*2) + (n2*3) + (n3*4) + n4)/10;

    printf("Media: %.1f\n",n1);


        if(n1>= 7){
            printf("Aluno aprovado.\n",n1);
        }
        else if(n1>=5){
            printf("Aluno em exame.\n",n1);
        }

        else {
            printf("Aluno reprovado.\n",n1);
        }


        while (scanf("%f",&n2)!=EOF){
        n1 = (n1+n2)/2;
        printf("Nota do exame: %.1f\n",n2);
        if(n1>= 5){
            printf("Aluno aprovado.\n",n1);
        }
        else {
            printf("Aluno reprovado.\n",n1);
        }
         printf("Media final: %.1f\n",n1);
         break;
    }


    return 0;
}

