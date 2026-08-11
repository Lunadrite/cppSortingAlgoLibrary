#include <iostream>
// Algo imports:
#include "./SortingAlgos.h"

int main(){
    sort::LinkedList.AddNode(10);
    std::cout<<"Node Added Successfully" <<std::endl;
    sort::LinkedList.AddNode(20);
    sort::LinkedList.AddNode(20);
    sort::LinkedList.AddNode(20);
    std::cout<<"Nodes too Back Added Successfully" <<std::endl;
    std::cout<<sort::LinkedList.get(1) <<std::endl;
    
    sort::LinkedList.PrintList();



    return 0;
}