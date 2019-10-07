#include <stdio.h>

//ordenação questão

void swap(int x, int y){
  int aux;
  aux = x;
  x = y;
  y = aux;
}

void selectionSort(int v[], int tam){
 int i, j;
 for(i=0; i<=tam-2; i++){
   int min = i;
   for(j=i+1; j<tam-1; j++){
     if(v[j]<v[min]){
       min = j;
     }
   }
   swap(v[i], v[min]);
 } 
}

int main(void) {
  int v[10000], i;
  int tam, coupon;
  int qntC;

  scanf("%d %d", &tam, &qntC);
  
  for(i=0; i<qntC; i++){
    scanf("%d", &coupon);
  }

  for(i=0; i<tam; i++){
    scanf("%d", &v[i]);
  }
  //recebeu os valores
  selectionSort(v,tam);
  //ordenou
  int resp = v[tam-coupon];
  //a resposta é o preço do chocolate na posição tam-desc
  printf("%d", resp);
  return 0;
}
