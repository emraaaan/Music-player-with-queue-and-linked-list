#include "MusicPlayer.h"
#include <iostream>
using namespace std;

int main() {
    MusicPlayer player;
    Song song1("Skyfall", "Adele", "007");
    Song song2("Reflections", "The Neighbourhood", "Neighbourhood");
    Song song3("I wanna be yours", "Arctic Monkeys", "AM");
    Song song4 ("Tumi", "Level 5", "Tumi");

    player.addSongToQueue(song1);
    cout<<endl;
    player.addSongToQueue(song2);
    cout<<endl;
    player.addSongToQueue(song3);
    cout<<endl;
    player.addSongToQueue(song4);
    cout<<endl;

    player.playNextSong();
     cout<<endl;
    player.playNextSong();
     cout<<endl;
    player.playNextSong();
     cout<<endl;
     player.playNextSong();
     cout<<endl;

    cout << "Playing previous songs:" <<endl;
     cout<<endl;
    player.playPreviousSong();
     cout<<endl;
    player.playPreviousSong();
     cout<<endl;
    player.playPreviousSong();

    return 0;
}
