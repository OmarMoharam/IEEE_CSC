#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void main()
{
    float a, b, c, delta, root1, root2, imag;
    bool check1, check2;
    printf("Enter the 'a' parameter: ");
    scanf(" %f",&a);
    printf("Enter the 'b' parameter: ");
    scanf(" %f",&b);
    printf("Enter the 'c' parameter: ");
    scanf(" %f",&c);

    delta = (b * b) - (4 * a * c);
    check1 = delta > 0;
    check2 = delta == 0;

    switch (check1)
    {
    case 1:
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        printf("Root1: %0.2f \nRoot2: %0.2f\n",root1,root2);
        break;
    case 0:
        switch (check2)
        {
        case 1:
            root1 = root2 = -b / (2 * a);
            printf("Root1: %0.2f \nRoot2: %0.2f\n",root1,root2);
            break;
        case 0:
            root1 = root2 = -b / (2 * a);
            imag = sqrt(-delta) / (2 * a);
            printf("Root1: %0.2f + i%0.2f \nRoot2: %0.2f + i%0.2f\n",root1,imag,root2,imag);
            break;
        }
        break;
    }


}