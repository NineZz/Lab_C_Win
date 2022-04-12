#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double double_angle(double a,double b,double c,double d);

int main(){
    double x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d;
    printf("Line 1 = ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("Line 2 = ");
    scanf("%lf %lf %lf %lf", &x3, &y3, &x4, &y4);
    a=x2-x1;
    b=y2-y1;
    c=x4-x3;
    d=y4-y3;
    double_angle(a, b, c, d);
    return 0;
}

double double_angle(double a,double b,double c,double d){
    double ans_1, ans_2, result_1, result_2;
    ans_1 = ((a*c) + (b*d))/((sqrt(pow(a, 2) + pow(b, 2)))*(sqrt(pow(c, 2) + pow(d, 2))));
    result_1 = acos(ans_1);
    result_2 = 0;
    printf("Angles in radian = %.2lf, %.2lf\n", result_1, result_2);
    result_1 = acos(ans_1)*180/M_PI;
    ans_2 = (360-(acos(ans_1)*180/M_PI));
    printf("Angles in degree = %.2lf, %.2lf\n", result_1, ans_2);
}
