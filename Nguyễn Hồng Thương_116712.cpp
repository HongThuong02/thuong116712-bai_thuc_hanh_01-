//Bài 1:
//1:
#include <stdio.h>

int main() {
    int n, i;
    float a[100];
    float *p;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    p = a;
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", p + i);
    }
    printf("\nMang vua nhap la: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(p + i));
    }

    return 0;
}

//2:
#include <stdio.h>

int main() {
    int m, n, i, j;
    float a[100][100];
    float *p;

    printf("Nhap so dong m: ");
    scanf("%d", &m);

    printf("Nhap so cot n: ");
    scanf("%d", &n);

    p = &a[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", p + i * n + j);
        }
    }
    printf("\nMang 2 chieu vua nhap:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2f\t", *(p + i * n + j));
        }
        printf("\n");
    }

    return 0;
}

//3:
#include <stdio.h>

struct SinhVien {
    char hoTen[100];
    char ma[20];
    float diem1, diem2, diem3;
};

int main() {
    struct SinhVien ds[100];
    struct SinhVien *p;
    int n, i;

    p = ds;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i + 1);

        printf("Ho ten: ");
        scanf(" %99[^\n]", (p + i)->hoTen);

        printf("Ma sinh vien: ");
        scanf("%19s", (p + i)->ma);

        printf("Diem 1: ");
        scanf("%f", &(p + i)->diem1);

        printf("Diem 2: ");
        scanf("%f", &(p + i)->diem2);

        printf("Diem 3: ");
        scanf("%f", &(p + i)->diem3);
    }
    printf("\n===== DANH SACH SINH VIEN =====\n");

    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);

        printf("Ho ten: %s\n", (p + i)->hoTen);
        printf("Ma sinh vien: %s\n", (p + i)->ma);
        printf("Diem 1: %.2f\n", (p + i)->diem1);
        printf("Diem 2: %.2f\n", (p + i)->diem2);
        printf("Diem 3: %.2f\n", (p + i)->diem3);
    }

    return 0;
}

//4:
#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char hoTen[100];
    char ma[20];
    float diem1, diem2, diem3;
};

struct Node {
    struct SinhVien data;
    struct Node *next;
};

typedef struct Node Node;

int main() {
    Node *head;
    head = NULL;

    return 0;
}

//Bài 2:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    int **p;
    printf("Nhap so dong m: ");
    scanf("%d", &m);

    printf("Nhap so cot n: ");
    scanf("%d", &n);
    p = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++) {
        p[i] = (int *)malloc(n * sizeof(int));
    }
    printf("\nNhap cac phan tu ma tran:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("p[%d][%d] = ", i, j);
            scanf("%d", &p[i][j]);
        }
    }
    printf("\nMa tran vua nhap la:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++) {
        free(p[i]);
    }

    free(p);

    return 0;
}