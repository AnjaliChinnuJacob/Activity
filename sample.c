#include<stdio.h>
void swap(int*,int*);
int main() {
  int a,b;
  a=30;
  b=40;
  swap(&a,&b);
  printf("a=%d,b=%d\n",a,b);
  return 0;
}
void swap(int *p1,int *p2) {
  int t=*p1;
  *p1=*p2;
  *p2=t;
}
