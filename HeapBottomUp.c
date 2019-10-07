#include<stdlib.h>
#include<stdio.h>

void HeapBottomUp(int* H, int tam){
    int i, med;
    if (tam%2 == 0){
      med = tam/2;
    }else{
      med = tam/2 + 1;
    }
    for(i=med;i>=1; i--){
        int k = i;
        int v = H[k];
        int heap = 0;
        while (heap==0 && 2*k <= tam){
            int j = 2*k;
            if(j<tam){
                if(H[j] < H[j+1]){
                    j+=1;
                }
            }
            if(v>=H[j]){
                heap = 1;
                printf("%d\n", heap);
            }else{
                H[k] = H[j];
                k = j;
            }
        }
        H[k] = v;
    }
}


int main(){

    int i, tam;
    scanf("%d", &tam);

    int v[tam];

    for(i=0; i<tam; i++){
      scanf("%d", &v[i+1]);
    }

    HeapBottomUp(v, tam);

    for(i=0; i<tam; i++){
        printf("%d ", v[i+1]);
    }

    return 0;
}
