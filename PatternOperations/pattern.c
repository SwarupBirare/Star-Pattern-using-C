/*

*
**
***
****
*****

*/
void rightTriangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

*
**
* *
*  *
*****

*/
void hollowRightTriangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==n || i==j || i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/*
    *
   **
  ***
 ****
*****

*/
void mirroredRightTriangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

    *
   **
  * *
 *  *
*****

*/
void hollowMirroredRightTriangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            if(k==1 || k==i || i==n || k==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/*

*****
****
***
**
*

*/
void invertedRightTriangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

*****
*  *
* *
**
*

*/
void hollowInvertedRightTriangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            if(i==1 || j==i || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
}

/*

*****
 ****
  ***
   **
    *
*/
void invertedMirroredRightTriangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }
        for(int k=n; k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

*****
 *  *
  * *
   **
    *
*/
void hollowInvertedMirroredRightTriangle(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }
        for(int k=n; k>=i; k--)
        {
            if(i==1 || k==n || k==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/*
    *
   ***
  *****
 *******
*********

*/
void pyramid(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

    *
   * *
  *   *
 *     *
*********

*/
void hollowPyramid(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++)
        {
            if(k==1 || i==n || k==2*i-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/*
*********
 *******
  *****
   ***
    *
*/

void invertedPyramid(int n)
{
    for(int i=n; i>=1; i--)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*
*********
 *     *
  *   *
   * *
    *
*/

void hollowInvertedPyramid(int n)
{
    for(int i=n; i>=1; i--)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i*2-1; k++)
        {
            if(i==n || k==1 || k==i*2-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
