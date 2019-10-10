//
// Created by chuse on 10/10/2019.
//

#ifndef PC2_HEAPSORT_H
#define PC2_HEAPSORT_H

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void heapify(vector <T> v, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && v[l] > v[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && v[r] > v[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(v[i], v[largest]);

        // Recursively heapify the affected sub-tree
        heapify(v, n, largest);
    }
}

// main function to do heap sort
template <typename T>
void heapSort(vector <T> v)
{
    // Build heap (rearrange array)
    int n = v.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(v, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(v[0], v[i]);

        // call max heapify on the reduced heap
        heapify(v, i, 0);
    }
}


#endif //PC2_HEAPSORT_H
