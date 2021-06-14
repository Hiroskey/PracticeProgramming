#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
    int i, loop;
    double width, x, pai=0.0;
    
    loop = atoi(argv[1]);
    width = 1.0 / loop;
    for(i=0; i<loop; i++){
        x = (i + 0.5) * width;
        pai += 4.0 / (1.0 + x * x);
    }
    pai = pai / loop;
    printf("PAI = %f\n",pai);
    return 0;
}