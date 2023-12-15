#include<stdio.h>
#include<string.h>
#include"header.h"
#define MAX(x,y) ((x>y)?x:y)
void a1()
{
  int qn,k,k2,flag=0,i=0,j=0,character=0,num=0,other=0,temp,vowels=0,consonants=0,word=0;
  char str[100],str2[100];
  printf("\n\t\t\t\t\t\t-:Assignment-1:-\n\n");
  printf("\t\t\t\t\tQ1. String Char-Case Change\n");
  printf("\t\t\t\t\tQ2. String is Palindrome or Not\n");
  printf("\t\t\t\t\tQ3. A String Is an Anagram or Not\n");
  printf("\t\t\t\t\tQ4. Find the length of a string.\n");
  printf("\t\t\t\t\tQ5. Copy one string to another string.\n");
  printf("\t\t\t\t\tQ6. Concatenate two strings.\n");
  printf("\t\t\t\t\tQ7. Compare two strings.\n");
  printf("\t\t\t\t\tQ8. Convert lowercase string to uppercase.\n");
  printf("\t\t\t\t\tQ9.Convert uppercase string to lowercase.\n");
  printf("\t\t\t\t\tQ10.Toggle the case of each character of a string.\n");
  printf("\t\t\t\t\tQ11.Find the total number of alphabets, digits or special characters in a string.\n");
  printf("\t\t\t\t\tQ12.Count the total number of vowels and consonants in a string.\n");
  printf("\t\t\t\t\tQ13.Count the total number of words in a string.\n");
  printf("\t\t\t\t\tQ14.Find the reverse of a string.\n\n");
  printf("Enter Question Number : ");
  scanf("%d",&qn);
  printf("Entr string: ");
  getchar();
  gets(str); 
  k=strlen(str);
	
	switch(qn)
	{
	case 1:
	case 10:
		
 		
		while(str[i]!='\0')
		{
		
			if(str[i]>='A' && str[i]<='Z')
			{
			  str[i]=str[i]+32;
			}
	
			else if(str[i]>='a' && str[i]<='z')
			{
			  str[i]=str[i]-32;
			}
			i++;
		}
		printf("Output string = %s\n",str);
		
	break;
	
	case 2:
	      
		for(i=0;i<k;i++)
		{
			if(str[i]==str[k-i-1])
			flag=1;	
			else
			{
			flag=0;
			break;	
			}	  
		}
		if(flag==1)
		printf("String is palindrome\n");
		else
		printf("String is not palindrome\n");
	break;
	
	case 3:
		printf("Enter second string : ");
		gets(str2);
		k2=strlen(str2);
		if(k!=k2)
		{
		printf("string are not Anagram");
		break;
		}
		else{
		for(i=0;i<k;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(str[i]>str[j])
				{
					temp=str[i];
					str[i]=str[j];
					str[j]=temp;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(str2[i]>str2[j])
				{
					temp=str2[i];
					str2[i]=str2[j];
					str2[j]=temp;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			if(str[i]==str2[i])
			flag=1;
			else
			{
			printf("string are not Anagram");
			break;
			}
		}
		}
		
		if(flag==1)
		printf("String are Anagram\n");
		
	break;
	
	case 4:
		
		printf("String Length : %d\n",k);
	break;
	
	
	case 5:
		
		
		while(k>=0)
		{
			str2[k]=str[k];
			k--;
		}
		
		printf("Copy string : %s\n",str2);
	break;
	
	case 6:
		printf("Enter second string : ");
		gets(str2);
		k2=strlen(str2);
		for(i=0;i<k2;i++)
		{
			str[k]=str2[i];
			k++;
		}
		str[k]='\0';
		printf("%s",str);
		
	break;
	
	case 7:
		printf("Enter 2 String : ");
		gets(str2);
		k=MAX(strlen(str),strlen(str2));	
		for(i=0;i<k;i++)
		{
			if(str[i]==str2[i])
			continue;
			else
			{
				printf("String not match.");
				break;
			}
			
		}
		if(i==k)
		printf("String match.");
		
	break;
	
	case 8:
	while(str[i]!='\0')
		{
		
			if(str[i]>='a' && str[i]<='z')
			{
			  str[i]=str[i]-32;
			}
			i++;
		}
		printf("Output string = %s\n",str);
	break;
	
	case 9:
	while(str[i]!='\0')
		{
		
			if(str[i]>='A' && str[i]<='Z')
			{
			  str[i]=str[i]+32;
			}
	
			i++;
		}
		printf("Output string = %s\n",str);
	break;
	
	case 11:
		
		while(str[i]!='\0')
		{
			if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
				character++;
			else if(str[i]>=48&&str[i]<=57)
				num++;
			else
				other++;
		
		   i++;
		}
		
		printf("Number of Alphabets : %d\n",character);
		printf("Number of Digits : %d\n",num);
		printf("Special Character : %d\n",other);
	break;
	
	case 12:
		k=k-1;
		while(k>=0)
		{
			if((str[k]>=65 && str[k]<=90)||(str[k]>=97&&str[k]<=122))
			{
				if(str[k]=='A'|str[k]=='E'||str[k]=='I'||str[k]=='O'||str[k]=='U'||str[k]=='a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||str[k]=='u')
				vowels++;
				else
				consonants++;
				
			}
			
			k--;
			
		}
		printf("Vowels : %d",vowels);
		printf("Consonants : %d",consonants);
	break;
	case 13:
		while(str[i]!='\0')
		{
			if((str[i]==' '&&str[i+1]!=' ')||(str[i+1]=='\0'&&str[i]!=' '))
			word++;
			
			i++;
		}
		printf("Number of Words : %d",word);
	break;
	case 14:
		for(i=0;i<(k/2);i++)
		{
			temp=str[i];
			str[i]=str[k-1-i];
			str[k-1-i]=temp;
		}
		printf("Reverse string : %s\n",str);
	break;
	default:
		printf("Question not exist\n");
	}
}
