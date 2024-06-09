#include "Song.h"
using namespace std;

Song::Song(const string& title, const string& artist, const string& album)
    : title(title), artist(artist), album(album) {}

string Song::getTitle() const {
    return title;
}

string Song::getArtist() const {
    return artist;
}

string Song::getAlbum() const {
    return album;
}
