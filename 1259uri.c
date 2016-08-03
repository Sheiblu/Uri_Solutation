#include<stdio.h>

int main()
{

    int a, b, j =0 , k = 0 ,i,l,temp;
    int am [1000], odd [1000];

    scanf("%d",&a);

    for ( i = 0 ; i<a; i++){
            scanf("%d",&b);
         if (b%2 == 0){
	    	    	 am[j++]= b;
	    	     }
	    	     else
	    	     {
	    	    	 odd[k++] = b;
	    	     }
	     }

     for (l = 0; l<j;l++){
	    for (i = 0; i<j-1;i++){
            if (am[i]>am[i+1]){

                temp = am[i];
                am[i] = am [i+1];
                am [i+1] = temp ;
            }
	    }
     }

          for (l = 0; l<k;l++){
	    for (i = 0; i<k-1;i++){
            if (odd[i] > odd[i+1]){

                temp = odd[i];
                odd[i] = odd [i+1];
                odd[i+1] = temp ;
            }
	    }
     }

      for (i = 0; i<j;i++){
        printf("%d\n",am[i]);
      }

      for (i = k-1; i>=0;i--){
        printf("%d\n",odd[i]);
      }

      return 0;
}
