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

