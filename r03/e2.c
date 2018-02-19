#include <stdio.h>

int func1(int v) {
    return v + 7;
}

int func2(int v) {
    return v + 5;
}

int func3(int v) {
    return v + 9;
}

int func4(int v) {
    return v + 3;
}

int func5(int v) {
    return v + 4;
}

int main(int argc, char **argv) 
{
    int (*array[])(int) = {func1, func2, func3, func4, func5};

    /* FIXME: Please replace following '0's with some other values so that
     *        The final printf will print out 1.
     */
    int a = (array[0](5) == 0);
    int b = (array[2](3) == 0);
    int c = (array[2](6) == 0);
    int d = (array[4](6) == 0);

    // Do not modify this line.
    printf("%d", a * b * c * d);
}
