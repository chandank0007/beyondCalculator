#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define pi 3.141592653589793238
// GEOMETRY
char shape_name[30];
void geometryCircle(float radius)
{
    float area = pi * pow(radius, 2);
    float perimeter = 2 * pi * radius;
    printf("\nArea = %.2f", area);
    printf("\nCircumference = %.2f", perimeter);
    printf("\nVolume: 0, as it is a 2-D shape.");
}
void geometrysquare(float side)
{
    float area = pow(side, 2);
    float perimeter = 4 * side;
    printf("\nArea = %.2f", area);
    printf("\nPerimeter = %.2f", perimeter);
    printf("\nVolume = 0, as it is a 2-D shape.");
}
void geometryrect(float length, float breadth)
{
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    printf("\nArea = %.2f", area);
    printf("\nPerimeter = %.2f", perimeter);
    printf("\nVolume = 0, as it is a 2-D shape.");
}
void geometryTriangle(float s1, float s2, float s3)
{
    float perimeter = s1 + s2 + s3;
    float s = perimeter / 2;
    float area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    float R = (s1 * s2 * s3) / (4 * area);
    float A = (180 / pi) * asin(s1 / (2 * R));
    float B = (180 / pi) * asin(s2 / (2 * R));
    float C = (180 / pi) * asin(s3 / (2 * R));
    if (area > 0)
    {
        printf("\nArea = %.2f", area);
        printf("\nPerimeter = %.2f", perimeter);
        printf("\nangles of this triangle are = %.2f , %.2f and %.2f in degrees.\n", A, B, C);
        printf("\nVolume = 0, as it is a 2-D shape.");
    }
    else if (area <= 0)
    {
        printf("\nTriangle doesn't exist.");
    }
}
void geometryCube(float side)
{
    float area = 6 * pow(side, 2);
    float lsa = 4 * pow(side, 2);
    float volume = pow(side, 3);
    float perimeter = 12 * side;
    printf("\nTotal Surface Area = %.2f", area);
    printf("\nLateral Surface Area = %.2f", lsa);
    printf("\nVolume = %.2f", volume);
    printf("\nPerimeter = %.2f", perimeter);
}
void geometryCuboid(float length, float breadth, float height)
{
    float area = 2 * ((length * breadth) + (breadth * height) + (height * length));
    float lsa = 2 * height * (length + breadth);
    float volume = length * breadth * height;
    float perimeter = 4 * (length + breadth + height);
    printf("\nTotal Surface Area = %.2f", area);
    printf("\nLateral Surface Area = %.2f", lsa);
    printf("\nVolume = %.2f", volume);
    printf("\nPerimeter = %.2f", perimeter);
}
void geometryHemisphere(float radius)
{
    float area = (3 * pi * pow(radius, 2));
    float lsa = 2 * pi * pow(radius, 2);
    float volume = (2 * pi * pow(radius, 3)) / 3;
    float perimeter = 2 * pi * radius;
    printf("\nTotal Surface Area = %.2f", area);
    printf("\nLateral Surface Area = %.2f", lsa);
    printf("\nCircumference of the base of hemisphere = %.2f", perimeter);
    printf("\nVolume = %.2f", volume);
}
void geometrySphere(float radius)
{
    float area = (4 * pi * pow(radius, 2));
    float volume = (4 * pi * pow(radius, 3)) / 3;
    float perimeter = 2 * pi * radius;
    printf("\nTotal Surface Area = %.2f", area);
    printf("\nCircumference of the base of hemisphere = %.2f", perimeter);
    printf("\nVolume = %.2f", volume);
}
void geometryCylinder(float radius, float height)
{
    float area = (2 * pi * radius * (radius + height));
    float lsa = 2 * pi * radius * height;
    float volume = (pi * pow(radius, 2) * height);
    float perimeter = (4 * pi * radius) + (2 * height);
    printf("\nTotal Surface Area = %.2f", area);
    printf("\nLateral Surface Area = %.2f", lsa);
    printf("\nPerimeter of cylinder = %.2f", perimeter);
    printf("\nVolume = %.2f", volume);
}
void geometryCone(float radius, float height)
{
    float slant_height = sqrt(pow(radius, 2) + pow(height, 2));
    float area = pi * radius * (slant_height + radius);
    float lsa = pi * radius * slant_height;
    float volume = (pi * pow(radius, 2) * height) / 3;
    float perimeter = 2 * pi * radius;
    printf("\nSlant Height = %.2f", slant_height);
    printf("\nTotal Surface Area = %.2f", area);
    printf("\nLateral Surface Area = %.2f", lsa);
    printf("\nPerimeter of Cone = %.2f", perimeter);
    printf("\nVolume = %.2f", volume);
}
// ARITHMATIC FUNCTIONS
void sum()
{
    printf("Enter the two numbers down below: \n");
    float a, b;
    scanf("%f%f", &a, &b);
    printf("Sum = %0.2f \n", a + b);
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    fprintf(fptr, "Sum = %0.2f \n", a + b);
}
void diff()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the two numbers a and b respectively down below: \n");
    float a, b;
    scanf("%f%f", &a, &b);
    printf("difference(a-b) = %0.2f \n", a - b);
    fprintf(fptr, "difference(a-b) = %0.2f \n", a - b);
}
void prod()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the two numbers down below: \n");
    float a, b;
    scanf("%f%f", &a, &b);
    printf("product = %0.2f \n", a * b);
    fprintf(fptr, "product = %0.2f \n", a * b);
}
void arithDiv()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the two numbers a and b respectively down below: \n");
    float a, b;
    scanf("%f%f", &a, &b);
    printf("Division(a/b) = %0.2f \n", a / b);
    fprintf(fptr, "Division(a/b) = %0.2f \n", a / b);
}
void power()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter x and y to find x^y : \n");
    float x, y;
    scanf("%f%f", &x, &y);
    printf("x^y = %0.2f \n", pow(x, y));
    fprintf(fptr, "x^y = %0.2f \n", pow(x, y));
}
void arithLog()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter arguement and base (2.71 for base e) to find log \n");
    float n, b;
    scanf("%f %f", &n, &b);
    if (b <= 0 || b == 1)
    {
        printf("Log not defined !");
    }
    float num = log(n);
    float den = log(b);
    printf("log(%f) to base %f is appx = %f\n", n, b, num / den);
    fprintf(fptr, "log(%f) to base %f is appx = %f\n", n, b, num / den);
}
void sqt()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the number n to find sqrt(n) \n");
    float n;
    scanf("%f", &n);
    printf("(sqrt)n = %0.2f \n", sqrt(n));
    fprintf(fptr, "sqrt(n) = %0.2f \n", sqrt(n));
}
int multiplyNumbers(int dig)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    int facto;
    if (dig > 1)
        facto = dig * multiplyNumbers(dig - 1);
    else if (dig = 1)
        facto = 1;
    return facto;
}
void fact()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter n to find n!: \n");
    int n;
    scanf("%d", &n);
    printf("%d! = %d \n", n, multiplyNumbers(n));
    fprintf(fptr, "%d! = %d \n", n, multiplyNumbers(n));
}
void ncr()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter n and r to find nCr : \n");
    int n, r;
    scanf("%d%d", &n, &r);
    if (r > n)
    {
        printf("invalid entries! \n");
        return;
    }
    float a = multiplyNumbers(n);
    float b = multiplyNumbers(r) * multiplyNumbers(n - r);
    printf("nCr = %0.2f \n", a / b);
    fprintf(fptr, "nCr = %0.2f \n", a / b);
}
void nthroot()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float b = 0.0;
    float a = 0.001;
    float r = 0;
    printf("Type the number and root value ie. in (a)^1/b enter a then b : \n");
    scanf("%f %f", &b, &r);
    while (pow(a, r) < (b + 0.05))
    {
        a += 0.001;
    }
    printf("The %f root of %f is = %.2f\n", r, b, a);
    fprintf(fptr, "The %f root of %f is = %.2f\n", r, b, a);
}
void arithPercent()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float a, b;
    printf("Enter a and b for a");
    printf("%c", '%');
    printf("b : ");
    scanf("%f %f", &a, &b);
    printf("%.2f\n", b / 100 * a);
    fprintf(fptr, "%.2f\n", b / 100 * a);
}
// TRIGNO FUNCTIONS

// CONVERSIONS FUNCTIONS
void converter(char c[60], double n)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    if (strcmp(c, "mm") == 0 || strcmp(c, "cm") == 0 || strcmp(c, "dm") == 0 || strcmp(c, "m") == 0 || strcmp(c, "dam") == 0 || strcmp(c, "hm") == 0 || strcmp(c, "km") == 0)
    {
        if (strcmp(c, "mm") == 0)
        {
            double ans = n * 10;
            printf("%.5lf millimeter", ans);
            fprintf(fptr, "%.5lf millimeter", ans);
        }
        if (strcmp(c, "cm") == 0)
        {
            double ans = n;
            printf("%.5lf centimeter", ans);
            fprintf(fptr, "%.5lf centimeter", ans);
        }
        if (strcmp(c, "dm") == 0)
        {
            double ans = n / 10;
            printf("%.5lf decimeter", ans);
            fprintf(fptr, "%.5lf decimeter", ans);
        }
        if (strcmp(c, "m") == 0)
        {
            double ans = n / 100;
            printf("%.5lf meter", ans);
            fprintf(fptr, "%.5lf meter", ans);
        }
        if (strcmp(c, "dam") == 0)
        {
            double ans = n / 1000;
            printf("%.5lf decameter", ans);
            fprintf(fptr, "%.5lf decameter", ans);
        }
        if (strcmp(c, "hm") == 0)
        {
            double ans = n / 10000;
            printf("%.5lf hectometer", ans);
            fprintf(fptr, "%.5lf hectometer", ans);
        }
        if (strcmp(c, "km") == 0)
        {
            double ans = n / 100000;
            printf("%.5lf kilometer", ans);
            fprintf(fptr, "%.5lf kilometer", ans);
        }
    }
    else if (strcmp(c, "mg") == 0 || strcmp(c, "cg") == 0 || strcmp(c, "dg") == 0 || strcmp(c, "g") == 0 || strcmp(c, "dag") == 0 || strcmp(c, "hg") == 0 || strcmp(c, "kg") == 0)
    {
        if (strcmp(c, "mg") == 0)
        {
            double ans = n * 10;
            printf("%.5lf milligram", ans);
            fprintf(fptr, "%.5lf milligram", ans);
        }
        if (strcmp(c, "cg") == 0)
        {
            double ans = n;
            printf("%.5lf centigram", ans);
            fprintf(fptr, "%.5lf centigram", ans);
        }
        if (strcmp(c, "dg") == 0)
        {
            double ans = n / 10;
            printf("%.5lf decigram", ans);
            fprintf(fptr, "%.5lf decigram", ans);
        }
        if (strcmp(c, "g") == 0)
        {
            double ans = n / 100;
            printf("%.5lf gram", ans);
            fprintf(fptr, "%.5lf gram", ans);
        }
        if (strcmp(c, "dag") == 0)
        {
            double ans = n / 1000;
            printf("%.5lf decagram", ans);
            fprintf(fptr, "%.5lf decagram", ans);
        }
        if (strcmp(c, "hg") == 0)
        {
            double ans = n / 10000;
            printf("%.5lf hectogram", ans);
            fprintf(fptr, "%.5lf hectogram", ans);
        }
        if (strcmp(c, "km") == 0)
        {
            double ans = n / 100000;
            printf("%.5lf kilogram", ans);
            fprintf(fptr, "%.5lf kilogram", ans);
        }
    }
    else if (strcmp(c, "l") == 0 || strcmp(c, "cc") == 0 || strcmp(c, "mc") == 0 || strcmp(c, "gal") == 0 || strcmp(c, "ounce") == 0 || strcmp(c, "pint") == 0 || strcmp(c, "quart") == 0)
    {
        if (strcmp(c, "cc") == 0)
        {
            double ans = n * 1000;
            printf("%.5lf", ans);
            fprintf(fptr, "%.5lf", ans);
        }
        if (strcmp(c, "l") == 0)
        {
            double ans = n;
            printf("%.5lf", ans);
            fprintf(fptr, "%.5lf", ans);
        }
        if (strcmp(c, "mc") == 0)
        {
            double ans = n / 1000;
            printf("%.5lf", ans);
            fprintf(fptr, "%.5lf", ans);
        }

        if (strcmp(c, "gal") == 0)
        {
            double ans = n / 3.785;
            printf("%.5lf", ans);
            fprintf(fptr, "%.5lf", ans);
        }

        if (strcmp(c, "ounce") == 0)
        {
            double ans = n * 33.814;
            printf("%.5lf", ans);
            fprintf(fptr, "%.5lf", ans);
        }

        if (strcmp(c, "pint") == 0)
        {
            double ans = n * 2.113;
            printf("%.5lf", ans);
            fprintf(fptr, "%.5lf", ans);
        }

        if (strcmp(c, "quart") == 0)
        {
            double ans = n * 1.057;
            printf("%.5lf", ans);
            fprintf(fptr, "%.5lf", ans);
        }
    }
    else if (strcmp(c, "cel") == 0 || strcmp(c, "fah") == 0)
    {
        if (strcmp(c, "cel") == 0)
        {
            double ans = (n * 1.8) + 32;
            printf("%.5lf F", ans);
            fprintf(fptr, "%.5lf F", ans);
        }

        if (strcmp(c, "fah") == 0)
        {
            double ans = (n - 32) / 1.8;
            printf("%.5lf C", ans);
            fprintf(fptr, "%.5lf C", ans);
        }
    }
    if (strcmp(c, "USD") == 0 || strcmp(c, "RS") == 0 || strcmp(c, "CNY") == 0 || strcmp(c, "RUB") == 0 || strcmp(c, "JPY") == 0 || strcmp(c, "GBP") == 0 || strcmp(c, "CAD") == 0 || strcmp(c, "EUR") == 0 || strcmp(c, "AUD") == 0)
    {
        if (strcmp(c, "USD") == 0)
        {
            double ans = n * 0.013;
            printf("%.5lf Dollars", ans);
            fprintf(fptr, "%.5lf Dollars", ans);
        }
        if (strcmp(c, "RS") == 0)
        {
            double ans = n;
            printf("%.5lf Rupees", ans);
            fprintf(fptr, "%.5lf Rupees", ans);
        }
        if (strcmp(c, "CNY") == 0)
        {
            double ans = n * 0.086;
            printf("%.5lf Yuan", ans);
            fprintf(fptr, "%.5lf Yuan", ans);
        }
        if (strcmp(c, "RUB") == 0)
        {
            double ans = n * 0.74;
            printf("%.5lf Ruble", ans);
            fprintf(fptr, "%.5lf Ruble", ans);
        }
        if (strcmp(c, "JPY") == 0)
        {
            double ans = n * 1.72;
            printf("%.5lf Yen", ans);
            fprintf(fptr, "%.5lf Yen", ans);
        }
        if (strcmp(c, "GBP") == 0)
        {
            double ans = n * 0.010;
            printf("%.5lf Pound Sterling", ans);
            fprintf(fptr, "%.5lf Pound Sterling", ans);
        }
        if (strcmp(c, "CAD") == 0)
        {
            double ans = n * 0.016;
            printf("%.5lf Dollars", ans);
            fprintf(fptr, "%.5lf Dollars", ans);
        }
        if (strcmp(c, "EUR") == 0)
        {
            double ans = n * 0.012;
            printf("%.5lf Euro", ans);
            fprintf(fptr, "%.5lf Euro", ans);
        }
        if (strcmp(c, "AUD") == 0)
        {
            double ans = n * 0.018;
            printf("%.5lf Dollars", ans);
            fprintf(fptr, "%.5lf Dollars", ans);
        }
    }
    else if (strcmp(c, "gml") == 0 || strcmp(c, "kgm") || strcmp(c, "lbi") || strcmp(c, "lbf") || strcmp(c, "lbg") || strcmp(c, "ty"))
    {
        if (strcmp(c, "gml") == 0)
        {
            double ans = n;
            printf("%.5lf g/mL", ans);
            fprintf(fptr, "%.5lf g/mL", ans);
        }
        if (strcmp(c, "kgm") == 0)
        {
            double ans = n * 1000;
            printf("%.5lf kg/m^3", ans);
            fprintf(fptr, "%.5lf kg/m^3", ans);
        }
        if (strcmp(c, "lbi") == 0)
        {
            double ans = n * 0.036128;
            printf("%.5lf Lb/inch^3", ans);
            fprintf(fptr, "%.5lf Lb/inch^3", ans);
        }
        if (strcmp(c, "lbf") == 0)
        {
            double ans = n * 62.43;
            printf("%.5lf Lb/feet^3", ans);
            fprintf(fptr, "%.5lf Lb/feet^3", ans);
        }
        if (strcmp(c, "lbg") == 0)
        {
            double ans = n * 8.345;
            printf("%.5lf Lb/gallon", ans);
            fprintf(fptr, "%.5lf Lb/gallon", ans);
        }
        if (strcmp(c, "ty") == 0)
        {
            double ans = n * 0.8428;
            printf("%.5lf Ton/yard^3", ans);
            fprintf(fptr, "%.5lf Ton/yard^3", ans);
        }
    }
}
void bmi(double weight, double height)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    double key_value = weight / pow(height, 2);
    if (key_value < 18.5)
    {
        printf("Your BMI is %.2lf. You're underweight.", key_value);
        fprintf(fptr, "Your BMI is %.2lf. You're underweight.", key_value);
    }
    else if (key_value > 18.5 && key_value < 24.9)
    {
        printf("Your BMI is %.2lf. Your health is in good condition.", key_value);
        fprintf(fptr, "Your BMI is %.2lf. Your health is in good condition.", key_value);
    }
    else if (key_value > 24.9)
    {
        printf("Your BMI is %.2lf. You are overweight.", key_value);
        fprintf(fptr, "Your BMI is %.2lf. You are overweight.", key_value);
    }
}
void convTime(int value)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    int minutes;
    int seconds, hours;
    hours = value / 3600;
    minutes = value % 3600;
    seconds = minutes % 60;
    minutes = minutes / 60;
    printf("%d hr ", hours);
    printf("%d min ", minutes);
    printf("%d sec", seconds);
}
float toCmLength(char unit[20], float value)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    if (strcmp(unit, "mm") == 0)
    {
        return value / 10;
    }
    else if (strcmp(unit, "cm") == 0)
    {
        return value;
    }
    else if (strcmp(unit, "dm") == 0)
    {
        return value * 10;
    }
    else if (strcmp(unit, "m") == 0)
    {
        return value * 100;
    }
    else if (strcmp(unit, "dam") == 0)
    {
        return value * 1000;
    }
    else if (strcmp(unit, "hm") == 0)
    {
        return value * 10000;
    }
    else if (strcmp(unit, "km") == 0)
    {
        return value * 100000;
    }
}
float toCgWeight(char unit[20], float value)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    if (strcmp(unit, "mg") == 0)
    {
        return value / 10;
    }
    else if (strcmp(unit, "cg") == 0)
    {
        return value;
    }
    else if (strcmp(unit, "dg") == 0)
    {
        return value * 10;
    }
    else if (strcmp(unit, "g") == 0)
    {
        return value * 100;
    }
    else if (strcmp(unit, "dag") == 0)
    {
        return value * 1000;
    }
    else if (strcmp(unit, "hg") == 0)
    {
        return value * 10000;
    }
    else if (strcmp(unit, "kg") == 0)
    {
        return value * 100000;
    }
}
float toLVolume(char unit[20], float value)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    if (strcmp(unit, "cc") == 0)
    {
        return value / 1000;
    }
    else if (strcmp(unit, "l") == 0)
    {
        return value;
    }
    else if (strcmp(unit, "mc") == 0)
    {
        return value * 1000;
    }
    else if (strcmp(unit, "gal") == 0)
    {
        return value * 3.78541;
    }
    else if (strcmp(unit, "ounce") == 0)
    {
        return value * 0.0295735;
    }
    else if (strcmp(unit, "pint") == 0)
    {
        return value * 0.47317;
    }
    else if (strcmp(unit, "quart") == 0)
    {
        return value * 0.946353;
    }
}
float toRsCurr(char unit[20], float value)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    if (strcmp(unit, "RS") == 0)
    {
        return value;
    }
    else if (strcmp(unit, "USD") == 0)
    {
        return value * 78.14;
    }
    else if (strcmp(unit, "CNY") == 0)
    {
        return value * 11.65;
    }
    else if (strcmp(unit, "RUB") == 0)
    {
        return value * 1.36;
    }
    else if (strcmp(unit, "JPY") == 0)
    {
        return value * 0.58;
    }
    else if (strcmp(unit, "GBP") == 0)
    {
        return value * 96.25;
    }
    else if (strcmp(unit, "CAD") == 0)
    {
        return value * 61.19;
    }
    else if (strcmp(unit, "EUR") == 0)
    {
        return value * 82.21;
    }
    else if (strcmp(unit, "AUD") == 0)
    {
        return value * 55.35;
    }
}
// MATRIX FUNCTIONS
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
        // IF YOU ARE READING THIS YOU ARE A CHAD
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
void matrixEigen(float a, float b, float c)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        D = -1 * D;
        D = sqrt(D);
        D = D / 2;
        D = D / a;
        b = b / 2;
        b /= a;
        printf("The entered matrix has complex Eigen Values :-\n");
        printf("%.2f + i(%.2f) and %.2f - i(%.2f)\n", b, D, b, D);
        fprintf(fptr, "%.2f + i(%.2f) and %.2f - i(%.2f)\n", b, D, b, D);
    }
    else if (D == 0)
    {
        printf("The Entered matrix has equal Eigen Values :- \n");
        float x = (-b) / (2 * a);
        fprintf(fptr, "%.1f and %.1f \n", x, x);
        printf("%.1f and %.1f \n", x, x);
    }
    else
    {
        float sq = sqrt(D);
        float x1 = (-b + sq) / (2 * a);
        float x2 = (-b - sq) / (2 * a);
        printf("The Entered matrix has following Eigen Values :- \n");
        printf("%.1f and %.1f \n", x1, x2);
        fprintf(fptr, "%.1f and %.1f \n", x1, x2);
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
// COMPLEX FUNCTIONS
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
void complexDisplay(comp c);
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
    FILE *fptr;
    fptr = fopen("history.txt", "a");
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
    FILE *fptr;
    fptr = fopen("history.txt", "a");
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
    fprintf(fptr, " = %.2f [Cos(%.2f) + i(sin(%.2f)]", magni, degree, degree);
}
void eulerForm(comp c1)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
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
    fprintf(fptr, " = %.2f e^i(%.2f) ", magni, degree);
}
void complexDisplay(comp c)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    if (c.img < 0)
    {
        printf("The resultant complex number is : %.2f - i(%.2f)\n", c.real, -1 * c.img);
        fprintf(fptr, "The resultant complex number is : %.2f - i(%.2f)\n", c.real, -1 * c.img);
    }
    else
    {
        printf("The resultant complex number is : %.2f + i(%.2f)\n", c.real, c.img);
        fprintf(fptr, "The resultant complex number is : %.2f + i(%.2f)\n", c.real, c.img);
    }
}
// LINEAR FUNCTIONS
float deter_two(float arr[][2])
{
    float det = (arr[0][0] * arr[1][1]) - (arr[1][0] * arr[0][1]);
    return det;
}
float deter_three(float arr2[][3])
{

    float det = ((arr2[0][0]) * (arr2[1][1] * arr2[2][2] - (arr2[2][1] *
                                                            arr2[1][2]))) -
                ((arr2[0][1]) * (arr2[1][0] * arr2[2][2] - (arr2[2][0] *
                                                            arr2[1][2]))) +
                ((arr2[0][2]) * (arr2[1][0] * arr2[2][1] - (arr2[2][0] *
                                                            arr2[1][1])));
    return det;
}
void twovar()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float arr[2][2];
    float arr1[2][1];
    printf("enter the two coefficients of the two variables x and y of first equation: \n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%f", &arr[0][i]);
    }
    printf("enter the constant of first equation: \n");
    scanf("%f", &arr1[0][0]);
    printf("enter the two coefficients of the two variables x and y of second equation: \n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%f", &arr[1][i]);
    }
    printf("enter the constant of second equation: \n");
    scanf("%f", &arr1[1][0]);
    float d = deter_two(arr);
    float vese[2][2];
    for (int i = 0; i < 2; i++)
    {
        vese[i][0] = arr1[i][0];
    }
    for (int i = 0; i < 2; i++)
    {
        vese[i][1] = arr[i][1];
    }
    float d1 = deter_two(vese);
    for (int i = 0; i < 2; i++)
    {
        vese[i][0] = arr[i][0];
    }
    for (int i = 0; i < 2; i++)
    {
        vese[i][1] = arr1[i][0];
    }
    float d2 = deter_two(vese);
    float ratone = arr[0][0] / arr[1][0];
    float rattwo = arr[0][1] / arr[1][1];
    float ratthree = arr1[0][0] / arr1[1][0];
    if (ratone == rattwo && ratone != ratthree && rattwo != ratthree)
    {
        printf("The given equations have no solution \n");
    }
    else if (ratone == rattwo && rattwo == ratthree && ratone == ratthree)
    {
        printf("The given equations have infinite solutions \n");
    }
    else
    {
        float ans1 = d1 / d;
        float ans2 = d2 / d;
        printf("the solution to these equations is given below: \n");
        printf("x=%0.1f y=%0.1f \n", ans1, ans2);
        fprintf(fptr, "x=%0.1f y=%0.1f \n", ans1, ans2);
    }
}
void threevar()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float arr[3][3];
    float arr1[3][1];
    printf("enter the three coefficients of the three varibales x,y and z respectively of first equation: \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &arr[0][i]);
    }
    printf("enter the constant of first equation: \n");
    scanf("%f", &arr1[0][0]);
    printf("enter the three coefficients of the three varibales x,y and z respectively of second equation: \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &arr[1][i]);
    }
    printf("enter the constant of first equation: \n");
    scanf("%f", &arr1[1][0]);
    printf("enter the three coefficients of the three varibales x,y and z respectively of third equation: \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &arr[2][i]);
    }
    printf("enter the constant of first equation: \n");
    scanf("%f", &arr1[2][0]);
    float d = deter_three(arr);
    float vese[3][3];
    for (int i = 0; i < 3; i++)
    {
        vese[i][0] = arr1[i][0];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            vese[i][j] = arr[i][j];
        }
    }
    float d1 = deter_three(vese);
    for (int i = 0; i < 3; i++)
    {
        vese[i][2] = arr1[i][0];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            vese[i][j] = arr[i][j];
        }
    }
    float d3 = deter_three(vese);
    for (int i = 0; i < 3; i++)
    {
        vese[i][1] = arr1[i][0];
    }
    for (int i = 0; i < 3; i++)
    {
        vese[i][0] = arr[i][0];
    }
    for (int i = 0; i < 3; i++)
    {
        vese[i][2] = arr[i][2];
    }
    float d2 = deter_three(vese);
    if (d == 0)
    {
        if (d1 == 0 && d2 == 0 && d3 == 0)
        {
            printf("The given set of equations have infinite solutions. \n");
        }
        else
        {
            printf("the given set of equations have no solution.");
        }
    }
    else
    {
        float ans1 = d1 / d;
        float ans2 = d2 / d;
        float ans3 = d3 / d;
        printf("the solution of the given equations is given below \n");
        printf(" x=%0.1f y=%0.1f z=%0.1f \n", ans1, ans2, ans3);
        fprintf(fptr, " x=%0.1f y=%0.1f z=%0.1f \n", ans1, ans2, ans3);
    }
}
// QUADRATIC FUNCTION
void quad(float a, float b, float c)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        D = -1 * D;
        D = sqrt(D);
        D = D / 2;
        D = D / a;
        b = b / 2;
        b /= a;
        printf("The given quadratic equation has Complex roots :-\n");
        printf("%.2f + i(%.2f) and %.2f - i(%.2f)\n", b, D, b, D);
        fprintf(fptr, "%.2f + i(%.2f) and %.2f - i(%.2f)\n", b, D, b, D);
    }
    else if (D == 0)
    {
        printf("The given equation has real and equal roots that are: \n");
        float x = (-b) / (2 * a);
        fprintf(fptr, "x=%.1f and x=%.1f \n", x, x);
        printf("x=%.1f and x=%.1f \n", x, x);
    }
    else
    {
        float sq = sqrt(D);
        float x1 = (-b + sq) / (2 * a);
        float x2 = (-b - sq) / (2 * a);
        fprintf(fptr, "The given equation has real and distinct roots that are: \n");
        printf("x=%.1f and x=%.1f \n", x1, x2);
        fprintf(fptr, "x=%.1f and x=%.1f \n", x1, x2);
    }
}
// VECTOR FUNCTIONS
void vecSum()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the values of x,y,z for first vector v1 of form xi+yj+zk down below:\n ");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("Enter the value of x,y,z for second vector v2 of form xi+yj+zk down below: \n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float x1 = x + a;
    float x2 = y + b;
    float x3 = z + c;
    printf("The sum of the two vectos(v1+v2) is: %0.1fi+%0.1fj+%0.1fk \n", x1, x2, x3);
    fprintf(fptr, "The sum of the two vectos(v1+v2) is: %0.1fi+%0.1fj+%0.1fk \n", x1, x2, x3);
}
void vecSubtraction()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the values of x,y,z for first vector v1 of form xi+yj+zk down below:\n ");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("Enter the value of x,y,z for second vector v2 of form xi+yj+zk down below: \n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float x1 = x - a;
    float x2 = y - b;
    float x3 = z - c;
    printf("The difference of the two vectos(v1-v2) is: %0.1fi+%0.1fj+%0.1fk \n", x1, x2, x3);
    fprintf(fptr, "The difference of the two vectos(v1-v2) is: %0.1fi+%0.1fj+%0.1fk \n", x1, x2, x3);
}
void dotproduct()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the values of x,y,z for first vector v1 of form xi+yj+zk down below:\n ");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("Enter the value of x,y,z for second vector v2 of form xi+yj+zk down below: \n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float dot = (a * x) + (b * y) + (c * z);
    printf("The dot product of the two vectos(v1.v2) is: %0.1f \n", dot);
    fprintf(fptr, "The dot product of the two vectos(v1.v2) is: %0.1f \n", dot);
}
void crosspro()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the values of x,y,z for first vector v1 of form xi+yj+zk down below:\n ");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("Enter the value of x,y,z for second vector v2 of form xi+yj+zk down below: \n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float x1 = (y * c) - (z * b);
    float x2 = -((x * c) - (a * z));
    float x3 = (x * b) - (y * a);
    printf("the cross product of given vectors(v1Xv2) is: %0.1fi+%0.1fj+%0.1fk \n ", x1, x2, x3);
    fprintf(fptr, "the cross product of given vectors(v1Xv2) is: %0.1fi+%0.1fj+%0.1fk \n ", x1, x2, x3);
}
void vecMagni()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("enter the values of x,y,z for a vector V of form xi+yj+zk down below: \n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float mag = sqrt(pow(a, 2.0) + pow(b, 2.0) + pow(c, 2.0));
    printf("the magnitude of given vector V is : %0.2f \n", mag);
    fprintf(fptr, "the magnitude of given vector V is : %0.2f \n", mag);
}
void STP()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Scalar product of three vectors v1,v2,v3 ([v1 v2 v3]) is (v1 X v2).v3 \n");
    printf("Enter the values of x,y,z for first vector v1 of form xi+yj+zk down below:\n ");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("Enter the values of x,y,z for second vector v2 of form xi+yj+zk down below:\n ");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    printf("Enter the values of x,y,z for third vector v3 of form xi+yj+zk down below:\n ");
    float d, e, f;
    scanf("%f%f%f", &d, &e, &f);
    float x1 = ((y * c) - (z * b)) * d;
    float x2 = (-((x * c) - (a * z))) * e;
    float x3 = ((x * b) - (y * a)) * f;
    printf("The scalar product of three vectors[v1 v2 v3] is: %0.1f \n", x1 + x2 + x3);
    fprintf(fptr, "The scalar product of three vectors[v1 v2 v3] is: %0.1f \n", x1 + x2 + x3);
}
void VTP()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Vector product of three vectors v1,v2,v2 is v1 X (v2 X v3) = (v1.v3)v2 - (v1.v2)v3 \n");
    printf("Enter the values of x,y,z for first vector v1 of form xi+yj+zk down below:\n ");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("Enter the values of x,y,z for second vector v2 of form xi+yj+zk down below:\n ");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    printf("Enter the values of x,y,z for third vector v3 of form xi+yj+zk down below:\n ");
    float d, e, f;
    scanf("%f%f%f", &d, &e, &f);
    float num1 = x * d + y * e + z * f;
    float num2 = x * a + y * b + z * c;
    a = num1 * a;
    b = num1 * b;
    c = num1 * c;
    d = num2 * d;
    e = num2 * e;
    f = num2 * f;
    printf("The vector triple product of v1,v2 and v3 is : %0.1fi+%0.1fj+%0.1fk \n", (a - d), (b - e), (c - f));
    fprintf(fptr, "The vector triple product of v1,v2 and v3 is : %0.1fi+%0.1fj+%0.1fk \n", (a - d), (b - e), (c - f));
}
void vecAngle()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the values of x,y,z for first vector v1 of form xi+yj+zk down below:\n ");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("Enter the value of x,y,z for second vector v2 of form xi+yj+zk down below: \n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float num1 = x * a + y * b + z * c;
    float num2 = sqrt(pow(a, 2.0) + pow(b, 2.0) + pow(c, 2.0)) * sqrt(pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0));
    double result = acos(num1 / num2);
    printf("The angle between these two vectors is %0.3f in radians \n", result);
    fprintf(fptr, "The angle between these two vectors is %0.3f in radians \n", result);
    result = result * (180 / 3.1415926);
    printf("The angle between these two vectors is %0.3f in degrees \n", result);
    fprintf(fptr, "The angle between these two vectors is %0.3f in degrees \n", result);
}
void unitvec()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("Enter the values of x,y,z for first vector v of form xi+yj+zk down below:\n ");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    float mag = sqrt(pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0));
    x /= mag;
    y /= mag;
    z /= mag;
    printf("The unit vector in the direction of given vector is %0.1fi+%0.1fj+%0.1fk \n ", x, y, z);
    fprintf(fptr, "The unit vector in the direction of given vector is %0.1fi+%0.1fj+%0.1fk \n ", x, y, z);
}
// GRAPH FUNCTIONS
typedef struct pointInGraph
{
    float x;
    float y;
} point;
typedef struct lineInGraph
{
    float a;
    float b;
    float c;
} line;
void pointDisplay(point poi)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    printf("(%.2f,%.2f)\n", poi.x, poi.y);
    fprintf(fptr, "(%.2f,%.2f)\n", poi.x, poi.y);
}
void lineDisplay(line li)
{
    if (li.b >= 0)
    {
        FILE *fptr;
        fptr = fopen("history.txt", "a");
        printf("%.2fx + %.2fy = %.2f\n", li.a, li.b, li.c);
        fprintf(fptr, "%.2fx + %.2fy = %.2f\n", li.a, li.b, li.c);
    }
    else
    {
        FILE *fptr;
        fptr = fopen("history.txt", "a");
        li.b = -1 * li.b;
        printf("%.2fx - %.2fy = %.2f\n", li.a, li.b, li.c);
        fprintf(fptr, "%.2fx - %.2fy = %.2f\n", li.a, li.b, li.c);
    }
}
line pointsToLine(point firstPoint, point secondPoint)
{
    line passingLine;
    passingLine.a = firstPoint.y - secondPoint.y;
    passingLine.b = secondPoint.x - firstPoint.x;
    passingLine.c = firstPoint.y * (secondPoint.x - firstPoint.x) - firstPoint.x * (secondPoint.y - firstPoint.y);
    return passingLine;
}
float distTwopoints(point p1, point p2)
{
    float ans = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p2.y - p1.y) * (p2.y - p1.y));
    return ans;
}
float slopeOfLine(line l)
{
    return -1 * (l.a / l.b);
}

void intersectionOfLines(line l1, line l2)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float arr[2][2];
    float arr1[2][1];
    arr[0][0] = l1.a;
    arr[0][1] = l1.b;
    arr1[0][0] = l1.c;
    arr[1][0] = l2.a;
    arr[1][1] = l2.b;
    arr1[1][0] = l2.c;
    float d = deter_two(arr);
    float vese[2][2];
    for (int i = 0; i < 2; i++)
    {
        vese[i][0] = arr1[i][0];
    }
    for (int i = 0; i < 2; i++)
    {
        vese[i][1] = arr[i][1];
    }
    float d1 = deter_two(vese);
    for (int i = 0; i < 2; i++)
    {
        vese[i][0] = arr[i][0];
    }
    for (int i = 0; i < 2; i++)
    {
        vese[i][1] = arr1[i][0];
    }
    float d2 = deter_two(vese);
    float ratone = arr[0][0] / arr[1][0];
    float rattwo = arr[0][1] / arr[1][1];
    float ratthree = arr1[0][0] / arr1[1][0];
    if (ratone == rattwo && ratone != ratthree && rattwo != ratthree)
    {
        printf("The given lines have no solution \n");
        fprintf(fptr, "The given lines have no solution \n");
    }
    else if (ratone == rattwo && rattwo == ratthree && ratone == ratthree)
    {
        printf("The given lines have infinite solutions \n");
        fprintf(fptr, "The given lines have infinite solutions \n");
    }
    else
    {
        float ans1 = d1 / d;
        float ans2 = d2 / d;
        printf("the solution to these lines is given below: \n");
        printf("x=%0.1f y=%0.1f \n", ans1, ans2);
        fprintf(fptr, "x=%0.1f y=%0.1f \n", ans1, ans2);
    }
}
float distanceBwLines(line l1, line l2)
{
    if (slopeOfLine(l1) != slopeOfLine(l2))
    {
        return 0;
    }
    else
    {
        return abs(l1.c - l2.c) / sqrt(l1.a * l1.a + l1.b * l1.b);
    }
}
void findCircle(point p1, point p2, point p3)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float x12 = p1.x - p2.x;
    float x13 = p1.x - p3.x;
    float y12 = p1.y - p2.y;
    float y13 = p1.y - p3.y;
    float y31 = p3.y - p1.y;
    float y21 = p2.y - p1.y;
    float x31 = p3.x - p1.x;
    float x21 = p2.x - p1.x;
    float sx13 = pow(p1.x, 2) - pow(p3.x, 2);
    float sy13 = pow(p1.y, 2) - pow(p3.y, 2);
    float sx21 = pow(p2.x, 2) - pow(p1.x, 2);
    float sy21 = pow(p2.y, 2) - pow(p1.y, 2);
    float f = ((sx13) * (x12) + (sy13) * (x12) + (sx21) * (x13) + (sy21) * (x13)) / (2 * ((y31) * (x12) - (y21) * (x13)));
    float g = ((sx13) * (y12) + (sy13) * (y12) + (sx21) * (y13) + (sy21) * (y13)) / (2 * ((x31) * (y12) - (x21) * (y13)));
    float c = -pow(p1.x, 2) - pow(p1.y, 2) - 2 * g * p1.x - 2 * f * p1.y;
    float h = -g;
    float k = -f;
    float sqr_of_r = h * h + k * k - c;
    float r = sqrt(sqr_of_r);
    printf("Centre = (%.2f,%.2f)\n", h, k);
    fprintf(fptr, "Centre = (%.2f,%.2f)\n", h, k);
    printf("Radius = %.2f\n", r);
    fprintf(fptr, "Radius = %.2f\n", r);
}
void graphTriangle(point firstPoint, point secondPoint, point thirdPoint)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float s1 = distTwopoints(firstPoint, secondPoint);
    float s2 = distTwopoints(secondPoint, thirdPoint);
    float s3 = distTwopoints(thirdPoint, firstPoint);
    float perimeter = s1 + s2 + s3;
    float s = perimeter / 2;
    float area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    float R = (s1 * s2 * s3) / (4 * area);
    float A = (180 / pi) * asin(s1 / (2 * R));
    float B = (180 / pi) * asin(s2 / (2 * R));
    float C = (180 / pi) * asin(s3 / (2 * R));
    if (area > 0)
    {
        printf("\nArea = %.2f", area);
        printf("\nPerimeter = %.2f", perimeter);
        printf("\nangles of this triangle are = %.2f , %.2f and %.2f in degrees.", A, B, C);
        printf("\nCentroid of this triangle is (%.2f,%.2f)", (firstPoint.x + secondPoint.x + thirdPoint.x) / 3,
               (firstPoint.y + secondPoint.y + thirdPoint.y) / 3);
        fprintf(fptr, "\nArea = %.2f", area);
        fprintf(fptr, "\nPerimeter = %.2f", perimeter);
        fprintf(fptr, "\nangles of this triangle are = %.2f , %.2f and %.2f in degrees.", A, B, C);
        fprintf(fptr, "\nCentroid of this triangle is (%.2f,%.2f)", (firstPoint.x + secondPoint.x + thirdPoint.x) / 3,
                (firstPoint.y + secondPoint.y + thirdPoint.y) / 3);
    }
    else if (area <= 0)
    {
        printf("\nTriangle doesn't exist.");
    }
}
point graphOrthocentre(point p1, point p2, point p3)
{
    point ans;
    float x1 = p1.x;
    float x2 = p2.x;
    float x3 = p3.x;
    float y1 = p1.y;
    float y2 = p2.y;
    float y3 = p3.y;
    float numx = (x2 * (x1 - x3) + y2 * (y1 - y3)) * (y3 - y2) - (y3 - y1) * (x1 * (x2 - x3) + y1 * (y2 - y3));
    float denx = (x3 - x2) * (y3 - y1) - (y3 - y2) * (x3 - x1);
    float numy = (x2 * (x1 - x3) + y2 * (y1 - y3)) * (x3 - x2) - (x3 - x1) * (x1 * (x2 - x3) + y1 * (y2 - y3));
    float deny = (y3 - y2) * (x3 - x1) - (x3 - x2) * (y3 - y1);
    ans.x = numx / denx;
    ans.y = numy / deny;
    return ans;
}
point graphCircumCenre(point p1, point p2, point p3)
{
    point ans;
    float x1 = p1.x;
    float x2 = p2.x;
    float x3 = p3.x;
    float y1 = p1.y;
    float y2 = p2.y;
    float y3 = p3.y;
    float numx = (x1 * x1 + y1 * y1 - x2 * x2 - y2 * y2) * (y1 - y3) - (x1 * x1 + y1 * y1 - x3 * x3 - y3 * y3) * (y1 - y2);
    float denx = 2 * (x1 - x2) * (y1 - y3) - 2 * (x1 - x3) * (y1 - y2);
    float numy = (x1 - x2) * (x1 * x1 + y1 * y1 - x3 * x3 - y3 * y3) - (x1 - x3) * (x1 * x1 + y1 * y1 - x2 * x2 - y2 * y2);
    float deny = 2 * (x1 - x2) * (y1 - y3) - 2 * (x1 - x3) * (y1 - y2);
    ans.x = numx / denx;
    ans.y = numy / deny;
    return ans;
}
line graphSlopeLine(point p, float m)
{
    line l;
    l.a = m;
    l.b = -1;
    l.c = m * p.x - p.y;
    return l;
}
float graphAngleLines(line l1, line l2)
{
    float m1 = slopeOfLine(l1);
    float m2 = slopeOfLine(l2);
    float num = abs(m1 - m2);
    float den = 1 + m1 * m2;
    float angle = atan(num / den);
    float degree = (180 / pi) * angle;
    return degree;
}
point graphIncenter(point p1, point p2, point p3)
{
    point ans;
    float one = distTwopoints(p2, p3);
    float two = distTwopoints(p1, p3);
    float three = distTwopoints(p2, p1);
    float numx = one * p1.x + two * p2.x + three * p3.x;
    float denx = one + two + three;
    float numy = one * p1.y + two * p2.y + three * p3.y;
    float deny = one + two + three;
    ans.x = numx / denx;
    ans.y = numy / deny;
    return ans;
}
void graphInfo(point p1, point p2, point p3, point p4)
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    float len1 = distTwopoints(p1, p2);
    float len2 = distTwopoints(p2, p3);
    float len3 = distTwopoints(p3, p4);
    float len4 = distTwopoints(p1, p4);
    float len5 = distTwopoints(p1, p3);
    float len6 = distTwopoints(p2, p4);
    float x1 = p1.x;
    float x2 = p2.x;
    float x3 = p3.x;
    float y1 = p1.y;
    float y2 = p2.y;
    float y3 = p3.y;
    float x4 = p4.x;
    float y4 = p4.y;
    printf("Sides are of length --> %.2f , %.2f , %.2f , %.2f \n", len1, len2, len3, len4);
    printf("diagonals are of length --> %.2f , %.2f  \n", len5, len6);
    fprintf(fptr, "Sides are of length --> %.2f , %.2f , %.2f , %.2f \n", len1, len2, len3, len4);
    fprintf(fptr, "diagonals are of length --> %.2f , %.2f  \n", len5, len6);
    float area = x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x1 * y4;
    area = area / 2;
    if (area < 0)
    {
        area = -1 * area;
    }
    printf("Area = %.2f\n\n", area);
    fprintf(fptr, "Area = %.2f\n\n", area);
    line l1 = pointsToLine(p1, p2);
    line l2 = pointsToLine(p2, p3);
    line l3 = pointsToLine(p3, p4);
    line l4 = pointsToLine(p4, p1);
    line l5 = pointsToLine(p1, p3);
    line l6 = pointsToLine(p2, p4);
    printf("Equations of its sides are : \n");
    fprintf(fptr, "Equations of its sides are : \n");
    lineDisplay(l1);
    lineDisplay(l2);
    lineDisplay(l3);
    lineDisplay(l4);
    printf("Equations of its diagonals are : \n");
    fprintf(fptr, "Equations of its diagonals are : \n");
    lineDisplay(l5);
    lineDisplay(l6);
    printf("*******************************\n");
}
void setcolor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xB0) + (ForgC & 0x0B);
        //	SetConsoleTextAttributes(hStdOut,wColor);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}
int main()
{
    FILE *fptr;
    fptr = fopen("history.txt", "a");
    time_t timeDec;
    time(&timeDec);
    setcolor(7);
    printf("|-----------------------------------------------------------------------------------------------------|\n");
    printf("|                                                                                                     |\n");
    printf("|  *****    *                       *                 *            *                      *           |\n");
    printf("|  *    *   *                    *      *            *  *          *                   *      *       |\n");
    printf("|  *     *  *                  *                    *    *         *                 *                |\n");
    printf("|  *    *   *                *                     *      *        *               *                  |\n");
    printf("|  *****    *****            *                    **********       *               *                  |\n");
    printf("|  *    *   *    *           *                   *          *      *               *                  |\n");
    printf("|  *     *  *     *             *               *            *     *                  *               |\n");
    printf("|  *    *   *    *                *     *      *              *    *                    *     *       |\n");
    printf("|  *****    *****                    *        *                *   **************          *      ::  |\n");
    printf("|-----------------------------------------------------------------------------------------------------|\n");
    printf("\t\t*           ----------------------------             *\n");
    printf("\t\t*            WELCOME TO Bb Calculator                *\n");
    printf("\t\t*           ----------------------------             *\n");
    printf("\t\t*     Brought To You By Chandan*\n");
    printf("\t\t   Current date and time : %s                       \n", ctime(&timeDec));
    printf("\t\t******************************************************\n\n\n");
    char selecType[50];
    setcolor(10);
    printf("Type 'arithm' if you want to do basic numerical calculations\n");
    printf("Type 'trigno' you want to calc Trigno Ratios\n");
    printf("Type 'conver' you want to do conversions\n");
    printf("Type 'matrix' you want to work with Matrices\n");
    printf("Type 'geo' you want to work with geometry\n");
    printf("Type 'complex' if you want to work with Complex Numbers\n");
    printf("Type 'linear' if you want to solve Linear equations\n");
    printf("Type 'quad' if  you want to solve Quadratic Equations\n");
    printf("Type 'vector' if you want to work with Vectors\n");
    printf("Type 'graph' you want to work graph/plotting\n");
    scanf("%s", &selecType);
    fprintf(fptr, "%s\n", selecType);
    fflush(stdin);
    setcolor(9);
    if (strcmp(selecType, "arithm") == 0)
    {
        while (1)
        {

            char x;
            printf("\nPress 'x' if you want to exit the program , press enter otherwise\n");
            fflush(stdin);
            scanf("%c", &x);
            if (x == 'x')
            {
                printf("Thanks !! Cya\n");
                exit(1);
            }
            printf("Enter 1 to find sum of two numbers \n");
            printf("Enter 2 to find difference between two numbers \n");
            printf("Enter 3 to find product between two numbers \n");
            printf("Enter 4 to divide two numbers \n");
            printf("Enter 5 to find raise to power of a number \n");
            printf("Enter 6 to find square root of number \n");
            printf("Enter 7 to find nth root of a number \n");
            printf("Enter 8 to find Percentage \n");
            printf("Enter 9 to find log of a number \n");
            printf("Enter 10 to find factorial of a number \n");
            printf("Enter 11 to find nCr \n");
            setcolor(11);
            int n;
            scanf("%d", &n);
            switch (n)
            {
            case 1:
                sum();
                break;

            case 2:
                diff();
                break;

            case 3:
                prod();
                break;

            case 4:
                arithDiv();
                break;

            case 5:
                power();
                break;

            case 6:
                sqt();
                break;
            case 7:
                nthroot();
                break;

            case 8:
                arithPercent();
                break;
            case 9:
                arithLog();
                break;

            case 10:
                fact();
                break;

            case 11:
                ncr();
                break;

            defalut:
                break;
            }
        }
        return 0;
    }
    else if (strcmp(selecType, "trigno") == 0)
    {
        printf("Enter 1 if you want to work on trignometric function: \n");
        printf("Enter 2 if you want to work on inverse trignometric functions: \n");
        int n;
        scanf("%d", &n);
        if (n == 1)
        {
            printf("Enter 1 if you want to work on sine function \n");
            printf("Enter 2 if you want to work on cosine function \n");
            printf("Enter 3 if you want to work on tangent function \n");
            printf("Enter 4 if you want to work on secant function \n");
            printf("Enter 5 if you want to work on cosecant function \n");
            printf("Enter 6 if you want to work on cotangent function \n");
            int x;
            scanf("%d", &x);
            printf("Enter the angle in degrees down below: \n");
            float angl;
            scanf("%f", &angl);
            float rad = 0.0174532925;
            angl = angl * rad;
            switch (x)
            {
            case 1:
                printf("%0.2f \n", sin(angl));
                break;
            case 2:
                printf("%0.2f \n", cos(angl));
                break;
            case 3:
                printf("%0.2f \n", tan(angl));
                break;
            case 4:
                printf("%0.2f \n", 1 / cos(angl));
                break;
            case 5:
                printf("%0.2f \n", 1 / sin(angl));
                break;
            case 6:
                printf("%0.2f \n", 1 / tan(angl));
                break;
            default:
                break;
            }
        }
        else
        {
            printf("Enter 1 if you want to work on inverse sine function \n");
            printf("Enter 2 if you want to work on inverse cosine function \n");
            printf("Enter 3 if you want to work on inverse tangent function \n");
            printf("Enter 4 if you want to work on inverse secant function \n");
            printf("Enter 5 if you want to work on inverse cosecant function \n");
            printf("Enter 6 if you want to work on inverse cotangent function \n");
            int x;
            scanf("%d", &x);
            printf("Enter the value on which you want to apply inverse trignometric functions: \n");
            float asd;
            scanf("%f", &asd);
            switch (x)
            {
            case 1:
                printf("%0.2f in radians \n", asin(asd));
                printf("%0.2f in degrees \n", asin(asd) * 57.2957795);
                break;
            case 2:
                printf("%0.2f in radians\n", acos(asd));
                printf("%0.2f in degrees \n", acos(asd) * 57.2957795);
                break;
            case 3:
                printf("%0.2f in radians \n", atan(asd));
                printf("%0.2f in degrees \n", atan(asd) * 57.2957795);
                break;
            case 4:
                printf("%0.2f in radians\n", acos(1 / asd));
                printf("%0.2f in degrees\n", acos(1 / asd) * 57.2957795);
                break;
            case 5:
                printf("%0.2f in radians\n", asin(1 / asd));
                printf("%0.2f in degrees\n", asin(1 / asd) * 57.2957795);
                break;
            case 6:
                if (asd > 0)
                {
                    printf("%0.2f in radians\n", atan(1 / asd));
                    printf("%0.2f in degrees\n", atan(1 / asd) * 57.2957795);
                }
                else if (asd <= 0)
                {
                    float ans = 3.1415926 + atan(1 / asd);
                    printf("%0.2f in radians\n", ans);
                    printf("%0.2f in degrees\n", ans * 57.2957795);
                }

                break;
            default:
                break;
            }
        }
        return 0;
    }
    else if (strcmp(selecType, "conver") == 0)
    {
        while (1)
        {

            char x;
            printf("\nPress 'x' if you want to exit the program , press enter otherwise\n");
            fflush(stdin);
            scanf("%c", &x);
            if (x == 'x')
            {
                printf("Thanks !! Cya\n");
                exit(0);
            }
            printf("Enter the conversion you want:");
            printf("\nEnter 'leng' for length conversions");
            printf("\nEnter 'weight' for weight conversions");
            printf("\nEnter 'vol' for volumetric conversions");
            printf("\nEnter 'den' for density conversions");
            printf("\nEnter 'temp' for temperature conversions");
            printf("\nEnter 'curren' for currency conversions");
            printf("\nEnter 'bmi' to check your health\n");
            printf("Enter 'time' to convert seconds to hours, minutes, seconds format\n");
            printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-");
            printf("\n\nEnter -> ");
            setcolor(11);
            char type[50];
            char from[50];
            scanf("%s", type);
            if (strcmp(type, "leng") == 0)
            {
                printf("Enter the unit you want to convert it from. Select from 'mm','cm','dm','m','dam','hm','km'\n");
                scanf("%s", &from);
                printf("Enter value in %s : ", from);
                double n;
                scanf("%lf", &n);
                printf("Enter the unit you want to convert it into. Select from 'mm','cm','dm','m','dam','hm','km'\n");
                char c[60];
                scanf("%s", c);
                float valcm = toCmLength(from, n);
                converter(c, valcm);
            }
            else if (strcmp(type, "weight") == 0)
            {
                printf("Enter the unit you want to convert it from. Select from 'mg','cg','dg','g','dag','hg','kg'....\n");
                scanf("%s", &from);
                printf("\nEnter the value in %s ", from);
                double n;
                scanf("%lf", &n);
                printf("Enter the unit you want to convert it into. Select from 'mg','cg','dg','g','dag','hg','kg'....\n");
                char c[60];
                scanf("%s", c);
                float weiCg = toCgWeight(from, n);
                converter(c, weiCg);
            }
            else if (strcmp(type, "vol") == 0)
            {
                printf("Enter the unit you want to convert it from. Select from 'l'(Litres) ,cc'(cubic centimeter),'mc'(cubic meter),'gal'(gallons),'ounce','pint','quart'\n");
                scanf("%s", &from);
                double n;
                printf("\nEnter the value in %s ", from);
                scanf("%lf", &n);
                printf("Enter the unit you want to convert it into. Select from 'l'(Litres) , 'cc'(cubic centimeter),'mc'(cubic meter),'gal'(gallons),'ounce','pint','quart'....\n");
                char c[60];
                scanf("%s", c);
                float volL = toLVolume(from, n);
                converter(c, volL);
            }
            else if (strcmp(type, "temp") == 0)
            {
                printf("Enter the value. ");
                double n;
                scanf("%lf", &n);
                printf("Specify the unit of the entered value.'cel' for Celsius and 'fah' for Fahrenheit. ");
                char c[60];
                scanf("%s", c);
                converter(c, n);
            }
            else if (strcmp(type, "curren") == 0)
            {
                printf("\n'USD' for US Dollar");
                printf("\n'CNY' for Chinese Yuan");
                printf("\n'RUB' for Russian Ruble");
                printf("\n'JPY' for Japanese Yen");
                printf("\n'GBP' for Pound Sterling");
                printf("\n'CAD' for Canadian Dollar");
                printf("\n'EUR' for Euro");
                printf("\n'AUD' for Australian Dollar\n");
                printf("\n'RS' for Indian Rupees\n");
                printf("Specify the currency you want to convert it from, choose from 'RS' 'USD' 'CNY' 'RUB' 'JPY' 'GBP' 'CAD' 'EUR' 'AUD'\n");
                scanf("%s", &from);
                double n;
                printf("\nEnter the value in %s ", from);
                scanf("%lf", &n);
                printf("Specify the currency you want to convert it into, choose from 'RS' 'USD' 'CNY' 'RUB' 'JPY' 'GBP' 'CAD' 'EUR' 'AUD'\n");
                char c[60];
                scanf("%s", c);
                float valRs = toRsCurr(from, n);
                converter(c, valRs);
            }
            else if (strcmp(type, "bmi") == 0)
            {
                printf("Enter your weight in kg. ");
                double weight;
                double height;
                scanf("%lf", &weight);
                printf("Enter your height in meters. ");
                scanf("%lf", &height);
                bmi(weight, height);
            }
            else if (strcmp(type, "time") == 0)
            {
                int value;
                printf("Enter the seconds you want to convert. ");
                scanf("%d", &value);
                convTime(value);
            }
            else if (strcmp(type, "den") == 0)
            {
                printf("Enter the value in g/cm^3. ");
                double n;
                scanf("%lf", &n);
                printf("Enter the unit you want to convert it into: ");
                printf("\nEnter 'gml' for gram/mL");
                printf("\nEnter 'kgm' for kg/m^3");
                printf("\nEnter 'lbi' for lb/inch^3");
                printf("\nEnter 'lbf' for lb/feet^3");
                printf("\nEnter 'lbg' for lb/gallon");
                printf("\nEnter 'ty' for ton/yard^3 ");
                char c[60];
                scanf("%s", c);
                converter(c, n);
            }
        }
        return 0;
    }
    else if (strcmp(selecType, "matrix") == 0)
    {
        while (1)
        {
            char x;
            printf("\nPress 'x' if you want to exit the program , press enter otherwise\n");
            fflush(stdin);
            scanf("%c", &x);
            if (x == 'x')
            {
                printf("Thanks !! Cya\n");
                exit(0);
            }
            setcolor(11);
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
            printf("Type 'char' to find the CHARACTERISTIC equation of a matrix. \n");
            gets(stringByUser);
            if (strcmp(stringByUser, "mc") != 0 && strcmp(stringByUser, "dc") != 0 && strcmp(stringByUser, "add") != 0 && strcmp(stringByUser, "sub") != 0 &&
                strcmp(stringByUser, "trace") != 0 && strcmp(stringByUser, "trans") != 0 && strcmp(stringByUser, "multi") != 0 && strcmp(stringByUser, "sq") != 0 &&
                strcmp(stringByUser, "det") != 0 && strcmp(stringByUser, "inv") != 0 && strcmp(stringByUser, "rank") != 0 && strcmp(stringByUser, "char") != 0)
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
                if (strcmp(stringByUser, "inv") != 0 && strcmp(stringByUser, "rank") != 0 && strcmp(stringByUser, "char") != 0)
                {
                    printf("Enter the rows and columns of the matrix:\n");
                    scanf("%d %d", &row1, &col1);
                }
                int tMatrix[col1][row1]; // to use transpose function in other functions
                int matrix[row1][col1];
                if (strcmp(stringByUser, "trace") == 0 || strcmp(stringByUser, "det") == 0 ||
                    strcmp(stringByUser, "inv") == 0 || strcmp(stringByUser, "sq") == 0 || strcmp(stringByUser, "char") == 0)
                {
                    if (row1 != col1)
                    {
                        printf("Operation not valid as given matrix is not a square matrix:\n");
                        exit(0);
                    }
                }
                if (strcmp(stringByUser, "inv") != 0 && strcmp(stringByUser, "rank") != 0 && strcmp(stringByUser, "char") != 0)
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
                else if (strcmp(stringByUser, "char") == 0)
                {
                    int ord;
                    printf("Enter the order of the matrix (1-3): ");
                    scanf("%d", &ord);
                    float matrix[ord][ord];
                    if (ord == 1)
                    {
                        float temp;
                        printf("Enter the element of the matrix : ");
                        scanf("%f", &temp);
                        printf("Characteristic equation is : A - %.2f = 0 \n", temp);
                    }
                    else if (ord == 2)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            for (int j = 0; j < 2; j++)
                            {
                                printf("Enter (%d,%d) element for the first matrix : ", i + 1, j + 1);
                                scanf("%f", &matrix[i][j]);
                            }
                        }
                        printf("Characteristic equation is A^2 - A(%.1f) + (%.1f) = 0\n", matrix[0][0] + matrix[1][1],
                               matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
                        matrixEigen(1.0, -1 * (matrix[0][0] + matrix[1][1]), matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
                    }
                    else if (ord == 3)
                    {
                        int matrix[3][3];
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                printf("Enter (%d,%d) element for the first matrix : ", i + 1, j + 1);
                                scanf("%d", &matrix[i][j]);
                            }
                        }
                        int a = matrix[0][0];
                        int b = matrix[0][1];
                        int c = matrix[0][2];
                        int d = matrix[1][0];
                        int e = matrix[1][1];
                        int f = matrix[1][2];
                        int g = matrix[2][0];
                        int h = matrix[2][1];
                        int i = matrix[2][2];
                        int tra = -1 * (a + e + i);
                        int coef = e * i - h * f + a * i - g * c + a * e - d * b;
                        float dettt = -1 * determinant(matrix);
                        printf("Characteristic equation is : A^3 + A^2 (%d) + A (%d) + (%.2f) = 0 \n", tra, coef, dettt);
                    }
                }
            }
        }
        return 0;
    }
    else if (strcmp(selecType, "geo") == 0)
    {
        printf("Enter 'cir' for CIRCLE.");
        printf("\nEnter 'sq' for SQUARE.");
        printf("\nEnter 'rect' for RECTANGLE.");
        printf("\nEnter 'tri' for TRIANGLE.");
        printf("\nEnter 'cuboid' for CUBOID.");
        printf("\nEnter 'hemi' for HEMISPHERE.");
        printf("\nEnter 'cube' for CUBE.");
        printf("\nEnter 'sph' for SPHERE.");
        printf("\nEnter 'cone' for CONE.");
        printf("\nEnter 'cyl' for CYLINDER.");
        printf("\n\nEnter the shape you want to get area, perimeter and volume for: ");
        gets(shape_name);
        if (strcmp(shape_name, "cir") != 0 && strcmp(shape_name, "sq") != 0 && strcmp(shape_name, "rect") != 0 &&
            strcmp(shape_name, "hemi") != 0 && strcmp(shape_name, "cuboid") != 0 && strcmp(shape_name, "tri") != 0 &&
            strcmp(shape_name, "cube") != 0 && strcmp(shape_name, "sph") != 0 && strcmp(shape_name, "cone") != 0 && strcmp(shape_name, "cyl") != 0)
        {
            printf("Please enter a valid shape option!\n");
            exit(0);
        }
        if (strcmp(shape_name, "cir") == 0)
        {
            printf("Enter the radius of the circle : ");
            float radius;
            scanf("%f", &radius);
            geometryCircle(radius);
        }
        else if (strcmp(shape_name, "sq") == 0)
        {
            printf("Enter the side of the square : ");
            float side;
            scanf("%f", &side);
            geometrysquare(side);
        }
        else if (strcmp(shape_name, "rect") == 0)
        {
            printf("Enter the length and breadth of the rectangle. ");
            float length;
            float breadth;
            scanf("%f", &length);
            scanf("%f", &breadth);
            geometryrect(length, breadth);
        }
        else if (strcmp(shape_name, "tri") == 0)
        {
            printf("Enter the length of all sides of triangle. ");
            float s1;
            float s2;
            float s3;
            scanf("%f", &s1);
            scanf("%f", &s2);
            scanf("%f", &s3);
            geometryTriangle(s1, s2, s3);
        }
        else if (strcmp(shape_name, "cube") == 0)
        {
            printf("Enter the side of the cube. ");
            float side;
            scanf("%f", &side);
            geometryCube(side);
        }
        else if (strcmp(shape_name, "cuboid") == 0)
        {
            printf("Enter the length, breadth and height of the cuboid. ");
            float length;
            float breadth;
            float height;
            scanf("%f", &length);
            scanf("%f", &breadth);
            scanf("%f", &height);
            geometryCuboid(length, breadth, height);
        }
        else if (strcmp(shape_name, "hemi") == 0)
        {
            printf("Enter the radius of the hemisphere. ");
            float radius;
            scanf("%f", &radius);
            geometryHemisphere(radius);
        }
        else if (strcmp(shape_name, "sph") == 0)
        {
            printf("Enter the radius of the sphere. ");
            float radius;
            scanf("%f", &radius);
            geometrySphere(radius);
        }
        else if (strcmp(shape_name, "cyl") == 0)
        {
            printf("Enter the radius and height of the cylinder. ");
            float radius;
            float height;
            scanf("%f", &radius);
            scanf("%f", &height);
            geometryCylinder(radius, height);
        }
        else if (strcmp(shape_name, "cone") == 0)
        {
            printf("Enter the radius and height of the Cone. ");
            float radius;
            float height;
            scanf("%f", &radius);
            scanf("%f", &height);
            geometryCone(radius, height);
        }
        return 0;
    }

    else if (strcmp(selecType, "complex") == 0)
    {
        while (1)
        {

            char x;
            printf("\nPress 'x' if you want to exit the program , press enter otherwise\n");
            fflush(stdin);
            scanf("%c", &x);
            if (x == 'x')
            {
                printf("Thanks !! Cya\n");
                exit(0);
            }
            setcolor(11);
            char complexfunction[20];
            printf("Type 'add' to ADD 2 complex numbers\n");
            printf("Type 'sub' to SUBTRACT 2 complex numbers\n");
            printf("Type 'pow' to get the value of iota raised to a power\n");
            printf("Type 'conj' to find CONJUGATE of a complex number\n");
            printf("Type 'amp' to find AMPLITUDE of a complex number\n");
            printf("Type 'mul' to MULTIPLY 2 complex numbers\n");
            printf("Type 'div' to DIVIDE 2 complex numbers\n");
            printf("Type 'arg' to get ARGUEMENT of a complex numbers\n");
            printf("Type 'eul' to get EULER representation of a complex numbers\n");
            printf("Type 'pol' to get POLAR representation of a complex numbers\n");
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
                    complexDisplay(complexAnswer);
                }
                else if (strcmp(complexfunction, "sub") == 0)
                {
                    comp complexAnswer = complexSubtraction(firstComplex, secondComplex);
                    complexDisplay(complexAnswer);
                }
                else if (strcmp(complexfunction, "mul") == 0)
                {
                    comp complexAnswer = complexMulti(firstComplex, secondComplex);
                    complexDisplay(complexAnswer);
                }
                else if (strcmp(complexfunction, "div") == 0)
                {
                    comp complexAnswer = complexDiv(firstComplex, secondComplex);
                    complexDisplay(complexAnswer);
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
                    complexDisplay(complexAnswer);
                }
                else if (strcmp(complexfunction, "arg") == 0)
                {
                    float complexAnswer = complexArg(firstComplex);
                    float degree = complexAnswer * 180.00000 / pi;
                    printf("Arguement is = %.2f degrees or %.2f radians \n", degree, complexAnswer);
                    fprintf(fptr, "Arguement is = %.2f degrees or %.2f radians \n", degree, complexAnswer);
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
        }
        return 0;
    }
    else if (strcmp(selecType, "linear") == 0)
    {
        while (1)
        {

            char x;
            printf("\nPress 'x' if you want to exit the program , press enter otherwise\n");
            fflush(stdin);
            scanf("%c", &x);
            if (x == 'x')
            {
                printf("Thanks !! Cya\n");
                exit(0);
            }
            setcolor(11);
            printf("enter 2 if you want to solve a linear equation with two variable x and y:\n ");
            printf("enter 3 if you want to solve a linear equation with three variable x,y and z:\n");
            int n = 0;
            scanf("%d", &n);
            if (n == 2)
            {
                twovar();
            }
            else if (n == 3)
            {
                threevar();
            }
        }
    }
    else if (strcmp(selecType, "quad") == 0)
    {
        while (1)
        {

            char x;
            printf("\nPress 'x' if you want to exit the program , press enter otherwise\n");
            fflush(stdin);
            scanf("%c", &x);
            if (x == 'x')
            {
                printf("Thanks !! Cya\n");
                exit(0);
            }
            printf("Enter the coefficients a , b and c for a quadratic equation of type ax^2+bx+c=0 \n");
            float a, b, c;
            scanf("%f%f%f", &a, &b, &c);
            quad(a, b, c);
        }
        return 0;
    }
    else if (strcmp(selecType, "vector") == 0)
    {
        while (1)
        {
            char x;
            printf("\nPress 'x' if you want to exit the program , press enter otherwise\n");
            fflush(stdin);
            scanf("%c", &x);
            if (x == 'x')
            {
                printf("Thanks !! Cya\n");
                exit(0);
            }
            printf("Below is set operations that can be applied on vectors\n");
            printf("enter 1 if you want to add two vectors\n");
            printf("enter 2 if you want to subtract two vectors\n");
            printf("enter 3 if you want to perform dot product on two vectors\n");
            printf("enter 4 if you want to perform cross product on two vectors\n");
            printf("enter 5 if you want to find magnitude of given vector\n");
            printf("enter 6 if you want to apply scalar triple product\n");
            printf("enter 7 if you want to apply vector triple product\n");
            printf("enter 8 if you want to find angle between two vectors\n");
            printf("enter 9 if you want to find unit vector in direction of a given vector\n");
            int n = 0;
            scanf("%d", &n);
            switch (n)
            {
            case 1:
                vecSum();
                break;
            case 2:
                vecSubtraction();
                break;
            case 3:
                dotproduct();
                break;
            case 4:
                crosspro();
                break;
            case 5:
                vecMagni();
                break;
            case 6:
                STP();
                break;
            case 7:
                VTP();
                break;
            case 8:
                vecAngle();
                break;
            case 9:
                unitvec();
                break;
            default:
                break;
            }
        }
        return 0;
    }
    else if (strcmp(selecType, "graph") == 0)
    {
        while (1)
        {
            char x;
            printf("\nPress 'x' if you want to exit the program , press enter otherwise\n");
            fflush(stdin);
            scanf("%c", &x);
            if (x == 'x')
            {
                printf("Thanks !! Cya\n");
                exit(0);
            }
            char graphFunc[30];
            printf("Type 'pd' to get distance between 2 given points\n");
            printf("Type 'ptl' to get line passing from 2 given points\n");
            printf("Type 'slope' to get slope of a given line\n");
            printf("Type 'ist' to get intersection point of 2 lines\n");
            printf("Type 'stl' to get eqn of a line passing from a point and of a given slope!\n");
            printf("Type 'dbl' to get distance between 2 lines\n");
            printf("Type 'cti' to get info of a circle passing from 3 given points\n");
            printf("Type 'eti' to get info of a circle from its equation\n");
            printf("Type 'abl' to get angle between two lines \n");
            printf("Type 'tti' to get info of a triangle of 3 given vertices\n");
            printf("Type 'ttor' to get orthocentre of a triangle \n");
            printf("Type 'ttin' to get incentre of a triangle \n");
            printf("Type 'ttcir' to get circumcentre of a triangle \n");
            printf("Type 'gts' to get the shape and info of a quad given 4 vertices\n");
            gets(graphFunc);
            if (strcmp(graphFunc, "ptl") != 0 && strcmp(graphFunc, "slope") != 0 && strcmp(graphFunc, "pd") != 0 && strcmp(graphFunc, "eti") != 0 &&
                strcmp(graphFunc, "cti") != 0 && strcmp(graphFunc, "tti") != 0 && strcmp(graphFunc, "ist") != 0 &&
                strcmp(graphFunc, "dbl") != 0 && strcmp(graphFunc, "ttor") != 0 && strcmp(graphFunc, "ttin") != 0 && strcmp(graphFunc, "ttcir") != 0 &&
                strcmp(graphFunc, "abl") != 0 && strcmp(graphFunc, "stl") != 0 && strcmp(graphFunc, "gts") != 0)
            {
                printf("please enter a valid option!\n");
                exit(0);
            }
            if (strcmp(graphFunc, "ptl") == 0)
            {
                point firstPoint;
                point secondPoint;
                printf("Enter x and y coordinates of the first point : \n");
                scanf("%f %f", &firstPoint.x, &firstPoint.y);
                printf("Enter x and y coordinates of the second point : \n");
                scanf("%f %f", &secondPoint.x, &secondPoint.y);
                line passingLine = pointsToLine(firstPoint, secondPoint);
                lineDisplay(passingLine);
            }
            else if (strcmp(graphFunc, "pd") == 0)
            {
                point firstPoint;
                point secondPoint;
                printf("Enter x and y coordinates of the first point : \n");
                scanf("%f %f", &firstPoint.x, &firstPoint.y);
                printf("Enter x and y coordinates of the second point : \n");
                scanf("%f %f", &secondPoint.x, &secondPoint.y);
                float dist = distTwopoints(firstPoint, secondPoint);
                printf("The distance between these two points is = %.2f\n", dist);
                fprintf(fptr, "The distance between these two points is = %.2f\n", dist);
            }
            else if (strcmp(graphFunc, "slope") == 0)
            {
                line l;
                printf("In ax + by = c , put value of a , b , c\n");
                scanf("%f %f %f", &l.a, &l.b, &l.c);
                float ans = slopeOfLine(l);
                printf("Slope of this line is = %.2f\n", ans);
                fprintf(fptr, "Slope of this line is = %.2f\n", ans);
            }
            else if (strcmp(graphFunc, "ist") == 0)
            {
                line l1, l2;
                printf("In ax + by = c (line 1), put value of a , b , c\n");
                scanf("%f %f %f", &l1.a, &l1.b, &l1.c);
                printf("In ax + by = c (line 2), put value of a , b , c\n");
                scanf("%f %f %f", &l2.a, &l2.b, &l2.c);
                intersectionOfLines(l1, l2);
            }
            else if (strcmp(graphFunc, "dbl") == 0)
            {
                line l1, l2;
                printf("In ax + by = c (line 1), put value of a , b , c\n");
                scanf("%f %f %f", &l1.a, &l1.b, &l1.c);
                printf("In ax + by = c (line 2), put value of a , b , c\n");
                scanf("%f %f %f", &l2.a, &l2.b, &l2.c);
                float ans = distanceBwLines(l1, l2);
                printf("The distance between these lines is %.2f\n", ans);
                fprintf(fptr, "The distance between these lines is %.2f\n", ans);
            }
            else if (strcmp(graphFunc, "cti") == 0)
            {
                point firstPoint;
                point secondPoint;
                point thirdPoint;
                printf("Enter x and y coordinates of the first point : \n");
                scanf("%f %f", &firstPoint.x, &firstPoint.y);
                printf("Enter x and y coordinates of the second point : \n");
                scanf("%f %f", &secondPoint.x, &secondPoint.y);
                printf("Enter x and y coordinates of the third point : \n");
                scanf("%f %f", &thirdPoint.x, &thirdPoint.y);
                findCircle(firstPoint, secondPoint, thirdPoint);
            }
            else if (strcmp(graphFunc, "eti") == 0)
            {
                float g, f, c;
                printf("In x^2 + y^2 + gx + fy + c = 0 , type the value of a,b,h,k,c in order\n");
                scanf("%f %f %f", &g, &f, &c);
                g = g / 2;
                f = f / 2;
                point centre;
                centre.x = -1 * g;
                centre.y = -1 * f;
                printf("Centre of this circle is : ");
                fprintf(fptr, "Centre of this circle is : ");
                pointDisplay(centre);
                float radius = sqrt(g * g + f * f - c);
                printf("Radius of this circle = %.2f\n", radius);
                fprintf(fptr, "Radius of this circle = %.2f\n", radius);
            }
            else if (strcmp(graphFunc, "tti") == 0)
            {
                point firstPoint;
                point secondPoint;
                point thirdPoint;
                printf("Enter x and y coordinates of the first point : \n");
                scanf("%f %f", &firstPoint.x, &firstPoint.y);
                printf("Enter x and y coordinates of the second point : \n");
                scanf("%f %f", &secondPoint.x, &secondPoint.y);
                printf("Enter x and y coordinates of the third point : \n");
                scanf("%f %f", &thirdPoint.x, &thirdPoint.y);
                graphTriangle(firstPoint, secondPoint, thirdPoint);
            }
            else if (strcmp(graphFunc, "ttor") == 0)
            {
                point firstPoint;
                point secondPoint;
                point thirdPoint;
                printf("Enter x and y coordinates of the first point : \n");
                scanf("%f %f", &firstPoint.x, &firstPoint.y);
                printf("Enter x and y coordinates of the second point : \n");
                scanf("%f %f", &secondPoint.x, &secondPoint.y);
                printf("Enter x and y coordinates of the third point : \n");
                scanf("%f %f", &thirdPoint.x, &thirdPoint.y);
                point ortho = graphOrthocentre(firstPoint, secondPoint, thirdPoint);
                printf("Orthocentre of this triangle is ");
                pointDisplay(ortho);
            }
            else if (strcmp(graphFunc, "ttcir") == 0)
            {
                point firstPoint;
                point secondPoint;
                point thirdPoint;
                printf("Enter x and y coordinates of the first point : \n");
                scanf("%f %f", &firstPoint.x, &firstPoint.y);
                printf("Enter x and y coordinates of the second point : \n");
                scanf("%f %f", &secondPoint.x, &secondPoint.y);
                printf("Enter x and y coordinates of the third point : \n");
                scanf("%f %f", &thirdPoint.x, &thirdPoint.y);
                point circum = graphCircumCenre(firstPoint, secondPoint, thirdPoint);
                printf("The Circumcentre of this circle is : ");
                pointDisplay(circum);
            }
            else if (strcmp(graphFunc, "stl") == 0)
            {
                point firstPoint;
                float slope;
                printf("Enter x and y coordinates of the point from which the line passes : \n");
                scanf("%f %f", &firstPoint.x, &firstPoint.y);
                printf("Enter the slope of the line : ");
                scanf("%f", &slope);
                line ans = graphSlopeLine(firstPoint, slope);
                printf("The line is --> ");
                lineDisplay(ans);
            }
            else if (strcmp(graphFunc, "abl") == 0)
            {
                line l1, l2;
                printf("In ax + by = c (line 1), put value of a , b , c\n");
                scanf("%f %f %f", &l1.a, &l1.b, &l1.c);
                printf("In ax + by = c (line 2), put value of a , b , c\n");
                scanf("%f %f %f", &l2.a, &l2.b, &l2.c);
                float angle = graphAngleLines(l1, l2);
                if (angle < 0)
                {
                    angle = angle * -1;
                }
                printf("Angle between these 2 line is %.2f ", angle);
            }
            else if (strcmp(graphFunc, "ttin") == 0)
            {
                point firstPoint;
                point secondPoint;
                point thirdPoint;
                printf("Enter x and y coordinates of the first point : \n");
                scanf("%f %f", &firstPoint.x, &firstPoint.y);
                printf("Enter x and y coordinates of the second point : \n");
                scanf("%f %f", &secondPoint.x, &secondPoint.y);
                printf("Enter x and y coordinates of the third point : \n");
                scanf("%f %f", &thirdPoint.x, &thirdPoint.y);
                point incent = graphIncenter(firstPoint, secondPoint, thirdPoint);
                printf("The Incenter of this triangle is located at : ");
                pointDisplay(incent);
            }
            else if (strcmp(graphFunc, "gts") == 0)
            {
                point p1;
                point p2;
                point p3;
                point p4;
                printf("Enter x and y coordinates of the first point : \n");
                scanf("%f %f", &p1.x, &p1.y);
                printf("Enter x and y coordinates of the second point : \n");
                scanf("%f %f", &p2.x, &p2.y);
                printf("Enter x and y coordinates of the third point : \n");
                scanf("%f %f", &p3.x, &p3.y);
                printf("Enter x and y coordinates of the fourth point : \n");
                scanf("%f %f", &p4.x, &p4.y);
                printf("\n\n");
                printf("***************************************\n");
                float len1 = distTwopoints(p1, p2);
                float len2 = distTwopoints(p2, p3);
                float len3 = distTwopoints(p3, p4);
                float len4 = distTwopoints(p1, p4);
                if (len1 == len2 && len2 == len3 && len3 == len4 && len4 == len1)
                {
                    if (distTwopoints(p1, p3) == distTwopoints(p2, p4))
                    {
                        printf("SQUARE\n");
                        graphInfo(p1, p2, p3, p4);
                    }
                    else
                    {
                        printf("Rhombus\n");
                        graphInfo(p1, p2, p3, p4);
                    }
                }
                else if (len1 == len3 && len2 == len4)
                {
                    if (distTwopoints(p1, p3) == distTwopoints(p2, p4))
                    {
                        printf("Rectangle\n");
                        graphInfo(p1, p2, p3, p4);
                    }
                    else
                    {
                        printf("Parallelogram\n");
                        graphInfo(p1, p2, p3, p4);
                    }
                }
                else
                {
                    printf("Regular quadrilateral\n");
                    graphInfo(p1, p2, p3, p4);
                }
            }
            else
            {
                printf("Please Select a Valid Option!\n");
            }
        }
        return 0;
    }
}