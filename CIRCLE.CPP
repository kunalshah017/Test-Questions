#include<iostream.h>
#include<conio.h>

int main(){
clrscr();
int rad;

cout<<"Enter Radius Of Circle = ";
cin>>rad;

double circum=2*3.14*rad;
cout<<"Circumference of Circle is = "<<circum<<endl;

double area=3.14*rad*rad;
cout<<"Area Of Circle is = "<<area<<endl;

getch();

return 0;
}