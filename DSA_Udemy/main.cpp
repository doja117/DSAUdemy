//
//  main.cpp
//  DSA_Udemy
//
//  Created by Saurabh Ojha on 12/03/25.
//



#include "funcs.h"
#include <iostream>

class Node{
public:
    int data;
    Node* next;
    
    Node(int data=0,Node* next=nullptr){
        this->data=data;
        this->next=next;
    }
};

Node* returnLinkedList(){
    std::cout<<"Enter number of Linked List\n";
    int n;std::cin>>n;
    auto f=new Node(0);
    while (n){
        int x;std::cin>>x;
        f->next=new Node(x);
        f=f->next;
        n-=1;
    }
    return f->next;
}

int main(int argc, const char * argv[]) {
    vector<int>f={-2,0,1,1,2};
    auto x=threeSum(f, 0);
    for (auto y:x){
        for (auto z:y){
            std::cout<<z<<"\t";
        }   std::cout<<"\n";
    }
    cout<<"Func Executed";
    
    return 0;
}
