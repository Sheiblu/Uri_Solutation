#include <stdio.h>

int day(int x, int y);

int main(){
   int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){

    if(a == 12 && b == 24){
        printf("E vespera de natal!\n");
    }

    else if(a == 12 && b == 25){
        printf("E natal!\n");
    }
    else if ( a == 12 && b>25 ){
        printf("Ja passou!\n");
    }
    else if( a == 12 && b<24 ){
        printf("Faltam %d dias para o natal!\n",25-b);
    }
    else {
        printf("Faltam %d dias para o natal!\n",day(a,b));
    }

    }

   return 0;
}

    int day(int x, int y){
        int m ;
        if (x == 11){
            m = 54-y;
        }

        else if (x == 10){
            m = 85-y;
        }
        else if (x == 9){
            m = 115 -y;
        }
        else if (x == 8){
            m = 146-y;
        }
        else if ( x == 7){
            m = 177 -y;
        }
        else if (x == 6){
            m =  207 -y;
        }
        else if (x ==5 ){
            m = 238 -y;
        }
        else if (x == 4){
            m = 268 - y;
        }
        else if (x == 3 ){
            m =  299 - y;
        }
        else if (x == 2){
            m = 328 - y;
        }
        else if (x == 1){
            m = 359 - y;
        }

        return m+1 ;
    }

