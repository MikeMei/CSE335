#ifndef myminstack_h
#define myminstack_h

#include "mystack.h"

//#include "mystack.h"
//using namespace std;


//template <typename T>
//
//class minstack 
//{
//private:
//    T class_stack[];
//    T min_stack[];
//public:
////    minstack()
////    {
////        
////    }
//    void push(T to_push)
//    {
//        class_stack.push(to_push);
//        if(class_stack.empty() || to_push <= min_stack.top())
//        {
//            min_stack.push(to_push);
//        }
//    }
//    
//    void pop()
//    {
//        if(class_stack.empty)
//        {
//            cout << "Stack is empty. Underflow" << endl;
//        }
//        else
//        {
//            if(class_stack.top() == min_stack.top())
//            {
//                min_stack.pop();
//            }
//            class_stack.pop();
//        }
//    }
//    
//    T getMin()
//    {
//        return min_stack.top();
//    }


template <typename T>
class minstack: public mystack<T>
{
private:
    mystack<int> class_stack;
    mystack<int> min_stack;
//    int stack_top_marker;
//    int stack_total_capacity;
    
public:
    minstack()
    {
//        stack_total_capacity = 10000;
//        stack_top_marker = -1;
        class_stack = mystack<int>();
        min_stack = mystack<int>();
    }
    
    
    void push(int to_push)
    {
        
//        if (stack_top_marker == stack_total_capacity)
//        {
//            throw std::runtime_error("Array is full. Overflow");
////          cout << "Array is full. Overflow" << endl;
//        }        
//        else
//        {
//            class_stack.push(to_push);
//            
//            if(min_stack.empty() || to_push < min_stack.gettop())
//            {
//                min_stack.push(to_push);
//            }
//            
//            else
//            {
//                min_stack.push(min_stack.gettop());
//            }
//        }
        
        if(class_stack.full())
        {
            throw std::runtime_error("Array is full. Overflow");
        }
        
        if (class_stack.empty())
        {
//            stack_top_marker++;
            class_stack.push(to_push);
            min_stack.push(to_push);
        }
        
        else
        {
//            stack_top_marker++;
            class_stack.push(to_push);
            if(to_push <= min_stack.gettop())
            {
                min_stack.push(to_push);
            }
            else
            {
                min_stack.push(min_stack.gettop());
            }
        }
    }
    
    void pop()
    {
        if(class_stack.empty())
        {
            cout << "Stack is empty. Underflow" << endl;
        }
        else
        {
            class_stack.pop();
            min_stack.pop();
//            stack_top_marker--;
        }
    }
    
    int getMin()
    {
        return min_stack.gettop();
    }
    
    int gettop()
    {   
        int debugtop = class_stack.gettop();
        return class_stack.gettop();
    }
};

# endif /* my min stack*/