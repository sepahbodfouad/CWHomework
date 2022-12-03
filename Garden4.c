#include <stdio.h>
#include <math.h>

//The Only Change in the code for the CWH is Adding this comment!

int main()
{
    double n;
    scanf("%lf",&n);
    double Max = 0;

    while(n > 0)
    {
        double x1, y1;
        double x2, y2;
        double x3, y3;
        double x4, y4;

        scanf("%lf %lf",&x1,&y1);
        scanf("%lf %lf",&x2,&y2);
        scanf("%lf %lf",&x3,&y3);
        scanf("%lf %lf",&x4,&y4);

        double AB = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
        double BC = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
        double CD = sqrt((x3 - x4)*(x3 - x4) + (y3 - y4)*(y3 - y4));
        double AD = sqrt((x1 - x4)*(x1 - x4) + (y1 - y4)*(y1 - y4));
        double AC = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));

        double Mohitx = AB + BC + AC;
        double Mohity = AD + CD + AC;

        double Masahatx = sqrt((Mohitx / 2) * ((Mohitx / 2) - AB) * ((Mohitx / 2) - BC) * ((Mohitx / 2) - AC));
        double Masahaty = sqrt((Mohity / 2) * ((Mohity / 2) - AD) * ((Mohity / 2) - CD) * ((Mohity / 2) - AC));

        double finalMasahat = Masahatx + Masahaty ;
        double finalMohit = AB + BC + CD + AD ;

        printf("%.2lf\n%.2lf\n",finalMasahat,finalMohit);
        
        if((finalMasahat / finalMohit) > Max)
        {
            Max = finalMasahat / finalMohit;
        }

        n--;
    }

    printf("%.2lf",Max);
}