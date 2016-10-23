#include<stdio.h>
#include<string.h>

int res (char a);

int main() {

    char ch[1002];
    int ar[10]={0},a,i,c,m;

    while(scanf("%s",&ch)!=EOF){

            a = strlen(ch);


    for (i=0;i<a;i++){
            c = res(ch[i]);

            ar[c] = ar[c]+1;


    }
     c = 0;



    for (i=0;i<=9;i++){
        if ( ar[i] >= c){
            c = ar[i];
            m = i;

        }
        ar[i] = 0;
    }
    printf("%d\n",m);

    i = 0,c =0,m=0;
    a = 0;
    }
    return 0;
}

   int res (char a){
   if(a=='0'){
    return 0;
   }
   else if(a=='1'){
    return 1;
   }
   else if(a=='2'){
    return 2;
   }
   else if(a=='3'){
    return 3;
   }
   else if(a=='4'){
    return 4;
   }
   else if(a=='5'){
    return 5;
   }
   else if(a=='6'){
    return 6;
   }
   else if(a=='7'){
    return 7;
   }
   else if(a=='8'){
    return 8;
   }
   else if(a=='9'){
    return 9;
   }

 return -1;
   }
