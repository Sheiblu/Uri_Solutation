#include<stdio.h>

int main(){

  char a[12],b [12],c[12];

  scanf("%s %s %s",&a,&b,&c);

  if (a[0]=='v' && b[0] == 'a' && c[0] == 'c' ){
        printf("aguia\n");
  }
  else if (a[0]=='v' && b[0] == 'a' && c[0] == 'o' ){
        printf("pomba\n");
  }
  else if (a[0]=='v' && b[0] == 'm' && c[0] == 'o'){
        printf("homem\n");
  }
  else if (a[0]=='v' && b[0] == 'm' && c[0] ==  'h' ){
      printf("vaca\n");
  }
  else if (a[0]=='i' && b[0] == 'i' && c[2] == 'm' ){
        printf("pulga\n");
  }
  else if (a[0]=='i' && b[0] == 'i' && c[2] == 'r'){
        printf("lagarta\n");
  }
  else if (a[0]=='i' && b[0] == 'a' && c[0] == 'h'){
        printf("sanguessuga\n");
  }
  else if (a[0]=='i' && b[0] == 'a' && c[0] == 'o' ){
      printf("minhoca\n");
  }
  return 0;
}
