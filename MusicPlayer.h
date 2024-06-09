#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include "Queue.h"
#include <stack>
using namespace std;

class MusicPlayer {
public:
    MusicPlayer();
    void addSongToQueue(const Song& song);
    void playNextSong();
    void playPreviousSong();


private:
    Queue queue;
    stack<Song> history; // Stack to store the history of played songs
    Song currentSong;         // To keep track of the currently playing song
};

#endif // MUSICPLAYER_H
