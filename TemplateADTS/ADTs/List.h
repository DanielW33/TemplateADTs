/*
 * Template based List implementation
 * A list implementation such as this makes your code very modular.
 * list data type follows the no specific methodology, and unlike a set there can be duplicates.
 */

#ifndef TEMPLATEADTS_LIST_H
#define TEMPLATEADTS_LIST_H
#include <iostream>

template <class T>
class List{
private:
    int length;
    struct link{
        T obj;
        link* next;
    };
    link* head;

public:
    List(){
        head = nullptr;
        length = 0;
    }
    void append(T obj){
        link* t = new link;
        if(head == nullptr){
            head = t;
        }
        link* temp = head;
        if(temp == nullptr){
            temp = t;
            head = t;
        }
        else{
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = t;
        }

        t->next = nullptr;
        t->obj = obj;
        length++;
    }

    void insert(int index, T obj){
        if(index < length){
            length++;
            link* t = new link;
            link* temp = head;
            if(index == 0){
                head = t;
                t->next = temp;
                t->obj = obj;
            }
            else {
                for (int i = 0; i < index - 1; i++) {
                    temp = temp->next;
                }
                t->obj = obj;
                t->next = temp->next;
                temp->next = t;
            }
        }
        else{
            append(obj);
        }

    }
    T remove(int index){
        if(index < length){
            length--;
            if(index == 0){
                head = head->next;
            }
            link* temp = head;
            link* temp2 = nullptr;
            for(int i = 0; i < index; i++){
                temp2 = temp;
                temp = temp->next;

            }
            temp2->next = temp->next;

            T obj = temp->obj;
            delete temp;

            return obj;
        }
    }
    T SelectRemove(T obj){
        link* temp = head;
        link* t = head;
        while(temp->next != nullptr){
            length--;
            if(temp->obj == obj){
                if(temp == head){
                    head = head->next;
                }
                else{
                    t->next = temp->next;
                }
                return obj;
            }
            t = temp;
            temp = temp->next;


        }

    }
    void printList(){
        link* Temp = head;
        std::cout << "-- Print List --" << std::endl;
        while(Temp != nullptr){
            std::cout << Temp->obj << std::endl;
            Temp = Temp->next;
        }
    }

};
#endif //TEMPLATEADTS_LIST_H
