#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0)
            printf(c == 0 ? "Phuong trinh vo so nghiem\n" : "Phuong trinh vo nghiem\n");
        else
            printf("Nghiem duy nhat: x = %.2f\n", -c / b);
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0)
            printf("Phuong trinh vo nghiem\n");
        else if (delta == 0)
            printf("Phuong trinh co nghiem kep: x = %.2f\n", -b / (2 * a));
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
