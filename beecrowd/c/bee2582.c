#include <stdio.h>

int main() {
    int c, inp1 = 0, inp2 = 0;
    char songs[11][15] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS",
    };

    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        scanf("%d %d", &inp1, &inp2);
        printf("%s\n", songs[inp1+inp2]);
    }

    return 0;
}
