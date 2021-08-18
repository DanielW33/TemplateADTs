#ifndef TEMPLATEADTS_STACK_H
#define TEMPLATEADTS_STACK_H
/*
 * Template based stack implementation
 * an implementation such as this makes your code very modular and usable throughout many projects.
 * A Stack always follows a last in first out (lifo) methodology
 *
 */
#include <cstring>
#include <iostream>
using namespace std;

template<class T>
class Stack{

private:
    int length;
    T* Arr;
public:

    Stack(){
        length = 0;
        Arr = new T[0];
    }

    void push(T obj){
        T* Temp = new T[(length + 1)];
        Temp = Arr;

        delete[] Arr;
        length++;

        Arr = Temp;
        Arr[length - 1] = obj;
    }

    T pop(){
        if(length > 0){
            T obj = Arr[length - 1];
            T* Temp = new T[length - 1];

            length--;
            memcpy(Temp, Arr, sizeof(T) * length);


            delete[] Arr;

            Arr = Temp;

            return obj;
        }
        return -1;
    }

    void printStack(){
        cout << "-- PrintStack --" << endl;
        for(int i = length - 1; i >= 0; i--){
            cout << Arr[i] << endl;
        }
    }

};



#endif //TEMPLATEADTS_STACK_H
