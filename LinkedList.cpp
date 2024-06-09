#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList() {
    while (!isEmpty()) {
        removeSong();
    }
}

void LinkedList::addSong(const Song& song) {
    Node* newNode = new Node(song);
    if (isEmpty()) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::removeSong() {
    if (!isEmpty()) {
        Node* temp = head;
        head = head->next;
        if (head == nullptr) {
            tail = nullptr;
        }
        delete temp;
    }
}

Song LinkedList::getFirstSong() const {
    if (!isEmpty()) {
        return head->song;
    }
    return Song("", "", "");
}

Song LinkedList::getLastSong() const {
    if (!isEmpty()) {
        return tail->song;
    }
    return Song("", "", "");
}

void LinkedList::removeLastSong() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
    }
}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}
