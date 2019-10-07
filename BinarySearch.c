#include <stdio.h>


int binarySearch(int v[],int x, int tam){
  int l = 0;
  int r = tam-1;
  int m, achei=0;
  while(l<=r){
    m = (l+r)/2;
    if (x == v[m]){
      printf("%d", m);
      achei = 1;
      break;
    }else if(x < v[m]){
      r = m -1;
    }else{
      l = m +1;
    }
  }
  if(achei==0){
    printf("-1");
  }
  return -1;
}

int main(void) {
  int v[100000], x, tam, a;
  int i;

  scanf("%d %d", &tam, &a);

  for(i=0; i<tam; i++){
    scanf("%d", &v[i]);
  }

  for(i=0; i<a; i++){
    scanf("%d", &x);
    binarySearch(v, x, tam);
  }
  

  return 0;
}
