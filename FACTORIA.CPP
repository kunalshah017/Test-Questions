#include<iostream.h>
#include<conio.h>
void factorial(int);

int main(){
clrscr();
int u;

cout<<"Enter a number = ";
cin>>u;

factorial(u);
getch();
return 0;
}
void factorial(int a){
int c=1;

while(c<a){
a=a*c;
c++;

}
cout<<"factorial of number is = "<<a;

}
