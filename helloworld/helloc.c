#include <stdio.h>

void vikas(int val) {
    int i = 1;
    printf("hello world in my void function \n");
    printf("getting value from parent function \n");
    printf("and the value is %d \n", val);
    printf("%d %d %d\n", i++, i++, i);

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


// int main(int argc, char *argv[]) {
//     printf("Number of arguments: %d\n", argc);
//     for (int i = 0; i < argc; i++) {
//         printf("Argument %d: %s\n", i, argv[i]);
//     }
//     return 0;
// }