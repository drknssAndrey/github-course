#include <stdio.h>

int main(){
    char ini[20], fim[20];
    int diai, diaf;
    int horai, mini, segi;
    int horaf, minf, segf;
    scanf("%s", ini); scanf("%d", &diai);
    scanf("%d : %d : %d", &horai, &mini, &segi);
    scanf("%s", fim); scanf("%d", &diaf);
    scanf("%d : %d : %d", &horaf, &minf, &segf);

    int q1, q2;
    q1 = segi + mini*60 + horai*60*60 + diai*60*60*24;
    q2 = segf + minf*60 + horaf*60*60 + diaf*60*60*24;
    int tempo = q2 - q1;
    printf("%d dia(s)\n", tempo/(60*60*24)); tempo = tempo%(60*60*24);
    printf("%d hora(s)\n", tempo/(60*60)); tempo = tempo%(60*60);
    printf("%d minuto(s)\n", tempo/(60)); tempo = tempo%(60);
    printf("%d segundo(s)\n", tempo);
    return 0;
}
