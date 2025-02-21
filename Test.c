/*
#include <stdio.h>
int main() 
{
    int i;
    printf("Author: [YOUR NAME]| Q.n1\n");
    char str[5][50];
    for(i=0;i<5;i++)
    {
        printf("String %d: ",i+1);
        scanf("%s",str[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("String %d: %s\n",i+1,str[i]);
    }
}

#include <stdio.h>
#include<string.h>
int main() 
{
	printf("Author: [YOUR NAME] |Q.n 2\n");
    int i;
    char str[50];
    printf("String: ");
    gets(str);
    printf("\n");
    i=strlen(str);
    printf("String %s has %d letters",str,i);
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n3\n");
	char name[50];
	printf("Enter a string: ");
	gets(name);
	printf("\n");
	printf("The reverse is %s",strrev(name));
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n4\n");
	char str1[50],str2[50];
	printf("Enter a first string: ");
	gets(str1);
	printf("Enter a second string: ");
	gets(str2);
	printf("\n");
	printf("To Upper case: %s\n",strupr(str1));
	printf("To Loewr case: %s",strlwr(str2));
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n5\n");
	char str1[50],str2[50];
	printf("String: ");
	gets(str1);
	printf("\n");
	strcpy(str2,str1);
	printf("The string after copied is %s",str2);
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n6\n");
	char str1[50],str2[50];
	printf("Enter a first string: ");
	gets(str1);
	printf("Enter a second string: ");
	gets(str2);
	printf("\n");
	if(strcmp(str1,str2)>0)
	{
		printf("%s comes after %s",str1,str2);
	}
	else if(strcmp(str1,str2)==0)
	{
		printf("%s and %s are same" ,str1,str2);
	}
	else
	{
		printf("%s comes before %s",str1,str2);
	}
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n7\n");
	char str1[50],str2[50];
	printf("Enter a first string: ");
	gets(str1);
	printf("Enter a second string: ");
	gets(str2);
	printf("\n");
	strcat(str1,str2);
	printf("The new string is %s",str1);
}

#include<stdio.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n8\n");
	int i,count=0;
	char str[50];
	printf("String: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("\nThere are %d letters in %s",count,str);
}


#include<stdio.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n9\n");
    int i,count=0,v=0,c;
    char str[50];
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || 
		str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' 
		|| str[i]=='U')
        {
            v++;
        }
    }
    c=count-v;
    printf("\nThere are %d letters in %s",count,str);
    printf("\nThere are %d vowels in %s",v,str);
    printf("\nThere are %d consonants in %s",c,str);
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n10\n");
	char str1[50],str2[50];
	int result;
	printf("String: ");
	gets(str1);
	
	strcpy(str2, str1);
    strrev(str2);
	
	if((strcmp(str1,str2)==0)) 
	{
		printf("%s is palindrome",str1);
	}
	else
	{
		printf("%s is not palindrome",str1);
	}
}

SORRY LA GUYS Q.N 11 RW 12 MALAI PANI AAYENA O_O :: 

#include<stdio.h>
#include<string.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n13\n");
	int i,j;
	char str[10][50],temp[50];
	for(i=0;i<10;i++)
	{
		printf("Enter a name of student %d: ",i+1);
		gets(str[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("\nAscending order\n");
	for(i=0;i<10;i++)
	{
		printf("%s\n",str[i]);
	}
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("Author: [YOUR NAME] |Q.n14\n");
	int i,j,c=0;
	char str[10][50],temp[50];
	for(i=0;i<10;i++)
	{
		printf("String%d: ",i+1);
		gets(str[i]);
	}
	printf("\nYou are looking for which string?: ");
	gets(temp);
	for(i=0;i<10;i++)
	{
		if(strcmp(str[i],temp)==0)
		{
			c++;
		}
	}
	if(c!=0)
	{
		printf("%s is in list",temp);
	}
	else
	{
		printf("%s is not in list",temp);
	}
}
*/
