
Conversation opened. 1 read message.

Skip to content
Using Gmail with screen readers
in:sent c++ 

47 of 47
GETNET DEMIL C++ PROJECT TO MR Tarekegne

Getnet Demil <getnetd24@gmail.com>
Attachments
Jan 30, 2015, 1:31 PM
to tarea2003

announs me whether u are received or not as soon as u receivd.   tankes!!!
Attachments area
// NAME  GETNET DEMIL
//ID 0600828
//SECTION B
//SCHOOL OF ELECTRICAL AND COMPUTER ENGINNERING
// C++ PROJECT ON nested structure variables with array elements

#include<iostream.h>
#include<conio.h>
const int MAX=15;
const int SIZE=4;
const int WIDTH=5;

struct course
{
float mark[SIZE];
float cp[WIDTH];
char name[MAX];
};

struct student
{
char name[MAX];
char f_name[MAX];
char id[8];
course gpa;
}std[WIDTH];

void main()
{

float a;
int i;
float n=0,m,w=0;
for(int b=0;b<=SIZE;b++)
{
for(i=0;i<=WIDTH;i++)
{
cout<<"Enter the course"<<endl;
cin>>std[i].gpa.name;
cout<<"Enter the mark "<<std[i].gpa.name<<endl;
cin>>std[i].gpa.mark[i];

if(std[i].gpa.mark[i]>85)
m=4,cout<<"your mark A ",cout<<endl;

else if(std[i].gpa.mark[i]>80)
m=3.75,cout<<"your mark is A- "<<endl;

else if(std[i].gpa.mark[i]>75)
m=3.5,cout<<"your mark is B+ "<<endl;

else if(std[i].gpa.mark[i]>70)
m=3,cout<<"your mark is B "<<endl;

else if(std[i].gpa.mark[i]>65)
m=2.75,cout<<"your mark is B- "<<endl;

else if(std[i].gpa.mark[i]>60)
m=2.5,cout<<"your mark is C+ "<<endl;

else if(std[i].gpa.mark[i]>55)
m=2,cout<<"your mark is C "<<endl;

else if(std[i].gpa.mark[i]>50)
m=1.75,cout<<"your mark is C- "<<endl;

else if(std[i].gpa.mark[i]>40)
m=1,cout<<"your mark is D "<<endl;

else if(std[i].gpa.mark[i]>30)
m=0,cout<<"your mark is F "<<endl;
else
m=0,cout<<"your mark is F "<<endl;
cout<<"Enter the value of cp ";

cin>>std[i].gpa.cp[i];
cout<<endl;

w=w+std[i].gpa.cp[i];
n=n+(m*std[i].gpa.cp[i]);
}
a=n/w;
cout<<"Enter the name of the student ";
cin>>std[i].name;
cout<<"Enter the name of the student's father name ";
cin>>std[i].f_name;

cout<<"Enter the ID  ";
cin>>std[i].id;
n=0,w=0;
cout<<"STUDENTS NAME: "<<std[i].name<<endl;
cout<<"STUDENTS FATHER NAME: "<<std[i].f_name<<endl;
cout<<"STUDENT ID: "<<std[i].id<<endl;
cout<<"GPA: "<<a<<endl;
}
getch();
}   //submitted to programmer Tarekegne.
Getnet demil Project.cpp
Displaying Getnet demil Project.cpp.