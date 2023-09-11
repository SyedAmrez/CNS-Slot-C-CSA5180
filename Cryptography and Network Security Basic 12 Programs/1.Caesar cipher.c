#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
	char str[50];
	int k=3;
	printf("Enter the string: ");
	scanf("%s",str);
	printf("Enter the key: ");
	scanf("%d",&k);
	int i,len=strlen(str);
	char x;
	for(i=0;i<len;i++)
	{
		temp=s[i];
		x=str[i];
		x=x+k;
		str[i]=x;
		if(isupper(temp) && x>90)
		{
			str[i]=x-26;
		}
		if(islower(temp) && x>122)
		{ 
			str[i]=x-26;
		}		
	}
	printf("\nEncrypted value= %s\n",str);
	for(i=0;i<len;i++)
	{
		temp=s[i];
		x=str[i];
		x=x-k;
		str[i]=x;
		if(isupper(temp) && x<65)
		{
			str[i]=x+26;
		}
		if(islower(temp) && x<97)
		{
			str[i]=x+26;
		}		
	}
	printf("Decrypted value= %s\n",str);
	return 0;
}
