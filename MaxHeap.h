//
// Created by chuse on 10/10/2019.
//

#ifndef PC2_MAXHEAP_H
#define PC2_MAXHEAP_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
T get_max(vector <T> v){
    make_heap(v.begin(), v.end());
    cout << "Max Heap: " << v.front() << endl;

}


#endif //PC2_MAXHEAP_H
