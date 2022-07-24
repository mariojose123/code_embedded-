#include <stdio.h>
int main(){
    double x[] = {1, 2, 4, 3, 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
    double y[] = {1, 3, 3, 2, 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
 
    double b0 = 0;
    double b1 = 0;
    double alpha = 0.01;
 
    for (int i = 0; i < 100000; i ++) {
        int idx = i % 36;
        double p = b0 + b1 * x[idx];
        double err = p - y[idx];
        b0 = b0 - alpha * err;
        b1 = b1 - alpha * err * x[idx];
        printf("%lf\n",b0);
        printf("%lf\n",b1);
    }
}
