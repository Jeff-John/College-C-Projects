#include <iostream>

using namespace std;

#ifndef PLAYLIST_H
#define PLAYLIST_H

class Playlist {
private:
   string name;
   int maxSize;
   int length;
   string *list;
public:
   Playlist(string, int);
   Playlist(const Playlist &other);
   Playlist& operator=(const Playlist &other);
   bool operator>(const Playlist &other);
   void addSong(string);
   string getSong(int);
   string getName() { return name; };
   int getMaxSize() { return maxSize; };
   int getLength() { return length; };
   string* getList() { return list; };
   ~Playlist();
};

#endif
   
   
   
   