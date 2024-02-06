#include<stdio.h>
int main()
{
    char a;
    short int b;
    int c;
    long  int d;
    float e =3.8f;
    double f =3.8;
    printf("sizeof(a)=%lu\n",sizeof(a));
    printf("sizeof(b)=%lu\n",sizeof(a));
    printf("sizeof(c)=%lu\n",sizeof(c));
    printf("sizeof(d)=%lu\n",sizeof(d));
    printf("sizeof(e)=%lu\n",sizeof(e));
    printf("sizeof(f)=%lu\n",sizeof(f));
    return 0;
}