#include <stdio.h>

int main() {
    int amount;

    // Kullanıcıdan miktarı al
    printf("Miktarı girin: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Geçersiz miktar. Lütfen pozitif bir tamsayı girin.\n");
        return 1;
    }

    // 2000 TL banknotları
    int count_2000 = amount / 2000;
    amount = amount % 2000;

    // 500 TL banknotları
    int count_500 = amount / 500;
    amount = amount % 500;

    // 200 TL banknotları
    int count_200 = amount / 200;
    amount = amount % 200;

    // 100 TL banknotları
    int count_100 = amount / 100;
    amount = amount % 100;

    // 50 TL banknotları
    int count_50 = amount / 50;
    amount = amount % 50;

    // 20 TL banknotları
    int count_20 = amount / 20;
    amount = amount % 20;

    // 10 TL banknotları
    int count_10 = amount / 10;
    amount = amount % 10;

    // 5 TL banknotları
    int count_5 = amount / 5;
    amount = amount % 5;

    // 2 TL bozuklukları
    int count_2 = amount / 2;
    amount = amount % 2;

    // 1 TL bozuklukları
    int count_1 = amount;

    // Sonuçları yazdır
    printf("Banknot/Metal \t Miktar\n");
    printf("2000 \t\t %d\n", count_2000);
    printf("500 \t\t %d\n", count_500);
    printf("200 \t\t %d\n", count_200);
    printf("100 \t\t %d\n", count_100);
    printf("50 \t\t %d\n", count_50);
    printf("20 \t\t %d\n", count_20);
    printf("10 \t\t %d\n", count_10);
    printf("5 \t\t %d\n", count_5);
    printf("2 \t\t %d\n", count_2);
    printf("1 \t\t %d\n", count_1);

    return 0;
}

