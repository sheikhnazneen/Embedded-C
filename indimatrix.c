//Program to print Sum of individual Rows and Columns of a Matrix | C Programming
#include<stdio.h>
int main()
{
    int rows,cols;
    //input no.of rows & cols
    printf("Enter the rows : ");
    scanf("%d",&rows);
    printf("Enter the cols: ");
    scanf("%d",&cols);

    int matrix[rows][cols];
    int rowSum[rows],colSum[cols];

    //Initialize rowSum and colSum to 0
    for(int i=0;i<rows;i++){
        rowSum[i]=0;
    }
    for(int j=0;j<cols;j++){
        colSum[j]=0;
    }
    //Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j =0;j<cols;j++){
         printf("Elements [%d][%d]: ",i+1,j+1);
         scanf("%d",&matrix[i][j]);

         //Calculate row sum and col sum
         rowSum[i] += matrix[i][j];
         colSum[j] += matrix[i][j];
        }
    }
        //print the matrix
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("%d",matrix[i][j]);
            }
            printf("\n");
        }
        //print sum of each row
        printf("\nSum of each row\n");
        for(int i =0;i<rows;i++){
            printf("Row %d: %d\n",i+1,rowSum[i]);
        }
        //print sum of each col
        printf("\nSum of each col\n");
        for(int j =0;j<cols;j++){
            printf("Column %d: 5d\n",j+1,colSum[j]);
        }
        return 0;
}