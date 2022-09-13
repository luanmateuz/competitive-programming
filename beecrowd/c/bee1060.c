#include <stdio.h>                                                                                    
                                                                                                      
int main() {                                                                                          
    int i, k = 0;                                                                                     
    double j = 0;                                                                                     
                                                                                                      
    for (i = 0; i < 6; i++) {                                                                         
        scanf("%lf", &j);                                                                             
        if (j >= 0) k++;                                                                              
    }                                                                                                 
    printf("%d valores positivos\n", k);                                                              
    return 0;                                                                                         
}    