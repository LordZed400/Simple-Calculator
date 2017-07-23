#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int main()
{
clrscr();
void calc (void);
calc();
return 0;
}

void calc(void)
{
clrscr();
int a, b,ch,c;
cout<<"Give first no: ";
cin>>a;
cout<<"Give second no: ";
cin>>b;
cout<<endl<<"Menu"<<endl;
cout<<"++++++++++"<<endl;
cout<<"1. Add"<<endl;
cout<<"2. Subtract"<<endl;
cout<<"3. Multiply"<<endl;
cout<<"4. Divide"<<endl;
cout<<"Choose: ";
cin>>ch;
switch(ch)
{
 case 1:
 {
 c = a+b;
 cout<<endl<<"Sum = "<<c;
 getch();
 break;
 }
 case 2:
 {
 c = a-b;
 cout<<endl<<"Differernce = "<<c;
 getch();
 break;
 }
 case 3:
 {
 c = a*b;
 cout<<endl<<"Product = "<<c;
 getch();
 break;
 }
 case 4:
 {
 c = a/b;
 cout<<endl<<"Quotient = "<<c;
 getch();
 break;
 }
}
}
