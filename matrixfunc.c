#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int row1, col1, row2, col2;
float Determinant(float[][25], float);
void cofactor(float[][25], float);
void Transpose(float[][25], float[][25], float);
int rankMatrix[10][10];
void Transpose(float num[25][25], float fac[25][25], float r)
{
    int i, j;
    float b[25][25], inverse[25][25], d;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            b[i][j] = fac[j][i];
        }
    }
    d = Determinant(num, r);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            inverse[i][j] = b[i][j] / d;
        }
    }
    printf("\n\n\nThe inverse of matrix is : \n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("\t%f", inverse[i][j]);
        }
        printf("\n");
    }
}
/** Function reading the matrix row by row **/
void read(int r, int c)
{
    printf("Enter %d x %d order matrix values(Row by Row) :\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &rankMatrix[i][j]);
}

/** function display matrix **/
void display(int r, int c)
{
    printf("Matrix is : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%4d", rankMatrix[i][j]);
        printf("\n");
    }
}
/** This function exchange two rows of a matrix **/
void swap(int r1, int r2, int c)
{
    int t;
    for (int i = 0; i < c; i++)
    {
        t = rankMatrix[r1][i];
        rankMatrix[r1][i] = rankMatrix[r2][i];
        rankMatrix[r2][i] = t;
    }
}
/**This function find rank of matrix **/
int rank(int r1, int c1)
{
    int i, j, k;
    float ratio;
    for (i = 0; i < c1; i++)
    {
        printf("\nSTEP = %d\n", i + 1);
        display(row1, col1);
        if (rankMatrix[i][i] != 0) /* Diagonal element is not zero */
            for (j = 0; j < r1; j++)
                if (j != i)
                {
                    /* Make all the element above and nelow the current principal
                   diagonal element zero */
                    ratio = rankMatrix[j][i] / rankMatrix[i][i];
                    for (k = 0; k < c1; k++)
                        rankMatrix[j][k] -= ratio * rankMatrix[i][k];
                }
                else
                    printf("\n");
        /* principal Diagonal element is zero */
        else
        {
            for (j = i + 1; j < r1; j++)
                if (rankMatrix[j][i] != 0)
                { /* Find non zero elements in the same column */
                    swap(i, j, c1);
                    break;
                }
            if (j == r1)
            {
                c1--;
                for (j = 0; j < r1; j++)
                    rankMatrix[j][i] = rankMatrix[j][c1];
            }
            i--;
        }
    }
    return c1;
}
void cofactor(float num[25][25], float f)
{
    float b[25][25], fac[25][25];
    int p, q, m, n, i, j;
    for (q = 0; q < f; q++)
    {
        for (p = 0; p < f; p++)
        {
            m = 0;
            n = 0;
            for (i = 0; i < f; i++)
            {
                for (j = 0; j < f; j++)
                {
                    if (i != q && j != p)
                    {
                        b[m][n] = num[i][j];
                        if (n < (f - 2))
                            n++;
                        else
                        {
                            n = 0;
                            m++;
                        }
                    }
                }
            }
            fac[q][p] = pow(-1, q + p) * Determinant(b, f - 1);
        }
    }
    Transpose(num, fac, f);
}
float Determinant(float inverseMatrix[25][25], float k)
{
    float s = 1, det = 0, b[25][25];
    int i, j, m, n, c;
    if (k == 1)
    {
        return (inverseMatrix[0][0]);
    }
    else
    {
        det = 0;
        for (c = 0; c < k; c++)
        {
            m = 0;
            n = 0;
            for (i = 0; i < k; i++)
            {
                for (j = 0; j < k; j++)
                {
                    b[i][j] = 0;
                    if (i != 0 && j != c)
                    {
                        b[m][n] = inverseMatrix[i][j];
                        if (n < (k - 2))
                            n++;
                        else
                        {
                            n = 0;
                            m++;
                        }
                    }
                }
            }
            det = det + s * (inverseMatrix[0][c] * Determinant(b, k - 1));
            s = -1 * s;
        }
    }
    return (det);
}
void addMatrices(int firstMatrix[row1][col1], int secondMatrix[row2][col2])
{
    printf("The resulting matrix is shown below \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", firstMatrix[i][j] + secondMatrix[i][j]);
        }
        printf("\n");
    }
}
void subMatrices(int firstMatrix[row1][col1], int secondMatrix[row2][col2])
{
    printf("The resulting matrix is shown below \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", firstMatrix[i][j] - secondMatrix[i][j]);
        }
        printf("\n");
    }
}
void multiMatrices(int firstMatrix[row1][col1], int secondMatrix[row2][col2])
{
    printf("The resulting matrix after multiplication is shown below :-\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            int ind = 1;
            int sum = 0;
            while (ind <= col1)
            {
                sum += firstMatrix[i][ind - 1] * secondMatrix[ind - 1][j];
                ind++;
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}
void sqMatrix(int matrix[row1][col1])
{
    printf("The square of the matrix is shown below :-\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            int ind = 1;
            int sum = 0;
            while (ind <= col1)
            {
                sum += matrix[i][ind - 1] * matrix[ind - 1][j];
                ind++;
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}
void multiByConst(int matrix[row1][col1], int multiplier)
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", matrix[i][j] * multiplier);
        }
        printf("\n");
    }
}

void divByConst(int matrix[row1][col1], float divisor)
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%.2f ", (float)(matrix[i][j]) / divisor);
        }
        printf("\n");
    }
}
void trace(int matrix[row1][col1])
{
    int sum = 0;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("The trace of this matrix is = %d\n", sum);
}
void transpose(int matrix[row1][col1], int tMatrix[col1][row1])
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            tMatrix[j][i] = matrix[i][j];
        }
    }
}
float determinant(int matrix[row1][row1])
{
    int ratio;
    float det = 1;
    for (int i = 0; i < row1; i++)
    {
        for (int j = i + 1; j < row1; j++)
        {
            ratio = matrix[j][i] / matrix[i][i];

            for (int k = 0; k < row1; k++)
            {
                matrix[j][k] = matrix[j][k] - ratio * matrix[i][k];
            }
        }
    }
    for (int i = 0; i < row1; i++)
    {
        det = det * matrix[i][i];
    }
    return det;
}
int main()
{
    char stringByUser[50];
    printf("Type 'mc' for MULTIPLYING the matrix by a constant number.\n");
    printf("Type 'dc' for DIVIDING the matrix by a constant number.\n");
    printf("Type 'add' for ADDING 2 matrices.\n");
    printf("Type 'sub' for SUBTRACTING 2 matrices. \n");
    printf("Type 'trace' for TRACE of a matrix.\n");
    printf("Type 'trans' for TRANSPOSE of a matrix.\n");
    printf("Type 'multi' for MULTIPLYING 2 MATRICES.\n");
    printf("Type 'sq' to find the SQUARE of a matrix.\n");
    printf("Type 'det' to find the DETERMINANT of a matrix.\n");
    printf("Type 'inv' to find the INVERSE of a matrix. \n");
    printf("Type 'rank' to find the RANK of a matrix. \n");
    gets(stringByUser);
    if (strcmp(stringByUser, "mc") != 0 && strcmp(stringByUser, "dc") != 0 && strcmp(stringByUser, "add") != 0 && strcmp(stringByUser, "sub") != 0 &&
        strcmp(stringByUser, "trace") != 0 && strcmp(stringByUser, "trans") != 0 && strcmp(stringByUser, "multi") != 0 && strcmp(stringByUser, "sq") != 0 &&
        strcmp(stringByUser, "det") != 0 && strcmp(stringByUser, "inv") != 0 && strcmp(stringByUser, "rank") != 0)
    {
        printf("Please select a valid operation !\n");
        exit(0);
    }
    if (strcmp(stringByUser, "add") == 0 || strcmp(stringByUser, "sub") == 0 || strcmp(stringByUser, "multi") == 0)
    {
        printf("Enter the number of rows and columns of first matrix \n");
        scanf("%d %d", &row1, &col1);
        printf("Enter the number of rows and columns of second matrix \n");
        scanf("%d %d", &row2, &col2);
        int firstMatrix[row1][col1];
        int secondMatrix[row2][col2];
        if (strcmp(stringByUser, "multi") == 0 && col1 != row2)
        {
            printf("Multiplication not possible!");
            exit(0);
        }
        if (strcmp(stringByUser, "add") == 0 || strcmp(stringByUser, "sub") == 0)
        {
            if (row1 != row2 || col1 != col2)
            {
                printf("Operation not possible as order of the given matrices are different\n");
                exit(0);
            }
        }
        printf("Enter the elements of first matrix\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("Enter (%d,%d) element for the first matrix : ", i + 1, j + 1);
                scanf("%d", &firstMatrix[i][j]);
            }
        }
        printf("Enter the elements of second matrix\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("Enter (%d,%d) element for the first matrix : ", i + 1, j + 1);
                scanf("%d", &secondMatrix[i][j]);
            }
        }
        if (strcmp(stringByUser, "add") == 0)
        {
            addMatrices(firstMatrix, secondMatrix);
            exit(0);
        }
        else if (strcmp(stringByUser, "sub") == 0)
        {
            subMatrices(firstMatrix, secondMatrix);
            exit(0);
        }
        else if (strcmp(stringByUser, "multi") == 0)
        {
            multiMatrices(firstMatrix, secondMatrix);
            exit(0);
        }
    }
    else
    {
        if (strcmp(stringByUser, "inv") != 0 && strcmp(stringByUser, "rank") != 0)
        {
            printf("Enter the rows and columns of the matrix:\n");
            scanf("%d %d", &row1, &col1);
        }
        int tMatrix[col1][row1]; // to use transpose function in other functions
        int matrix[row1][col1];
        if (strcmp(stringByUser, "trace") == 0 || strcmp(stringByUser, "det") == 0 ||
            strcmp(stringByUser, "inv") == 0 || strcmp(stringByUser, "sq") == 0)
        {
            if (row1 != col1)
            {
                printf("Operation not valid as given matrix is not a square matrix:\n");
                exit(0);
            }
        }
        if (strcmp(stringByUser, "inv") != 0 && strcmp(stringByUser, "rank") != 0)
        {
            printf("Enter the elements of the matrix\n");
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("Enter (%d,%d) element for the first matrix : ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
        }
        if (strcmp(stringByUser, "mc") == 0)
        {
            int multiplier;
            printf("Enter the multiplier : ");
            scanf("%d", &multiplier);
            multiByConst(matrix, multiplier);
        }
        else if (strcmp(stringByUser, "dc") == 0)
        {
            float divisor;
            printf("Enter the divisor : ");
            scanf("%f", &divisor);
            divByConst(matrix, divisor);
        }
        else if (strcmp(stringByUser, "trace") == 0)
        {
            trace(matrix);
        }
        else if (strcmp(stringByUser, "sq") == 0)
        {
            sqMatrix(matrix);
        }
        else if (strcmp(stringByUser, "trans") == 0)
        {
            transpose(matrix, tMatrix);
            printf("The transpose of the matrix is shown below :-\n");
            for (int i = 0; i < col1; i++)
            {
                for (int j = 0; j < row1; j++)
                {
                    printf("%d ", tMatrix[i][j]);
                }
                printf("\n");
            }
        }
        else if (strcmp(stringByUser, "det") == 0)
        {
            float ans = determinant(matrix);
            printf("The determinant of this matrix is : %.2f\n", ans);
        }
        else if (strcmp(stringByUser, "inv") == 0)
        {
            float inverseMatrix[25][25], k, d;
            int i, j;
            printf("Enter the order of the Matrix : ");
            scanf("%f", &k);
            printf("Enter the elements of %.0fX%.0f Matrix : \n", k, k);
            for (i = 0; i < k; i++)
            {
                for (j = 0; j < k; j++)
                {
                    scanf("%f", &inverseMatrix[i][j]);
                }
            }
            d = Determinant(inverseMatrix, k);
            if (d == 0)
            {
                printf("\nInverse of Entered Matrix is not possible as its a singular matrix!!\n");
            }
            else
            {
                cofactor(inverseMatrix, k);
            }
        }
        else if (strcmp(stringByUser, "rank") == 0)
        {
            int rnk;
            printf("Enter the order of the matrix(row then column) :-\n");
            scanf("%d %d", &row1, &col1);
            read(row1, col1);
            display(row1, col1);
            rnk = rank(row1, col1);
            printf("Above is the row reduced echelon form of the matrix\n");
            printf("\nThe rank of the entered matrix is: %d\n", rnk);
        }
    }
    return 0;
}
