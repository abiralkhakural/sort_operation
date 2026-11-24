//
// Created by coola on 11/23/2026.
//

#ifndef SORT_OPERATION_SONG_H
#define SORT_OPERATION_SONG_H
#include <string>


class Song {
    private:
    std::string title;
    std::string artist;
    int plays;
    int likes;

public:
    Song();
    Song(std::string t, std::string a, int p, int l);
    std::string getTitle() const;
    std::string getArtist() const;
    int getPlays() const;
    int getLikes() const;

    bool operator<(const Song& other) const;
    bool operator>(const Song& other) const;
    friend std::ostream& operator<<(std::ostream& out, const Song& s);

    void print() const;
};

bool compareByTitle(const Song& a, const Song& b);
bool compareByArtist(const Song& a, const Song& b);
bool compareByLikesDesc(const Song& a, const Song& b);

#endif //SORT_OPERATION_SONG_H
