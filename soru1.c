#include <stdio.h>
#include <math.h>

struct Point{
    double x;
    double y;
}; // the struct for a coordinate

struct Circle{
    struct Point center;
    double r;
}; // the struct for a circle

double distance(struct Point A, struct Point B){
    double d1 = A.x - B.x;
    double d2 = A.y - B.y;
    double result = sqrt((d1*d1)+(d2*d2));
    return result;
} // calculating the distance between two points. with pisagor

int isinsidecircle(struct Point A, struct Circle circle){
    double distance = sqrt((A.x - circle.center.x) * (A.x - circle.center.x) + (A.y - circle.center.y) * (A.y - circle.center.y));
    if(distance <= circle.r){
        return 1;
    }
    else{
        return 0;
    }
} // to check whether a point is inside a circle area or not, first find distance with pisagor and then compare with radius

double aroundcircle(struct Circle circle){
    double result = 2 * circle.r * M_PI;
    return result;
}// to find the around value of a circle

double areacircle(struct Circle circle){
    double result = M_PI * circle.r * circle.r;
    return result;
}

double areadiff(struct Circle circle, struct Circle circle2){
    
    double result = (M_PI * circle.r * circle.r) - (M_PI * circle2.r * circle2.r);
    return result;
}

int main(){

    struct Point A = {1,2};
    struct Point B = {0,0};

    printf("your A coordinate is (%lf, %lf)\n", A.x, A.y);
    printf("your B coordinate is (%lf, %lf)\n", B.x, B.y);
    printf("the difference between Point A and Point B is %lf\n", distance(A,B));

    struct Circle circle = {{0,0},5};
    struct Circle circle2 = {{0,0},4};
    printf("your circle radius is %lf\n", circle.r);
    printf("your second circle radius is %lf\n", circle2.r);


    if(isinsidecircle(A,circle)){
        printf("the Point A is inside the circle area.\n");
    }
    else{
        printf("the Point A is outside the circle area.\n");
    }

    printf("the around of circle is %lf\n", aroundcircle(circle));
    printf("the area of circle is %lf\n",areacircle(circle));
    printf("the area of second circle is %lf\n", areacircle(circle2));
    printf("the area between two circles which have the same center is %lf\n", areadiff(circle,circle2));

    return 0;
}