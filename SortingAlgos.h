#pragma once
#include <string>
#include <iostream>
inline namespace sort {
    // Defining a node this will be used throughout it
    class Node
    {
        public:
        Node(int data, Node* next)
        {
            m_next = next;
            m_value  = data;
        }
        int m_value;
        Node* m_next;
    };


    class LinkedList{
        public:
        LinkedList()
        {
            m_head = nullptr;

        }
        void AddToFront(int value){
            Node* NewNode = new Node(value, m_head);
            m_head = NewNode;

        };

        void AddToBack(int value){
            Node* PreviousLastNode = m_head;
            while (PreviousLastNode != nullptr ){
               PreviousLastNode = PreviousLastNode->m_next ;
            }
            Node* LastNode = new Node(value, nullptr);
            PreviousLastNode->m_next = LastNode;
        }

        void AddNode(int value){
            if(m_head == nullptr){
                AddToFront(value);
            }
            else if(value < m_head->m_value){
            AddToBack(value);
            }
            else{
                Node*  tempnode = m_head;
                while (tempnode->m_next != nullptr) {
                    if(value> tempnode->m_value && value < tempnode->m_next->m_value){
                        break;
                    }
                    tempnode = tempnode->m_next;
                }
                Node* NewNode = new Node(value, tempnode->m_next);
                tempnode->m_next = NewNode;  
            }
        }
        int get(int index){
            Node* tempnode = m_head;
            for(int i = 0; i < index; i++){
                tempnode = tempnode->m_next;
            };
            return tempnode->m_value;
        };

        void PrintList(){
            Node* tempnode = m_head;
            std::cout<< "value | nextnode" << std::endl;
            while(tempnode->m_next != nullptr) {
                std::cout << tempnode->m_value << "  " << tempnode->m_next << std::endl;
                tempnode = tempnode->m_next;
            }
        }
    

        private:
        Node* m_head;

    };
    inline LinkedList LinkedList;
};