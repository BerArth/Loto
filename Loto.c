#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double init_rand(){
    return (double)rand() / RAND_MAX;
}

int generate_number(int a, int b){
    return (int)(a + ( b - a) * init_rand());
}

void p_number(){
    int res;
    //numéro
    printf("------Numeros------\n");
    printf("[");
    for(int i = 0; i < 4; i++){
        res = generate_number(1, 50);
        printf(" %d -", res);
    }
    res = generate_number(1, 50);
    printf(" %d]\n", res);

    //etoiles
    printf("------Etoiles------\n");
    res = generate_number(1, 12);
    int a = generate_number(1,12);
    printf("[%d - %d]\n", res, a);
}

int main()
{
    srand(time(NULL));

    p_number();

    return 0;
}
