#include<iostream.h>
#include<conio.h>

int main(){
clrscr();
int u,l,c;
cout<<"Number of lines = ";
cin>>u;
for(l=1;l<=u;l++)
{
for(c=1;c<=l;c++)
{
cout<<"* ";
}
cout<<endl;
}
getch();
return 0;
}
