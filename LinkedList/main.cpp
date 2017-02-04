//
//  main.cpp
//  LinkedList
//
//  Created by Rodrigo Pessoa on 2017-02-02.
//  Copyright © 2017 Rpessoa. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node *next;
};

//add initial head to the linkedlist, to be used only for the head
void addHead(int n, Node *head) {
    head->data = n;
    head->next = nullptr;
};

//add additional nodes to the linkedlist
void addNode(int n, Node *body) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = nullptr;
    
//    connects the new created node to the previous existing node
    Node *cur = body;
    while(cur) {
        if(cur->next == nullptr) {
            cur->next = newNode;
            return;
        }
        cur = cur->next;
    }
};

//display a list of all existing nodes
void display(Node *body) {
    Node * list = body;
    while(list) {
        cout << list->data << " ";
        list = list->next;
    }
    cout<<endl;
};

int main(int argc, const char * argv[]) {
    
    Node *link = new Node;
    
    addHead(5, link);
    
    addNode(10, link);
    addNode(15, link);
    addNode(20, link);
    addNode(30, link);
    addNode(35, link);
    addNode(40, link);
    
    display(link);
    
    return 0;
}
