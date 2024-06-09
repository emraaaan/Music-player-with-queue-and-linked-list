#include "MusicPlayer.h"
#include <iostream>
using namespace std;

MusicPlayer::MusicPlayer() : currentSong("", "", "") {} // Initialize currentSong with an empty Song

void MusicPlayer::addSongToQueue(const Song& song) {
    queue.enqueue(song);
    cout << "Added to queue: " << song.getTitle() << " by " << song.getArtist() << " from the album " << song.getAlbum() << endl;
}

void MusicPlayer::playNextSong() {
    if (!queue.isEmpty()) {
        if (!currentSong.getTitle().empty()) {
            history.push(currentSong);
        }
        currentSong = queue.front();
        queue.dequeue();
        cout << "Now playing: " << currentSong.getTitle() << " by " << currentSong.getArtist() << " from the album " << currentSong.getAlbum() << endl;
    } else {
        cout << "No songs in the queue." << endl;
    }
}

void MusicPlayer::playPreviousSong() {
    if (!history.empty()) {
        queue.enqueue(currentSong);
        currentSong = history.top();
        history.pop();
        cout << "Now playing: " << currentSong.getTitle() << " by " << currentSong.getArtist() << " from the album " << currentSong.getAlbum() << endl;
    } else {
        cout << "No previous song in history." << endl;
    }
}
