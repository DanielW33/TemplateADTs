#include <iostream>
#include "ADTs/Stack.h"
#include "ADTs/Queue.h"
#include "ADTs/List.h"

using namespace std;

int main() {

    int i = 12, j = 23, k = 34, l = 45, m = 56;
    List<int> list;
    list.append(i);
    list.append(j);
    list.append(k);
    list.printList();

    list.insert(1, k);
    list.printList();
    list.insert(0, j);
    list.printList();
    list.insert(0, l);
    list.printList();
    list.insert(100, m);
    list.printList();

    list.remove(1);
    list.printList();

    list.SelectRemove(j);
    list.printList();

    Queue<int> queue;

    queue.push(k);
    queue.push(i);
    queue.push(j);

    queue.printQueue();

    cout << "Popping: " << queue.pop() << endl;
    queue.printQueue();
    cout <<  "Popping: " << queue.pop() << endl;
    cout <<  "Popping: " << queue.pop() << endl;
    cout <<  "Popping: " << queue.pop() << endl;
    queue.printQueue();
    queue.push(k);
    queue.push(i);
    queue.push(j);
    queue.printQueue();

      Stack<int> stack;
      cout << "Popping: " << stack.pop() << endl;
      stack.push(i);
      stack.push(j);
      stack.push(k);


      stack.printStack();

      cout << "Popping: " << stack.pop() << endl;
      stack.printStack();

      cout << "Popping: "<< stack.pop() << endl;
      stack.push(100002);
      stack.printStack();





    return 0;
}
