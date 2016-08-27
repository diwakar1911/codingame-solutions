#include <iostream>
#include <cstdlib>

using namespace std;

// Doing addition
template <class summable>
summable sum ( const summable data[], int size, summable asum=0){
    
    for(int i =0; i < size; i++){
        asum += data[i];
    }
    return asum;
}

//Doing subtraction
template <class subable>
subable sub (const subable data[], int size, subable asum = 100){
    
    for(int i=0;i<size;++i){
        asum-= data[i];
    }
    return asum;
}

//Printing elements in an array
template <class E>
E showElements (const E data[], int size){
    
    cout << "\nPrinting Elements in your data" << endl << endl;
    for(int i=0; i<size; ++i){
        cout << "Element " << i << " : " << static_cast<E>(data[i]) << endl;
    }
    cout << endl << endl << endl;
}

//copying an array to another array
template <class t1, class t2>
void copy(const t1 source[], t2 destination[], int size){
    for(int i=0; i<size; i++){
        destination[i] = static_cast<t1>(source[i]);
    }
}

//main function
int main(void){
    
    int data [] = {10, 12, 13, 14, 15, 16, 17, 18};
    cout << "The result for summable : " << sum(data, 8) << endl;
    cout << "The result subable : " << sub(data, 8) << endl;
    
    double ddata [] = {10.0, 12.0, 13.0, 14.4, 15.0, 16.0, 17.0, 18.0};
    cout << "The result for summable : " << sum(ddata, 8, 190.6) << endl;
    cout << "The result subable : " << sub(ddata, 8, 300.4) << endl;
    
    showElements(data, 8);
    showElements(ddata, 8);
    

    return 0;
}
