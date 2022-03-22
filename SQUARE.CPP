#include<iostream.h>
#include<conio.h>

void square(int);
int main(){
clrscr();
int u;
cout<<"Enter a number you want to Square = ";
cin>>u;
square(u);
getch();
return 0;
}
void square(int a){
int res=a*a;
cout<<"Square of number is = "<<res;
}