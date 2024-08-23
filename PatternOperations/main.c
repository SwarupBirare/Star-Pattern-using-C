#include <stdio.h>
#include <stdlib.h>
#include "pattern.h"

int main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);

    printf("-------------------------\n");

    rightTriangle(n);

    printf("-------------------------\n");

    hollowRightTriangle(n);

    printf("-------------------------\n");

    mirroredRightTriangle(n);

    printf("-------------------------\n");

    hollowMirroredRightTriangle(n);

    printf("-------------------------\n");

    invertedRightTriangle(n);

    printf("-------------------------\n");

    hollowInvertedRightTriangle(n);

    printf("-------------------------\n");

    invertedMirroredRightTriangle(n);

    printf("-------------------------\n");

    hollowInvertedMirroredRightTriangle(n);

    printf("-------------------------\n");

    pyramid(n);

    printf("-------------------------\n");

    hollowPyramid(n);

    printf("-------------------------\n");

    invertedPyramid(n);

    printf("-------------------------\n");

    hollowInvertedPyramid(n);

    printf("-------------------------\n");

    return 0;
}
