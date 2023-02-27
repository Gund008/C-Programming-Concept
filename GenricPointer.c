#include<stdio.h>

int main()
{
    char ch='\0';
    int iNum=0;
    float fValue=0.0f;
    double dValue=0.0;

    void *ptr=NULL;  //Generic Pointer

    printf("Using Number Num\n");

    printf("Address of Num:%d\n",&iNum);
    printf("Address of ptr:%d\n",ptr);

    printf("Value of Num:%d\n",&ch);
    printf("Address of ptr:%d\n",ptr);

    return 0;
}







