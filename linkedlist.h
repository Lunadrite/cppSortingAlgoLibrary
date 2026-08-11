#pragma once  // Prevents double-inclusion errors
#include "./node.h"

inline Node* createSampleList() {
    Node* child = new Node{3, nullptr};

    Node* head = new Node{4, child};

    return head;
}