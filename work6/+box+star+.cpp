#include<stdio.h>
int a[4] = { 0,0,0,0 };
void header();
void center();
void footer();

int main() {
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
    int b = a[0] - 2;
    for (int i = 0; i < b; i++)
    {
        printf("\n");
        printf("*");
        for (int x = 0; x < b; x++) {
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
