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
cout<<"Your lucky number is "<<lucky<<endl;

  return 0;
}
