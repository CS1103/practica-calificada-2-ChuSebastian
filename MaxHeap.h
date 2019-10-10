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

template <typename T>
T insert(vector <T> v, T num){
    v.push_back(num);
}


#endif //PC2_MAXHEAP_H
