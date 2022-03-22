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
int c=1,d;

for(d=a;d>0;d--){
c=c*d;

}
cout<<"factorial of number is = "<<c;

}
