#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main() {
    int n = input_array_size();
    int array[n];
    input_array(n, array);
    int sum = sum_composite_numbers(n, array);
    output(sum);

    return 0;
}
int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n]) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int isComposite = 0;
        for (int j = 2; j < a[i]; j++) {
            if (a[i] % j == 0) {
                isComposite = 1;
                break;
            }
        }
        if (isComposite && a[i] > 1) {
            sum += a[i];
        }
    }
    return sum;
}
void output(int sum) {
    printf("Sum of composite numbers: %d\n", sum);
}
