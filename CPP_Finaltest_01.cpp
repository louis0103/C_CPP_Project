#include<iostream>
#include<string>
using namespace std;

int main()
{

	string	str;
	string change;
	char again;

	while(1)
	{
	cout<<"Please enter a sentence : \n";	
	getline(cin,str);
	
	for(int i=0; i<str.length(); i++)
	change+=str.substr(str.length()-i-1,1);
	
	cout<<"Inverse : "<<change<<endl;
	
	change.clear();
	
	cout<<"Conintue Y/y, other quite : ";
	cin>>again;	
	
	if(cin.peek() == '\n')
	cin.ignore();

	if(again == 'y' || again == 'Y') {cout<<"Thanks"<<endl; continue;}
	else {break;}
	
	
	}	

	return 0;
}

	
