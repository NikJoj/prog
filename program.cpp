#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class item
{
char name[25];
char type[25];
float cost;
float rate;
};

void temp()
{
clrscr();
for (int i=0;i<10;i++)
cout<<"\n\t \t";
}

void menu1()
{
temp();
cout<<"1. Admin login"<<endl;
cout<<"\t \t2. Shop"<<endl;
cout<<"\t \t3. Exit"<<endl;
}

void menu2()
{
temp();
cout<<"1. Add item"<<endl;
cout<<"\t \t2. Delete item"<<endl;
cout<<"\t \t3. View item"<<endl;
}

void main()
{
item obj;
fstream x;
char pwd[30],ch;

temp();
cout<<"Welcome to *-MY CART-* YOUR DREAMS COME TRUE !"<<endl;

abc:

if(getch())
{
temp();
menu1();
}

if (getch() == '1')
{
temp();

cout<<"Enter password: ";

for(int i=0; ;i++)
{
ch=(char) getch();

if(ch != 'y')
{
cout<<"*";
pwd[i]=ch;
}
else
{
pwd[i]='\0';
break;
}
}

if(!strcmpi(pwd,"admin"))
{
xyz:

menu2();
char opt,del_name;
opt=ge

switch (opt)
{
case 1: temp();
	//write objects to file
	break;

case 2: temp();
	//read object from file and delete
	break;

case 3: temp();
	// read each object from file and display
	break;

default: cout<<"Wrong entry! ";
	 goto xyz;
}
}
else
{
temp();
cout<<"Incorrect password!";
goto abc;
}
}
else
if(getch()=='2')
{
//read each object from file and display
//ask for name and create shop code
}
else
if(getch()=='3')
{
abort();
}

getch();
}
