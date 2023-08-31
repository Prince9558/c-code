#include <iostream>

using namespace std;

int main() {
    int integer;
    long long_int;
    char character;
    float floating;
    double double_floating;

    scanf("%d %ld %c %f %lf", &integer, &long_int, &character, &floating, &double_floating);

    printf("%d\n", integer);
    printf("%ld\n", long_int);
    printf("%c\n", character);
    printf("%.3f\n", floating);
    printf("%.9lf\n", double_floating);

    return 0;
}

