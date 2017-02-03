#include <stdio.h>


int main(){

	double a[2][2] = {{1,2},{3,4}};
    double b[2][2] = {{1,2},{3,4}};
    double c[2][2] = {0};
    double m[8] = {0};
    
    // Strassen Algorithm. ref: Book.
    m[0]= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);
 	m[1]= (a[1][0]+a[1][1])*b[0][0];
    m[2]= a[0][0]*(b[0][1]-b[1][1]);
    m[3]= a[1][1]*(b[1][0]-b[0][0]);
    m[4]= (a[0][0]+a[0][1])*b[1][1];
    m[5]= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
    m[6]= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    
  	c[0][0]=m[0]+m[3]-m[4]+m[6];
    c[0][1]=m[2]+m[4];
    c[1][0]=m[1]+m[3];
    c[1][1]=m[0]-m[1]+m[2]+m[5];

	printf("%f\t%f\n%f\t%f\n", c[0][0], c[0][1], c[1][0], c[1][1]);


    return 0;
}
