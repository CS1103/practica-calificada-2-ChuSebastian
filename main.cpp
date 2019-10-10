#include "Contenedor.h"
#include "MaxHeap.h"
#include "HeapSort.h"
int main(){

   vector <int> Contenedor = Lectura();
   print(Contenedor);
   heapSort(Contenedor);
   print(Contenedor);
   get_max(Contenedor);


    return 0;
}

