int main()
{
    int a,b,t;
    printf(" Enter value of A ?  ");
    scanf("%d",&a);
    printf(" Enter value of B ?  ");
    scanf("%d",&b);
     
    printf("\n Before swapping : A= %d, B= %d",a,b);
a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swapping (second method): A= %d, B= %d\n",a,b);
return 0;
}