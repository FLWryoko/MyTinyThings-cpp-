#include <stdio.h>
#include <math.h>

int main()
{
    double theta,psi,r;
    double x,y,z;

    r = 1;
    theta = 2.3;
    psi = 0.9;
    
    x = r*sin(theta)*cos(psi);
    y = r*sin(theta)*sin(psi);
    z = r*cos(theta);

    double psitan(double x,double y);
    double thetatan(double x,double y,double z);

    printf("%.2lf*sin(%.2lf)*cos(%.2lf) = %.2lf\n", r, theta, psi, x);
    printf("%.2lf*sin(%.2lf)*sin(%.2lf) = %.2lf\n", r, theta, psi, y);
    printf("%.2lf*cos(%.2lf) = %.2lf\n", r, theta, z);
    printf("r^2 = x^2+y^2+z^2 = %.2lf\n", x*x+y*y+z*z);
    printf("tan(%.2lf) = %.2lf\n",psi,psitan(x,y));
    printf("tan(%.2lf) = %.2lf\n",theta,thetatan(x,y,z));


    return 0;
}
double psitan(double x,double y){
        double result;
        result = x/y;
        return result;

    }
double thetatan(double x,double y,double z){
        double result;
        result = (x*x+y*y)/z*z;
        return result;

    }
double peqxinspc(double r,double theta,double psi){
        double result;
        result = r-(r*sin(theta)*sin(psi))-(r*cos(theta));
        return result;

}
double peqthetainxinspc(double x,double theta,double psi){
        double result;
        result = 1-sin(theta)*cos(psi);
        return result;

}
double peqthetainyinspc(double x,double theta,double psi){
        double result;
        result = 1-sin(theta)*sin(psi);
        return result;

}
double peqthetainzinspc(double x,double theta){
        double result;
        result = 1-cos(theta);
        return result;

}