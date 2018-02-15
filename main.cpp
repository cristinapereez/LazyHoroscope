//Authors: Cristina Perez
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
int lucky;

  //get user input
cout<<"What is your first name?\n";
cin>>first;
cout<<"What is your last name?\n";
cin>>last;
cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune...\n";

  //tell fortune
  lucky = first.length();
  char letter = first[0];
  
cout<<"your lucky number is "<<lucky<<endl;
if(letter == 'a'||letter == 'A'||letter == 'e'||letter == 'E'||letter=='I'||letter=='i'||letter=='o'||letter=='O'||letter=='u'||letter=='U')
{
cout<<"you are destined to be famous!"<<endl;
}
else
{ 
cout<<"you should keep a low profile."<<endl;
}
char letter2 = last[last.length()-1];
if(letter2 == 'a'||letter2=='e'||letter2 == 'i'||letter=='o'||letter=='u')
{
cout<<"you have already met your true love."<<endl;
}
cout<<"have a good day!"<<endl;

  return 0;
}
