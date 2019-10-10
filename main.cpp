#include "Contenedor.h"
#include "MaxHeap.h"
#include "HeapSort.h"
int main(){

   vector <int> Contenedor = Lectura();
   print(Contenedor);
   heapSort(Contenedor);
   get_max(Contenedor);
   insert(Contenedor, 500);
   print(Contenedor);
   get_max(Contenedor);

    return 0;
}

