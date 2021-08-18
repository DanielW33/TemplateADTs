/*
 * Template based Queue implementation
 * an template implementation such as this make your code very modular and usable throughout many projects.
 * Queues follow a first in first out (Fifo) methodology.
 */
#ifndef TEMPLATEADTS_QUEUE_H
#define TEMPLATEADTS_QUEUE_H

template <class T>
class Queue {
    private:
        int length;
        struct link{
            T obj;
            link* next;
        };
        link* head;

    public:
        Queue(){
           length = 0;
           head = nullptr;
        }

        void push(T obj){
            length++;
            link* temp = new link;
            if(head == nullptr){
                head = temp;
            }

            link* trav = head;
            while(trav->next != nullptr){
                trav = trav->next;
            }
            trav->next = temp;
            temp->obj = obj;
            temp->next = nullptr;
        }

        T pop(){
            length--;
            if(length < 0){
                return -1;
            }
            link* obj = head;
            head = obj->next;
            T temp = obj->obj;
            delete obj;
            return temp;
        }

        void printQueue(){
            link* obj = head;
            cout << "-- Print Queue --" << endl;
            while(obj != nullptr){
                cout << obj->obj << endl;
                obj = obj->next;
            }
        }
};


#endif //TEMPLATEADTS_QUEUE_H
