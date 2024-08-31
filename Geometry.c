#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

void geometry(char shape_name)
{

    if (shape_name == 'c')
    {
        printf("Enter the radius of the circle. ");
        double radius;
        scanf("%lf", &radius);
        double area = M_PI * pow(radius, 2);
        double perimeter = 2 * M_PI * radius;
        printf("\nArea: %lf", area);
        printf("\nCircumference: %lf", perimeter);
        printf("\nVolume: 0, as it is a 2-D shape.");
    }

    else if (shape_name == 's')
    {
        printf("Enter the side of the square. ");
        double side;
        scanf("%lf", &side);
        double area = pow(side, 2);
        double perimeter = 4 * side;
        printf("Area: %lf", area);
        printf("\nPerimeter: %lf", perimeter);
        printf("\nVolume: 0, as it is a 2-D shape.");
    }

    else if (shape_name == 'r')
    {
        printf("Enter the length and breadth of the rectangle. ");
        double length;
        double breadth;
        scanf("%lf", &length);
        scanf("%lf", &breadth);
        double area = length * breadth;
        double perimeter = 2 * (length + breadth);
        printf("Area: %lf", area);
        printf("\nPerimeter: %lf", perimeter);
        printf("\nVolume: 0, as it is a 2-D shape.");
    }

    else if (shape_name == 't')
    {
        printf("Enter the length of all sides of triangle. ");
        double s1;
        double s2;
        double s3;
        scanf("%lf", &s1);
        scanf("%lf", &s2);
        scanf("%lf", &s3);
        double perimeter = s1 + s2 + s3;
        int s = perimeter / 2;
        double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
        if (area >= 0)
        {
            printf("Area: %lf", area);
            printf("\nPerimeter: %lf", perimeter);
            printf("\nVolume: 0, as it is a 2-D shape.");
        }
        else if (area < 0)
        {
            printf("Triangle doesn't exist.");
        }
    }

    else if (shape_name == 'C')
    {
        printf("Enter the side of the cube. ");
        double side;
        scanf("%lf", &side);
        double area = 6 * pow(side, 2);
        double lsa = 4 * pow(side, 2);
        double volume = pow(side, 3);
        double perimeter = 12 * side;
        printf("Total Surface Area: %lf", area);
        printf("\nLateral Surface Area: %lf", lsa);
        printf("\nVolume: %lf", volume);
        printf("\nPerimeter: %lf", perimeter);
    }

    else if (shape_name == 'U')
    {
        printf("Enter the length, breadth and height of the cuboid. ");
        double length;
        double breadth;
        double height;
        scanf("%lf", &length);
        scanf("%lf", &breadth);
        scanf("%lf", &height);
        double area = 2 * ((length * breadth) + (breadth * height) + (height * length));
        double lsa = 2 * height * (length + breadth);
        double volume = length * breadth * height;
        double perimeter = 4 * (length + breadth + height);
        printf("Total Surface Area: %lf", area);
        printf("\nLateral Surface Area: %lf", lsa);
        printf("\nVolume: %lf", volume);
        printf("\nPerimeter: %lf", perimeter);
    }

    else if (shape_name == 'h')
    {
        printf("Enter the radius of the hemisphere. ");
        double radius;
        scanf("%lf", &radius);
        double area = (3 * M_PI * pow(radius, 2));
        double lsa = 2 * M_PI * pow(radius, 2);
        double volume = (2 * M_PI * pow(radius, 3)) / 3;
        double perimeter = 2 * M_PI * radius;
        printf("Total Surface Area: %lf", area);
        printf("\nLateral Surface Area: %lf", lsa);
        printf("\nCircumference of the base of hemisphere: %lf", perimeter);
        printf("\nVolume: %lf", volume);
    }

    else if (shape_name == 'S')
    {
        printf("Enter the radius of the sphere. ");
        double radius;
        scanf("%lf", &radius);
        double area = (4 * M_PI * pow(radius, 2));

        double volume = (4 * M_PI * pow(radius, 3)) / 3;
        double perimeter = 2 * M_PI * radius;
        printf("Total Surface Area: %lf", area);

        printf("\nCircumference of the base of hemisphere: %lf", perimeter);
        printf("\nVolume: %lf", volume);
    }

    else if (shape_name == 'Y')
    {
        printf("Enter the radius and height of the cylinder. ");
        double radius;
        double height;

        scanf("%lf", &radius);
        scanf("%lf", &height);
        double area = (2 * M_PI * radius * (radius + height));
        double lsa = 2 * M_PI * radius * height;
        double volume = (M_PI * pow(radius, 2) * height);
        double perimeter = (4 * M_PI * radius) + (2 * height);
        printf("Total Surface Area: %lf", area);
        printf("\nLateral Surface Area: %lf", lsa);
        printf("\nPerimeter of cylinder: %lf", perimeter);
        printf("\nVolume: %lf", volume);
    }

    else if (shape_name == 'O')
    {
        printf("Enter the radius and height of the Cone. ");
        double radius;
        double height;

        scanf("%lf", &radius);
        scanf("%lf", &height);
        double slant_height = sqrt(pow(radius, 2) + pow(height, 2));
        double area = M_PI * radius * (slant_height + radius);
        double lsa = M_PI * radius * slant_height;
        double volume = (M_PI * pow(radius, 2) * height) / 3;
        double perimeter = 2 * M_PI * radius;
        printf("\nSlant Height: %lf", slant_height);
        printf("\nTotal Surface Area: %lf", area);
        printf("\nLateral Surface Area: %lf", lsa);
        printf("\nPerimeter of Cone: %lf", perimeter);
        printf("\nVolume: %lf", volume);
    }
}

int main()
{

    printf("Enter 'c' for circle.");
    printf("\nEnter 's' for square.");
    printf("\nEnter 'r' for rectangle.");
    printf("\nEnter 't' for triangle.");
    printf("\nEnter 'U' for cuboid.");
    printf("\nEnter 'h' for hemisphere.");
    printf("\nEnter 'C' for cube.");
    printf("\nEnter 'S' for sphere.");
    printf("\nEnter 'O' for Cone.");
    printf("\nEnter 'Y' for Cylinder.");

    printf("\n\nEnter the shape you want to get area, perimeter and volume for: ");

    char shape_name;
    scanf("%c", &shape_name);
    geometry(shape_name);

    return 0;
}