#include<iostream>
#include<cstring>
using namespace std;
char lookup(char a);
void encrypt();
void decrypt();
char lookkup(char a);
int key;
int main()
{
	int choice;
	cout<<"enter the key for shift cipher"<<endl;
	cin>>key;
	cout<<"enter the choice: 1 for Encryption and 0 for Decryption"<<endl;
	cin>>choice;
	if(choice==1)
	encrypt();
	else if(choice==0)
	decrypt();
	return 0;
	
}
void encrypt()
{
	char input[40], output[40]={' '};
	cout<<"Enter the string"<<endl;
	cin>>input;
	int length=strlen(input);
	for(int i=0; i<length; i++)
	{
		output[i]= lookup(input[i]);
		
	}
	cout<<output;
}
char lookup(char a)
{
   char abc[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int b = a-97;
int g = (b+key) % 26;
return abc[g];
}

void decrypt()
{
	char input[40], output[40]={' '};
	cout<<"Enter the string"<<endl;
	cin>>input;
	int length=strlen(input);
	for(int i=0; i<length; i++)
	{
		char hell= lookkup(input[i]);
		output[i]=hell;
		
	}
	cout<<output;
}
char lookkup(char a)

{
	char abc[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int b = a-97;
	int g = (b-key);
	if(g<0)
	g+=26;
	return abc[g];
}
	
