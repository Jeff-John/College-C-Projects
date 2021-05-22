#include "playlist.h"

Playlist::Playlist(string n, int p) {
   name = n;
   maxSize = p;
   length = 0;
   
   if (p <= 0) maxSize = 10;
   
   list = new string[maxSize];
}

Playlist::Playlist(const Playlist &other) {
   name = other.name;
   maxSize = other.maxSize;
   length = other.length;
   
   list = new string[maxSize];
   
   for(int i = 0; i < length; i++)
      list[i] = other.list[i];
}

Playlist& Playlist::operator=(const Playlist &other) {
   if(this != &other) {
      name = other.name;
      maxSize = other.maxSize;
      length = other.length;
      
      if(list != nullptr)
         delete [] list;
   
      list = new string[maxSize];
   
      for(int i = 0; i < length; i++)
         list[i] = other.list[i];
   }
   return *this;
}

bool Playlist::operator>(const Playlist &other) {
   if(length > other.length)
      return true;
   return false;
}


Playlist::~Playlist() {
   delete [] list;
}

void Playlist::addSong(string n) {
   if(length < maxSize)
   {
      list[length] = n;
      length++;
   }
}

string Playlist::getSong(int pos) {
   return list[pos];
}

