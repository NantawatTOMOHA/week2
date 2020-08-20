#include<stdio.h>
int a[4] = { 0,0,0,0 };
void header();
void center();
void footer();

int main() {
    printf("Enter number : ");
    scanf_s("%d",&a[0]);
    header();
    center();
    footer(); 
    return 0;
}
void header() {
    while (a[0] > a[1]) {
        printf("*");
        a[1] = a[1] + 1;
    }
}
void center() {
    a[2] = a[0] - 2;
    for (int i = 0; i < a[2]; i++)
    {
        printf("\n");
        printf("*");
        for (int x = 0; x < a[2]; x++) {
            printf(" ");
        }
        printf("*");

    }
}
void footer() {
    printf("\n");
    while (a[0] > a[3]) {
        printf("*");
        a[3] = a[3] + 1;

    }
}
