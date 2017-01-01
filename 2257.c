#include<stdio.h>
#include<string.h>

int main()

{

    int j,check,A=0,a=0,N=0,wrong = 1 ,i=10;
    char password[50];



           while(scanf("%[^\n]%*c",&password)!= EOF){
            check = strlen(password);

                if (check>5 && check<33){
                        wrong = 0;

                    for (j=0;j<check;j++){

                        if (password[j]>=65 && password[j]<=90){
                            A=1;
                            }
                        else if (password[j]>=97 && password[j]<=122){
                            a=1;
                            }

                        else if (password[j]>=48 && password[j]<=57){
                            N=1;
                                        }
                        else {
                            wrong = 1;
                            break;
                            }

                        }
                }

                if (A == 1 && a== 1 && N == 1 && wrong == 0 ){
                    printf("Senha valida.\n");
                }

                else {
                    printf("Senha invalida.\n");
                }

            A = 0, a=0, N = 0, wrong = 1;


 }

    return 0;
}

