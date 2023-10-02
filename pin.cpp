#include<iostream>
#include<conio.h>
int main()
{
int i=0;
char pn[4],ch;
std::cout<<"\nEnter M-PESA PIN:";
for(i;((ch =_getch()!=13)&&(i<=3));i++)
    {
    pn[i] = ch;
    std::cout<<"*";
    }
std::cout<<pn[4];
return 0;
}
