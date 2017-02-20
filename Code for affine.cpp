#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char c,text[50],cipher[50];
	int k1,k2,x,z;
	cout<<"enter plain text: ";
	cin>>text;
	cout<<"enter key 1: ";
	cin>>k1;
	cout<<"enter key 2: ";
	cin>>k2;
	for(int j=0;j<strlen(text);j++)
	{
		c=text[j];
		for(int i=0;i<26;i++)
		{
			if(a[i]==c)
			{
				x=(((k1*i)+k2)%26);
			}
			
			}
			cipher[j]=a[x];
		}
		for(int k=0;k<strlen(text);k++)
		{
			cout<<cipher[k];
		}
		cout<<"\nDecryption\n";
		for(int q=0;q<strlen(text);q++)
		{
			for(int d=0;d<26;d++)
			{
				if(1==((5*z)%26))
				{
					for(int i=0;i<strlen(text);i++)
					{
						text[i]=a[z*(i-k2)%26];
						
					}
				}
			}
			cout<<text[q];
		}
		return 0;
		}
		
