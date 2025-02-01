/*
//WAP to print Fibonacci series 0,1,1,2,3,5,� nth  term
#include<stdio.h>
int main()
{
    printf("Author: Pragyan Upadhyaya | Q.n 7\n");
    int i,c,n;
    int a=0;
    int b=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        //printf("The fibonacci series of %d is\n",n);
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}

//WAP to know a number is Armstrong or not
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Pragyan Upadhyaya | Q.n 8 \n");
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;

       result += remainder * remainder * remainder;

       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}


#include <stdio.h>
int main()
{
    printf("Author: Pragyan Upadhyaya | Q.n 9\n");
    int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}


//WAP to know a number is prime or not
#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Author: Pragyan Upadhyaya | Q.n 10\n");
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("%d is not valid\n");
    }
    else if(n==1)
    {
        printf("1 is neither prime nor composite\n");
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("%d is prime number",n);
    }
    else
    {
        printf("%d is composite number",n);
    }
    return 0;
}
*/

/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

#include<stdio.h>
int main()
{
    printf("Author: Pragyan Upadhyaya | Q.n 11(a)\n");
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(6-i);j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
*/

/*

* * * * *
* * * *
* * *
* *
*


#include<stdio.h>
int main()
{
    printf("Author: Pragyan Upadhyaya | Q.n 11(b)\n");
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(6-i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/

/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

#include<stdio.h>
int main()
{
    printf("Author: Pragyan Upadhyaya | Q.n 11(c)\n");
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",j);
        }
      printf("\n");
    }
}


#include<stdio.h>
int main()
{
    printf("Author: Pragyan Upadhyaya | Q.n 11(d)\n");
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=(6-i);j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}


#include <stdio.h>
int main()
{
    printf("Author: Pragyan Upadhyaya | Q.n 11(e)\n");
    int i,j;
    int rows = 4; // Number of rows
    int cols = 5; // Number of columns
    // Loop through each row
    for (i = 1; i <= rows; i++)
    {
        // Loop through each column
        for (j = 1; j <= cols; j++) {
            printf("%d ", i + j - 1);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}


#include <stdio.h>
int main()
{
    printf("Author: Pragyan Upadhyaya | Q.n 11(f)\n");
    int i,j;
    int rows = 5; // Number of rows
    int cols = 6; // Number of columns
    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Loop through each column
        for (j = 1; j <= cols; j++) {
            if (j % 2 == 1) { // If the column number is odd
                printf("%d ", i % 2 == 1 ? 1 : 2); // Print 1 or 2 based on the row number
            } else { // If the column number is even
                printf("0 "); // Print 0 for even columns
            }
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
*/

// Write a program to find the largest element in an array.
// #include <stdio.h>
// int main()
//{
//    int i, n, largest,smallest;
//    printf("Enter the total number of elements: ");
//    scanf("%d", &n);
//    int marks[n];
//    for (i = 0; i < n; i++)
//    {
//        printf("\nEnter the element no.%d: ", i + 1);
//        scanf("%d", &marks[i]);
//    }
//    largest = marks[0];
//    for (i = 1; i < n; i++)
//    {
//        if (marks[i] < largest)
//        {
//            largest = marks[i];
//        }
//        if(marks[i]>smallest)
//        {
//        	smallest=marks[i];
//		}
//    }
//    printf("The smallest number is %d\n", largest);
//    printf("The smallest number is %d",smallest);
//}

//You are given an array age[20]. Input any ten ages of persons and 
//print them in sorted (Ascending and descending order) form.
/*
#include <stdio.h>
int main() {
    int age[20], i, j, temp;
    printf("Enter 10 ages:\n");
    for (i = 0; i < 10; i++) {
        printf("Age %d: ", i + 1);
        scanf("%d", &age[i]);
    }
    // Sorting the array in ascending order 
    for (i = 0; i < 9; i++) 
    {
        for (j = 0; j < 10 - i - 1; j++) 
        {
            if (age[j] > age[j + 1]) 
            { // Swap if current is greater than next
                temp = age[j];
                age[j] = age[j + 1];
                age[j + 1] = temp;
            }
        }
    }
    // Print sorted ages in Ascending Order
    printf("\nAges in Ascending Order:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", age[i]);
    }
    // Print sorted ages in Descending Order
    printf("\n\nAges in Descending Order:\n");
    for (i = 9; i >= 0; i--) 
    {
        printf("%d ", age[i]);
    }
    return 0;
}


//WAP to input 10 elements and print them
#include<stdio.h>
int main()
{
	printf("Author: Pragyan Upadhyaya |Q.n 1\n");
	int i,arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter the element of position %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The required output is: \n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}
*/

//Let an array of size 20. Input any 10 elements and find total 
//of even numbers and their average
#include<stdio.h>
int main()
{
	printf("Author: Pragyan Upadhyaya |Q.n2\n");
	int i,arr[20],count=0,sum=0;
	float avg;
	for(i=0;i<10;i++)
	{
		printf("Enter the number of position %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			sum+=arr[i];
			count++;
		}
	}
	avg=(float)sum/count;
	printf("The sum even numbers are: %d\n",sum);
	printf("The average of even numbers are :%.2f",avg);
}

/*
//Let an array of size 20.WAP to input 10 numbers and 
//find maximum and minimum values
#include<stdio.h>
int main()
{
	printf("Author: Pragyan Upadhyaya |Q.n 3\n");
	int num[20],i,largest,smallest;
	for(i=0;i<10;i++)
	{
		printf("\nEnter a number of position %d: ",i+1);
		scanf("%d",&num[i]);
	}
	largest=num[0];
	smallest=num[0];
	for(i=0;i<10;i++)
	{
	    if(num[i]>largest)
	    {
	        largest=num[i];
	    }
	    if(num[i]<smallest)
	    {
	        smallest=num[i];
	    }
	}
	printf("The largest number is %d\n",largest);
	printf("The smallest number is %d",smallest);
	return 0;
}


//An array contains some elements. Search an element in that array.
#include<stdio.h>
int main()
{
	printf("Author: Pragyan Upadhyaya |Q.n 4");
    int i,n,arr[20],count=0;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the element of position %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to search: ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("%d is in not in array",n);
    }
    else
    {
        printf("%d is in array",n);
    }
}


//You are given an array age[20]. Input any ten ages of persons and 
//count total number of persons who have age i) <=20  ii)>20 and <100
#include<stdio.h>
int main()
{
	printf("Author: Pragyan Upadhyaya |Q.n 5\n");
    int i,age[20],count1=0,count2=0,count3=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the age of person %d: ",i+1);
        scanf("%d",&age[i]);
    }
    for(i=0;i<10;i++)
    {
        if(age[i]<=20)
        {
            count1++;
        }
        if(age[i]>20)
        {
            count2++;
        }
        if(age[i]<100)
        {
            count3++;
        }
    }
    printf("The total number of person having age <=20 is %d\n",count1);
    printf("The total number of person having age >20 is %d\n",count2);
    printf("The total number of person having age <100 is %d",count3);
}


//You are given an array age[20]. Input any ten ages of persons and 
//print them in sorted (Ascending and descending order) form.
#include <stdio.h>
int main() 
{
	printf("Author: Pragyan Upadhyaya |Q.n 6\n");
    int age[20], i, j, temp, n = 10;
    printf("Enter 10 ages:\n");
    for (i = 0; i < n; i++) 
	{
        printf("Age %d: ", i + 1);
        scanf("%d", &age[i]);
    }
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - 1 - i; j++) 
        {  
            if (age[j] > age[j + 1]) 
            {  
                temp = age[j];
                age[j] = age[j + 1];
                age[j + 1] = temp;
            }
        }
    }
    printf("\nAges in Ascending Order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", age[i]);
    }

    printf("\n\nAges in Descending Order:\n");
    for (i = n - 1; i >= 0; i--) 
    {  
        printf("%d ", age[i]);
    }
    return 0;
}

// We have two matrices of order 3x3. Find their sum.
#include<stdio.h>
int main()
{
	printf("Author: Pragyan Upadhyaya |Q.n 7\n");
    int i,j,mat1[3][3],mat2[3][3],mat[3][3];
    printf("For first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element of %d rows %d columns: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nFor second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element of %d rows %d columns: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Result:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mat[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

//We have a matrix of order 3x4. Input its elements and print its elements
//in transpose form.
#include <stdio.h>
int main() 
{
	printf("Author: Pragyan Upadhyaya |Q.n 8\n");
    int mat1[3][4],mat[4][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter the element of %d rows %d columns: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<3;i++) //transposition process
    {
        for(j=0;j<4;j++)
        {
            mat[j][i] = mat1[i][j];
        }
    }
    printf("\nTransposed Matrix\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/


