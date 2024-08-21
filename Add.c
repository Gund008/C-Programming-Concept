#include<stdio.h>

int addition(int iNo1,int iNo2)
{
  int iAns=0;
  iAns=iNo1 + iNo2;
  return iAns;
}

int main()
{
  int A=10, B=20, C=0;
  
  C=addition(A,B);
  printf("Addtion is:%d",C);
   return 0;
}