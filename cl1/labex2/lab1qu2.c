#include<stdio.h>
#include<math.h>

int main() {
    int sqrtNum;
    int n;
    int i;
    for(i=1000; i<=9999; i++) {
        sqrtNum = sqrt(i);
        if(sqrtNum * sqrtNum == i) {
            int A = i / 100;
            int B = i % 100;
            int x = A / 10;
            int y = B / 10;
            int p = A % 10;
            int q = B % 10;

            if((x == p) && (y == q) && (A != B)) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
