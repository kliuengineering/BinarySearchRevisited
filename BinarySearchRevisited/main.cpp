//
//  main.cpp
//  BinarySearchRevisited
//
//  Created by Kevin Liu on 2024-02-18.
//

#include <iostream>
#include <vector>
#include <iterator>

template <typename T>
int BinarySearch(std::vector<T> &array, const T &key)
{
    int index = -1;
    int low = 0;
    int high = array.size()-1;
    int mid;
    
    while( low <= high && index < 0)
    {
        mid = (low + high) / 2;
        
        if(key < array[mid])
        {
            high = mid - 1;
        }
        else if (key > array[mid])
        {
            low = mid + 1;
        }
        else
            index = mid;
    }
    return index;
}


int main(int argc, const char * argv[]) 
{
    std::vector<int> array = {11, 22, 33, 44, 55, 66, 77, 88, 99, 201, 202, 203, 204, 205};
    int find = 205;
    
    std::cout << find << " is at index " << BinarySearch(array, find);
    
    puts("");
    return 0;
}
