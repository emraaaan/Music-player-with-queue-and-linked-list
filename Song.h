#ifndef SONG_H
#define SONG_H

#include <string>
using namespace std;

class Song {
public:
    Song(const string& title, const string& artist, const string& album);

    string getTitle() const;
    string getArtist() const;
    string getAlbum() const;

private:
    string title;
    string artist;
    string album;
};

#endif // SONG_H
