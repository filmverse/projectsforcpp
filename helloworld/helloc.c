#include <stdio.h>

void vikas(int val) {
    printf("hello world in my void function \n");
    printf("getting value from parent function \n");
    printf("and the value is %d \n", val);

}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    vikas(b);
    printf("%d \n", a);
    vikas(c);
    return 0;
}
