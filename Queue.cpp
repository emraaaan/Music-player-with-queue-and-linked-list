#include "Queue.h"

Queue::Queue() {}

Queue::~Queue() {}

void Queue::enqueue(const Song& song) {
    list.addSong(song);
}

void Queue::dequeue() {
    list.removeSong();
}

Song Queue::front() const {
    return list.getFirstSong();
}

bool Queue::isEmpty() const {
    return list.isEmpty();
}
