#include <stdio.h>
#include <string.h>
#include <math.h>
void converter(char c[60], double n)
{

    if (strcmp(c, "mm") == 0 || strcmp(c, "cm") == 0 || strcmp(c, "dm") == 0 || strcmp(c, "m") == 0 || strcmp(c, "dam") == 0 || strcmp(c, "hm") == 0 || strcmp(c, "km") == 0)
    {
        if (strcmp(c, "mm") == 0)
        {
            double ans = n * 10;
            printf("%.2lf millimeter", ans);
        }
        if (strcmp(c, "cm") == 0)
        {
            double ans = n;
            printf("%.2lf centimeter", ans);
        }
        if (strcmp(c, "dm") == 0)
        {
            double ans = n / 10;
            printf("%.2lf decimeter", ans);
        }
        if (strcmp(c, "m") == 0)
        {
            double ans = n / 100;
            printf("%.2lf meter", ans);
        }
        if (strcmp(c, "dam") == 0)
        {
            double ans = n / 1000;
            printf("%.2lf decameter", ans);
        }
        if (strcmp(c, "hm") == 0)
        {
            double ans = n / 10000;
            printf("%.2lf hectometer", ans);
        }
        if (strcmp(c, "km") == 0)
        {
            double ans = n / 100000;
            printf("%.2lf kilometer", ans);
        }
    }

    else if (strcmp(c, "mg") == 0 || strcmp(c, "cg") == 0 || strcmp(c, "dg") == 0 || strcmp(c, "g") == 0 || strcmp(c, "dag") == 0 || strcmp(c, "hg") == 0 || strcmp(c, "kg") == 0)
    {
        if (strcmp(c, "mg") == 0)
        {
            double ans = n * 10;
            printf("%.2lf milligram", ans);
        }
        if (strcmp(c, "cg") == 0)
        {
            double ans = n;
            printf("%.2lf centigram", ans);
        }
        if (strcmp(c, "dg") == 0)
        {
            double ans = n / 10;
            printf("%.2lf decigram", ans);
        }
        if (strcmp(c, "g") == 0)
        {
            double ans = n / 100;
            printf("%.2lf gram", ans);
        }
        if (strcmp(c, "dag") == 0)
        {
            double ans = n / 1000;
            printf("%.2lf decagram", ans);
        }
        if (strcmp(c, "hg") == 0)
        {
            double ans = n / 10000;
            printf("%.2lf hectogram", ans);
        }
        if (strcmp(c, "km") == 0)
        {
            double ans = n / 100000;
            printf("%.2lf kilogram", ans);
        }
    }

    else if (strcmp(c, "cc") == 0 || strcmp(c, "mc") || strcmp(c, "gal") || strcmp(c, "ounce") || strcmp(c, "pint") || strcmp(c, "quart"))
    {

        if (strcmp(c, "cc") == 0)
        {
            double ans = n * 1000;
            printf("%.2lf", ans);
        }

        if (strcmp(c, "mc") == 0)
        {
            double ans = n / 1000;
            printf("%.2lf", ans);
        }

        if (strcmp(c, "gal") == 0)
        {
            double ans = n / 3.785;
            printf("%.2lf", ans);
        }

        if (strcmp(c, "ounce") == 0)
        {
            double ans = n * 33.814;
            printf("%.2lf", ans);
        }

        if (strcmp(c, "pint") == 0)
        {
            double ans = n * 2.113;
            printf("%.2lf", ans);
        }

        if (strcmp(c, "quart") == 0)
        {
            double ans = n * 1.057;
            printf("%.2lf", ans);
        }
    }

    if (strcmp(c, "cel") == 0 || strcmp(c, "fah") == 0)
    {
        if (strcmp(c, "cel") == 0)
        {
            double ans = (n * 1.8) + 32;
            printf("%.2lf F", ans);
        }

        if (strcmp(c, "fah") == 0)
        {
            double ans = (n - 32) / 1.8;
            printf("%.2lf C", ans);
        }
    }

    if (strcmp(c, "USD") == 0 || strcmp(c, "CNY") == 0 || strcmp(c, "RUB") == 0 || strcmp(c, "JPY") == 0 || strcmp(c, "GBP") == 0 || strcmp(c, "CAD") == 0 || strcmp(c, "EUR") == 0 || strcmp(c, "AUD") == 0)
    {
        if (strcmp(c, "USD") == 0)
        {
            double ans = n * 0.013;
            printf("%.2lf Dollars", ans);
        }
        if (strcmp(c, "CNY") == 0)
        {
            double ans = n * 0.086;
            printf("%.2lf Yuan", ans);
        }
        if (strcmp(c, "RUB") == 0)
        {
            double ans = n * 0.74;
            printf("%.2lf Ruble", ans);
        }
        if (strcmp(c, "JPY") == 0)
        {
            double ans = n * 1.72;
            printf("%.2lf Yen", ans);
        }
        if (strcmp(c, "GBP") == 0)
        {
            double ans = n * 0.010;
            printf("%.2lf Pound Sterling", ans);
        }
        if (strcmp(c, "CAD") == 0)
        {
            double ans = n * 0.016;
            printf("%.2lf Dollars", ans);
        }
        if (strcmp(c, "EUR") == 0)
        {
            double ans = n * 0.012;
            printf("%.2lf Euro", ans);
        }
        if (strcmp(c, "AUD") == 0)
        {
            double ans = n * 0.018;
            printf("%.2lf Dollars", ans);
        }
    }
    else if (strcmp(c, "gml") == 0 || strcmp(c, "kgm") || strcmp(c, "lbi") || strcmp(c, "lbf") || strcmp(c, "lbg") || strcmp(c, "ty"))
    {
        if (strcmp(c, "gml") == 0)
        {
            double ans = n;
            printf("%.2lf g/mL", ans);
        }
        if (strcmp(c, "kgm") == 0)
        {
            double ans = n * 1000;
            printf("%.2lf kg/m^3", ans);
        }
        if (strcmp(c, "lbi") == 0)
        {
            double ans = n * 0.036128;
            printf("%.2lf Lb/inch^3", ans);
        }
        if (strcmp(c, "lbf") == 0)
        {
            double ans = n * 62.43;
            printf("%.2lf Lb/feet^3", ans);
        }
        if (strcmp(c, "lbg") == 0)
        {
            double ans = n * 8.345;
            printf("%.2lf Lb/gallon", ans);
        }
        if (strcmp(c, "ty") == 0)
        {
            double ans = n * 0.8428;
            printf("%.2lf Ton/yard^3", ans);
        }
    }
}

void bmi(double weight, double height)
{
    double key_value = weight / pow(height, 2);
    if (key_value < 18.5)
    {
        printf("Your BMI is %.2lf. You're underweight. Get some food and get ripped, you poor...", key_value);
    }
    else if (key_value > 18.5 && key_value < 24.9)
    {
        printf("Your BMI is %.2lf. Your health is in good condition.", key_value);
    }
    else if (key_value > 24.9)
    {
        printf("Your BMI is %.2lf. You are overweight. Donate some food you pig.", key_value);
    }
}

void time(int value)
{
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

void religion(char rel1[50], char rel2[50]) {
    if(strcmp(rel1, "H") == 0 && strcmp(rel2, "I") == 0) {
        printf("You've betrayed your country by converting to Islam.");
    }
    else if(strcmp(rel1, "I") == 0 && strcmp(rel2, "H") == 0) {
        printf("You're on the right track, Islam promotes violence.");
    }
    else if(strcmp(rel1, "S") == 0 && strcmp(rel2, "H") == 0) {
        printf("I can finally bet you're not a Khalistani.");
    }
    else if(strcmp(rel1, "H") == 0 && strcmp(rel2, "S") == 0) {
        printf("You fucking Khalistani.");
    }
    else if(strcmp(rel1, "H") == 0 && strcmp(rel2, "S") == 0) {
        printf("You fucking Khalistani.");
    }
    else if(strcmp(rel1, "H") == 0 && strcmp(rel2, "C") == 0) {
        printf("Mera Yesu Yesu, Mera yesu yesu.");
    }
    else if(strcmp(rel1, "C") == 0 && strcmp(rel2, "H") == 0) {
        printf("Hinduism is the way of life. Good Decision.");
    }
}

int main()
{

    printf("Enter the conversion you want:");
    printf("\nEnter 'leng' for length conversions");
    printf("\nEnter 'weight' for weight conversions");
    printf("\nEnter 'vol' for volumetric conversions");
    printf("\nEnter 'den' for density conversions");
    printf("\nEnter 'temp' for temperature conversions");
    printf("\nEnter 'curren' for currency conversions");
    printf("\nEnter 'bmi' to check your health\n");
    printf("Enter 'time' to convert seconds to hours, minutes, seconds format\n");
    printf("Enter 'rel' to convert your religion in INDIA\n");
    printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-");
    printf("\n\nEnter -> ");
    char type[50];
    scanf("%s", type);
    if (strcmp(type, "leng") == 0)
    {

        printf("\nEnter the value in cm. ");
        double n;
        scanf("%lf", &n);

        printf("Enter the unit you want to convert it into. Select from 'mm','cm','dm','m','dam','hm','km'....");
        char c[60];
        // gets(c);
        scanf("%s", c);
        // char length[] = {"mm","cm","dm","m","dam","hm","km"};
        // char weight[] = {"mg","cg","dg","g","dag","hg","kg"};
        converter(c, n);
    }

    else if (strcmp(type, "weight") == 0)
    {

        printf("\nEnter the value in cg. ");
        double n;
        scanf("%lf", &n);

        printf("Enter the unit you want to convert it into. Select from 'mg','cg','dg','g','dag','hg','kg'....");
        char c[60];
        // gets(c);
        scanf("%s", c);
        // char length[] = {"mm","cm","dm","m","dam","hm","km"};
        // char weight[] = {"mg","cg","dg","g","dag","hg","kg"};
        converter(c, n);
    }

    else if (strcmp(type, "vol") == 0)
    {
        printf("Enter the volume in litres. ");
        double n;
        scanf("%lf", &n);
        printf("Enter the unit you want to convert it into. Select from 'cc'(cubic centimeter),'mc'(cubic meter),'gal'(gallons),'ounce','pint','quart'....\n");
        char c[60];
        scanf("%s", c);
        converter(c, n);
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
        printf("Enter the value in Rupees. ");
        double n;
        scanf("%lf", &n);
        printf("Specify the currency you want to convert it into.");
        printf("\n'USD' for US Dollar");
        printf("\n'CNY' for Chinese Yuan");
        printf("\n'RUB' for Russian Ruble");
        printf("\n'JPY' for Japanese Yen");
        printf("\n'GBP' for Pound Sterling");
        printf("\n'CAD' for Canadian Dollar");
        printf("\n'EUR' for Euro");
        printf("\n'AUD' for Australian Dollar\n");

        char c[60];
        scanf("%s", c);
        converter(c, n);
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
        time(value);
    }

    else if (strcmp(type, "rel") == 0)
    {
        printf("Enter your religion.");
        printf("\n'H' for Hinduism.");
        printf("\n'I' for Islam.");
        printf("\n'C' for Christanity.");
        printf("\n'S' for Sikhism. ");
        char rel1[50];
        scanf("%s", &rel1);
        printf("Enter the religion you want to convert into. ");
        char rel2[50];
        scanf("%s", &rel2);
        religion(rel1, rel2);
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

    return 0;
}