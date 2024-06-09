#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Song.h"

class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void addSong(const Song& song);
    void removeSong();
    Song getFirstSong() const;
    Song getLastSong() const;
    void removeLastSong();
    bool isEmpty() const;

private:
    struct Node {
        Song song;
        Node* next;

        Node(const Song& song) : song(song), next(nullptr) {}
    };

    Node* head;
    Node* tail; // Pointer to the last node
};

#endif // LINKEDLIST_H
