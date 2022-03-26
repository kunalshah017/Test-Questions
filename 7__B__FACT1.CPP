#include<iostream.h>
#include<conio.h>

void factorial(int);
void main(){
clrscr();
int u;

cout<<"Enter A Number = ";
cin>>u;

factorial(u);
getch();
}
void factorial(int a){

int c=a,d=1;
for(c=a;c>0;c--)
{
d=c*d;
}
cout<<"Facotrial of number is = "<<d;
}