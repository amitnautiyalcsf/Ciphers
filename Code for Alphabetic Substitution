#include<iostream>
#include<cstring>
using namespace std;
void encrypt();
void decrypt();
char lookup(char a, int ch);
int main()
{

	int choice;
	cout<<"Enter the choice: 1 for Encryption and 0 for Decryption"<<endl;
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
	int len=strlen(input);
	for(int i=0; i<len; i++)
	{
		output[i]= lookup(input[i], 1);
		
	}
	cout<<output;
}
void decrypt()
{
	char input[40], output[40]={' '};
	cout<<"Enter the string"<<endl;
	cin>>input;
	int len=strlen(input);
		for(int i=0; i<len; i++)
		{
			output[i]=lookup(input[i],0);
			
		}
		cout<<output;
	}
	char lookup(char a,int ch)
	{
		char orig[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		char rep[] ={'j','g','r','t','y','u','i','o','p','q','w','e','a','s','d','f','h','k','l','z','m','n','x','c','v','b'};
		int b= a-97;
		if(ch==1)
		return rep[b];
		else if(ch==0)
		{
			for(int i=0; i<26; i++)
			{
				if(a==rep[i])
				{
					return orig[i];
			}
				
				}
			}
		}
	
