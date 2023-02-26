#include <iostream>
int Reverse(int n){
    int remain;
    int reverse = 0;
    while (true){
        remain = n % 10;
        reverse = reverse * 10 + remain;
        n = n / 10;
        if (n == 0){
            break;
        }
    }
    return reverse;
}
int main() {
    int i;
    for (i = 0; i <= 256; ++i) {
        if(i*i == Reverse(i*i)){
            printf("%d\n", i);
        }
    }
    int a,b,c,d;
    for (a = 1; a <= 9; ++a) {
        for (b = 0; b <= 9; ++b) {
            for (c = 0; c <= 9; ++c) {
                for (d = 0; d <= 9; ++d) {
                    int n = 1000 * a + 100 * b + 10 * c + d;
                    if(n * 9 == Reverse(n)){
                        printf("%d\n", n);
                    }
                }
            }
        }
    }
    return 0;
}
