#include <stdio.h>

int solution(int A[], int N) {
    int sayac[N + 1];

    // Her eleman sıfıra ayarlanmış bir sayac dizisi oluştur
    for (int i = 0; i <= N; i++) {
        sayac[i] = 0;
    }

    // Pozitif tamsayıları dizide say
    for (int i = 0; i < N; i++) {
        if (A[i] > 0 && A[i] <= N) {
            sayac[A[i]]++;
        }
    }

    // Eksik pozitif tamsayıyı bul
    for (int i = 1; i <= N; i++) {
        if (sayac[i] == 0) {
            return i;
        }
    }

    // Tüm sayılar mevcutsa N+1 döndür
    return N + 1;
}
int main() {
    int A[] = {1,2,3};
    int N = sizeof(A) / sizeof(A[0]);

    int result = solution(A, N);
    printf("Smallest missing positive integer: %d\n", result);

    return 0;
}