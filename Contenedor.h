//
// Created by chuse on 10/10/2019.
//


#ifndef PC2_CONTENEDOR_H
#define PC2_CONTENEDOR_H

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


vector <int> Lectura() {
    ifstream infile("data.txt");

    if (!infile.is_open())
        cout << "vacio" << endl;

    vector<int> contenedor;
    int numero;
    while (infile >> numero) {
        contenedor.push_back(numero);
    }
    return contenedor;
}



template<class T>
void print(vector<T> t) {
    for (auto i = t.begin(); i != t.end(); ++i)
        cout << *i << " ";
    cout << endl;

}




#endif //PC2_CONTENEDOR_H
