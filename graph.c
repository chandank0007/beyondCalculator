#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define pi 3.141592653589793238
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
    printf("(%.2f,%.2f)\n", poi.x, poi.y);
}
void lineDisplay(line li)
{
    if (li.b >= 0)
    {
        printf("%.2fx + %.2fy = %.2f\n", li.a, li.b, li.c);
    }
    else
    {
        li.b = -1 * li.b;
        printf("%.2fx - %.2fy = %.2f\n", li.a, li.b, li.c);
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
float deter_two(float arr[][2])
{
    float det = (arr[0][0] * arr[1][1]) - (arr[1][0] * arr[0][1]);
    return det;
}
void intersectionOfLines(line l1, line l2)
{

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
    }
    else if (ratone == rattwo && rattwo == ratthree && ratone == ratthree)
    {
        printf("The given lines have infinite solutions \n");
    }
    else
    {
        float ans1 = d1 / d;
        float ans2 = d2 / d;
        printf("the solution to these lines is given below: \n");
        printf("x=%0.1f y=%0.1f \n", ans1, ans2);
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
    printf("Radius = %.2f\n", r);
}
void graphTriangle(point firstPoint, point secondPoint, point thirdPoint)
{
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
    if (area >= 0)
    {
        printf("\nArea = %.2f", area);
        printf("\nPerimeter = %.2f", perimeter);
        printf("\nangles of this triangle are = %.2f , %.2f and %.2f in degrees.", A, B, C);
        printf("\nCentroid of this triangle is (%.2f,%.2f)", (firstPoint.x + secondPoint.x + thirdPoint.x) / 3,
               (firstPoint.y + secondPoint.y + thirdPoint.y) / 3);
    }
    else if (area < 0)
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
point graphMiddlePoint(point p1, point p2)
{
    point ans;
    ans.x = (p1.x + p2.x) / 2;
    ans.y = (p1.y + p2.y) / 2;
    return ans;
}
void graphInfo(point p1, point p2, point p3, point p4)
{
    float len1 = distTwopoints(p1, p2);
    float len2 = distTwopoints(p2, p3);
    float len3 = distTwopoints(p3, p4);
    float len4 = distTwopoints(p1, p4);
    float x1 = p1.x;
    float x2 = p2.x;
    float x3 = p3.x;
    float y1 = p1.y;
    float y2 = p2.y;
    float y3 = p3.y;
    float x4 = p4.x;
    float y4 = p4.y;
    printf("Sides are of length --> %.2f , %.2f , %.2f , %.2f \n", len1, len2, len3, len4);
    float area = x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x1 * y4;
    area = area / 2;
    printf("Area = %.2f\n\n", area);
    line l1 = pointsToLine(p1, p2);
    line l2 = pointsToLine(p2, p3);
    line l3 = pointsToLine(p3, p4);
    line l4 = pointsToLine(p4, p1);
    printf("Equations of its sides are : \n");
    lineDisplay(l1);
    lineDisplay(l2);
    lineDisplay(l3);
    lineDisplay(l4);
    printf("*******************************\n");
}

int main()
{
    char graphFunc[30];
    printf("Type 'pd' to get distance between 2 given points\n");
    printf("Type 'slope' to get slope of a given line\n");
    printf("Type 'ptl' to get line passing from 2 given points\n");
    printf("Type 'ist' to get intersection point of 2 lines\n");
    printf("Type 'dbl' to get distance betweem 2 lines\n");
    printf("Type 'cti' to get info of a circle passing from 3 given points\n");
    printf("Type 'eti' to get info of a circle passing from its equation\n");
    printf("Type 'stl' to get eqn of a line passing from a point and of a given slope!\n");
    printf("Type 'abl' to get angle between two lines \n");
    printf("Type 'gts' to get the shape and info of a quad given 4 vertices\n");
    printf("Type 'tti' to get info of a triangle of 3 given vertices\n");
    printf("Type 'ttor' to get orthocentre of a triangle \n");
    printf("Type 'ttin' to get incentre of a triangle \n");
    printf("Type 'ttcir' to get circumcentre of a triangle \n");
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
    }
    else if (strcmp(graphFunc, "slope") == 0)
    {
        line l;
        printf("In ax + by = c , put value of a , b , c\n");
        scanf("%f %f %f", &l.a, &l.b, &l.c);
        float ans = slopeOfLine(l);
        printf("Slope of this line is = %.2f\n", ans);
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
        pointDisplay(centre);
        float radius = sqrt(g * g + f * f - c);
        printf("Radius of this circle = %.2f\n", radius);
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
        printf("The Inceter of this triangle is located at : ");
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
        printf("Enter x and y coordinates of the third point : \n");
        scanf("%f %f", &p4.x, &p4.y);
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
    return 0;
}