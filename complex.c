#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.141592653589793238
typedef struct complex
{
    float real;
    float img;
} comp;
comp complexMulti(comp c1, comp c2);
comp complexAddition(comp c1, comp c2);
comp complexSubtraction(comp c1, comp c2);
float complexAmp(comp c1);
comp complexConj(comp c1);
void display(comp c);
comp complexDiv(comp c1, comp c2);
float complexArg(comp c1);
void iotaPower(int power);
void polarForm(comp c1);
void eulerForm(comp c1);
comp complexAddition(comp c1, comp c2)
{
    comp temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
comp complexSubtraction(comp c1, comp c2)
{
    comp temp;
    temp.real = c1.real - c2.real;
    temp.img = c1.img - c2.img;
    return temp;
}
comp complexMulti(comp c1, comp c2)
{
    comp temp;
    temp.real = c1.real * c2.real - c1.img * c2.img;
    temp.img = c1.real * c2.img + c1.img * c2.real;
    return temp;
}
comp complexDiv(comp c1, comp c2)
{
    comp temp;
    float deno = complexAmp(c2) * complexAmp(c2);
    comp denConj = complexConj(c2);
    comp nume = complexMulti(c1, denConj);
    temp.real = nume.real / deno;
    temp.img = nume.img / deno;
    return temp;
}
float complexAmp(comp c1)
{
    return sqrt(c1.real * c1.real + c1.img * c1.img);
}
comp complexConj(comp c1)
{
    comp temp;
    temp.real = c1.real;
    temp.img = -1 * c1.img;
    return temp;
}
float complexArg(comp c1)
{
    float a, b;
    a = c1.real;
    b = c1.img;

    if (a >= 0)
    {
        if (b == 0)
        {
            return 0;
        }
        else if (b > 0)
        {
            return atan(b / a);
        }
        else
        {
            b = -1 * b;
            return -atan(b / a);
        }
    }
    else
    {
        if (b == 0)
        {
            return pi;
        }
        else if (b > 0)
        {
            a = -1 * a;
            return (pi - atan(b / a));
        }
        else
        {
            b = -1 * b;
            a = -1 * a;
            return -1 * (pi - atan(b / a));
        }
    }
}
void iotaPower(int power)
{
    if (power % 4 == 0)
    {
        printf("(i)^%d = 1\n", power);
    }
    if (power % 4 == 1)
    {
        printf("(i)^%d = i\n", power);
    }
    if (power % 4 == 2)
    {
        printf("(i)^%d = -1\n", power);
    }
    if (power % 4 == 3)
    {
        printf("(i)^%d = -i\n", power);
    }
}
void polarForm(comp c1)
{
    float a = c1.real;
    float b = c1.img;
    float magni = complexAmp(c1);
    float argu = complexArg(c1);
    float degree = argu * 180.00000 / pi;
    if (c1.img < 0)
    {
        printf("The polar form of %.2f - i(%.2f)", c1.real, -1 * c1.img);
    }
    else
    {
        printf("The polar form of %.2f + i(%.2f)", c1.real, c1.img);
    }
    printf(" = %.2f [Cos(%.2f) + i(sin(%.2f)]", magni, degree, degree);
}
void eulerForm(comp c1)
{
    float a = c1.real;
    float b = c1.img;
    float magni = complexAmp(c1);
    float argu = complexArg(c1);
    float degree = argu * 180.00000 / pi;
    if (c1.img < 0)
    {
        printf("The euler form of %.2f - i(%.2f)", c1.real, -1 * c1.img);
    }
    else
    {
        printf("The euler form of %.2f + i(%.2f)", c1.real, c1.img);
    }
    printf(" = %.2f e^i(%.2f) ", magni, degree);
}
void display(comp c)
{
    if (c.img < 0)
    {
        printf("The resultant complex number is : %.2f - i(%.2f)\n", c.real, -1 * c.img);
    }
    else
    {
        printf("The resultant complex number is : %.2f + i(%.2f)\n", c.real, c.img);
    }
}
int main()
{
    char complexfunction[20];
    printf("Type 'add' to ADD 2 complex numbers\n");
    printf("Type 'sub' to SUBTRACT 2 complex numbers\n");
    printf("Type 'amp' to find AMPLITUDE of a complex number\n");
    printf("Type 'conj' to find CONJUGATE of a complex number\n");
    printf("Type 'mul' to MULTIPLY 2 complex numbers\n");
    printf("Type 'div' to DIVIDE 2 complex numbers\n");
    printf("Type 'arg' to get ARGUEMENT of a complex numbers\n");
    printf("Type 'eul' to get EULER representation of a complex numbers\n");
    printf("Type 'Pol' to get POLAR representation of a complex numbers\n");
    printf("Type 'pow' to get the value of iota raised to a power\n");
    scanf("%s", &complexfunction);
    if (strcmp(complexfunction, "add") != 0 && strcmp(complexfunction, "sub") != 0 &&
        strcmp(complexfunction, "mul") != 0 && strcmp(complexfunction, "div") != 0 &&
        strcmp(complexfunction, "conj") != 0 && strcmp(complexfunction, "amp") != 0 && strcmp(complexfunction, "pol") != 0 &&
        strcmp(complexfunction, "eul") != 0 && strcmp(complexfunction, "pow") != 0 && strcmp(complexfunction, "arg") != 0)
    {
        printf("Please enter a valid operation!\n");
        exit(0);
    }
    if (strcmp(complexfunction, "add") == 0 || strcmp(complexfunction, "sub") == 0 ||
        strcmp(complexfunction, "mul") == 0 || strcmp(complexfunction, "div") == 0)
    {
        comp firstComplex;
        comp secondComplex;
        printf("Enter real and imaginary part of the first complex number : \n");
        scanf("%f %f", &firstComplex.real, &firstComplex.img);
        printf("Enter real and imaginary part of the second complex number : \n");
        scanf("%f %f", &secondComplex.real, &secondComplex.img);
        if (strcmp(complexfunction, "add") == 0)
        {
            comp complexAnswer = complexAddition(firstComplex, secondComplex);
            display(complexAnswer);
        }
        else if (strcmp(complexfunction, "sub") == 0)
        {
            comp complexAnswer = complexSubtraction(firstComplex, secondComplex);
            display(complexAnswer);
        }
        else if (strcmp(complexfunction, "mul") == 0)
        {
            comp complexAnswer = complexMulti(firstComplex, secondComplex);
            display(complexAnswer);
        }
        else if (strcmp(complexfunction, "div") == 0)
        {
            comp complexAnswer = complexDiv(firstComplex, secondComplex);
            display(complexAnswer);
        }
    }
    else if (strcmp(complexfunction, "pow") == 0)
    {
        int power;
        printf("Enter the power of iota reqd :-");
        scanf("%d", &power);
        iotaPower(power);
    }
    else
    {
        comp firstComplex;
        printf("Enter the real and imaginary part of the complex number : ");
        scanf("%f %f", &firstComplex.real, &firstComplex.img);
        if (strcmp(complexfunction, "amp") == 0)
        {
            float complexAnswer = complexAmp(firstComplex);
            printf("Amplitude = %.2f\n", complexAnswer);
        }
        else if (strcmp(complexfunction, "conj") == 0)
        {
            comp complexAnswer = complexConj(firstComplex);
            display(complexAnswer);
        }
        else if (strcmp(complexfunction, "arg") == 0)
        {
            float complexAnswer = complexArg(firstComplex);
            float degree = complexAnswer * 180.00000 / pi;
            printf("Arguement is = %.2f degrees or %.2f radians \n", degree, complexAnswer);
        }
        else if (strcmp(complexfunction, "pol") == 0)
        {
            polarForm(firstComplex);
        }
        else if (strcmp(complexfunction, "eul") == 0)
        {
            eulerForm(firstComplex);
        }
    }
    return 0;
}