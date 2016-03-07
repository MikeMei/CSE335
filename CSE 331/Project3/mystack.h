#ifndef mystack_h
#define mystack_h

#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>

class mystack
{
public:
    T* class_stack;
    int stack_top_marker = -1;
    int stack_total_capacity = 10000;
    mystack()
    {
        class_stack = new T[stack_total_capacity];
//        stack_top_marker = -1;
//        stack_total_capacity = size;
    }
    
    void push(T to_push);
    void pop();
    void display() const;
    bool empty() const;
    bool full() const;
    T gettop() const;
};

template <typename T>
bool mystack<T>::empty() const
{
    return (stack_top_marker == -1);
}

template <typename T>
bool mystack<T>::full() const
{
    return ((stack_top_marker + 1) == stack_total_capacity);
}

template <typename T>
void mystack<T>::push(T to_push)
{
    if (full())
    {
        throw std::runtime_error("Array is full. Overflow");
//          cout << "Array is full. Overflow" << endl;
    }
    else
    {
        stack_top_marker++;
        class_stack[stack_top_marker] = to_push;
    }
 }

template <typename T>
void mystack<T>::pop()
{
    if(empty())
    {
        throw std::runtime_error("Array is already empty. Underflow");
//          cout << "Stack is empty. Underflow" << endl;
    }
    else
    {
//        delete class_stack[stack_top_marker];
        stack_top_marker--;
    }
}

template <typename T>
void mystack<T>::display() const
{
    cout << "{ ";
    for(int i = 0; i <= stack_top_marker; i++)
    {
        cout << class_stack[i] << ", ";
    }
    cout << "}";
}

template <typename T>
T mystack<T>::gettop() const
{
    int debug_top_mystack = class_stack[stack_top_marker];
    return class_stack[stack_top_marker];
}



//template <typename T>
//
//class mystack
//{
//private:
//    T class_stack[];
//    int stack_size;
//    int stack_total_capacity;
//public:
//    mystack()
//    {
//        
//    }
//    mystack(T stack[], int size)
//    {
//        stack_total_capacity = sizeof(stack)/sizeof(T);
//        class_stack = new T[stack_total_capacity];
//        for(T item: class_stack)
//        {
//            stack_size++;
//        }
//    }
//    ~mystack()
//    {
////        delete class_stack;
//    }
//    
//    void push(T to_push);
//    void pop(T to_pop);
//    void display() const;
//    bool empty() const;
//    T gettop() const;
//};
//
//template <typename T>
//void mystack<T>::push(T to_push)
//{
//    if (stack_size == sizeof(class_stack)/sizeof(T))
//    {
//        throw std::runtime_error("Array is full. Overflow");
////          cout << "Array is full. Overflow" << endl;
//    }
//    else
//    {
//        class_stack[stack_size] = to_push;
//        stack_size++;
//    }
// }
//
//template <typename T>
//void mystack<T>::pop(T to_pop)
//{
//    if(stack_size == 0)
//    {
//        throw std::runtime_error("Array is already empty. Underflow");
////          cout << "Stack is empty. Underflow" << endl;
//    }
//    else
//    {
//        delete class_stack[stack_size - 1];
//        stack_size--;
//    }
//}
//
//template <typename T>
//void mystack<T>::display() const
//{
//    cout << "{ ";
//    for(T element: class_stack)
//    {
//        cout << element << ", ";
//    }
//    cout << "}";
//}
//
//template <typename T>
//bool mystack<T>::empty() const
//{
//    return !stack_size;
//}
//
//template <typename T>
//T mystack<T>::gettop() const
//{
//    return class_stack[0];
//}

//template <typename T>
//
//class mystack
//{
//private:
//    T class_stack[];
//public:
////    mystack()
////    {
////        //empty constructor
////    }
//    
//    void push(T to_push)
//    {
//        
//        if (class_stack.size() == sizeof(class_stack))
//        {
//            throw std::runtime_error("Array is full. Overflow");
////            cout << "Array is full. Overflow" << endl;
//        }
//        
//        for (int i = class_stack.size() - 1; i >= 0; --i)
//        {
//            swap(class_stack[i], class_stack[i+1]);
//            class_stack[0] = to_push;
//        }
//    }
//    
//    void pop(T to_pop)
//    {
//        if(class_stack.size() == 0)
//        {
//            throw std::runtime_error("Array is already empty. Underflow");
////            cout << "Stack is empty. Underflow" << endl;
//        }
//        else
//        {
//            for(int i = 0; i < class_stack.size(); i++)
//            {
//                swap(class_stack[i], class_stack[i+1]);
//            }
//        }
//    }
//    
//    void display() const
//    {
//        cout << "{ ";
//        for(T element: class_stack)
//        {
//            cout << element << ", ";
//        }
//        cout << "}";
//    }
//    
//    bool empty() const
//    {
//        return class_stack.empty();
//    }
//    
//    T gettop() const
//    {
//       return class_stack.front();
//    }
//};




#endif /* mystack_h */