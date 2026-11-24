#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

#include "Song.h"

void printSongs(const std::vector<Song>& songs, std::string heading) {
    std::cout <<"\n=== " << heading << " ===" << std::endl;
    for (size_t i = 0; i<songs.size(); i++) {
        songs[i].print();
    }
}

int main() {
    std::vector<Song> songs;
    songs.push_back(Song("New Flesh", "Current Joys", 18200, 2450));
    songs.push_back(Song("Symphonia IX", "Current Joys", 24500, 3100));
    songs.push_back(Song("American Honey", "Current Joys", 9800, 1320));
    songs.push_back(Song("Gatsby", "Current Joys", 7600, 980));
    songs.push_back(Song("Self-Inflicted Mental Terror", "Gulch", 5400, 870));
    songs.push_back(Song("Lie, Deny, Sanctify", "Gulch", 4100, 760));
    songs.push_back(Song("Bolt Swallower", "Gulch", 6900, 1240));
    songs.push_back(Song("Contempt of Cop", "Sunami", 13300, 2800));
    songs.push_back(Song("Weak Die First", "Sunami", 8700, 1650));
    songs.push_back(Song("Fake Blood", "Sunami", 6200, 1410));
    songs.push_back(Song("Step Up", "Sunami", 3500, 690));
    songs.push_back(Song("Ma Ra Malai", "Albatross", 11000, 2950));
    songs.push_back(Song("Bhool", "Albatross", 2900, 540));

    printSongs(songs, "Original order");

    std::sort(songs.begin(), songs.end());
    printSongs(songs, "Least played to most");

    std::sort(songs.begin(), songs.end(), std::greater<Song>());
    printSongs(songs, "Most played to least");

    std::sort(songs.begin(), songs.end(), compareByLikesDesc);
    printSongs(songs, "Most Liked to least");

    std::sort(songs.begin(), songs.end(), compareByTitle);
    printSongs(songs, "Title A-Z");

    std::sort(songs.begin(), songs.end(), compareByArtist);
    printSongs(songs, "Artist A-Z");

    return 0;
}