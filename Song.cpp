//
// Created by coola on 11/23/2026.
//

#include "Song.h"
#include <iomanip>
#include <iostream>

Song::Song() {
    title = "";
    artist = "";
    plays = 0;
    likes = 0;
}

Song::Song(std::string t, std::string a, int p, int l) {
    title = t;
    artist = a;
    plays = p;
    likes = l;
}

std::string Song::getTitle() const{
    return title;
}

std::string Song::getArtist() const{
    return artist;
}

int Song::getPlays() const{
    return plays;
}

int Song::getLikes() const{
    return likes;
}

bool Song::operator>(const Song& other) const {
    return plays > other.plays;
}

bool Song::operator<(const Song& other) const {
    return plays < other.plays;
}

void Song::print() const {
    std::cout << std::left << std::setw(30) << title << std::setw(16) << artist << std::right <<std::setw(8) <<plays <<" plays" << std::setw(8) <<likes << " likes" <<std::endl;
}

bool compareByTitle(const Song& a, const Song& b) {
    return a.getTitle() < b.getTitle();
}

bool compareByArtist(const Song& a, const Song& b) {
    return a.getArtist() < b.getArtist();
}

bool compareByLikesDesc(const Song& a, const Song& b) {
    return a.getLikes() > b.getLikes();
}