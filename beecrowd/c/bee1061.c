#include <stdio.h>

int main() {

    int d1, h1, m1, s1, d2, h2, m2, s2;
    
    scanf("Dia %d", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    d1 = d2 - d1;
    h1 = h2 - h1;
    m1 = m2 - m1;
    s1 = s2 - s1;

    if (s1 < 0) {
        s1 += 60;
        m1--;
    }
    if (m1 < 0) {
        m1 += 60;
        h1--;
    }
    if (h1 < 0) {
        h1 += 24;
        d1--;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d1, h1, m1, s1);

    return 0;
}