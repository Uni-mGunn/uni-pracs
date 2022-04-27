#ifndef MUSIC_BOX_H
#define MUSIC_BOX_H
#include <iostream>
#include <string.h>

class Music_box {
    private:
        std::string songname;
        int width;
    public:
        Music_box();          // a default constructor 
        Music_box(std::string songname, int width); // a constructor that takes the song and width as arguments
        std::string get_song();  // returns the name of the song that the music box plays
        int get_width();    // returns the width in centimetres of the music box
        ~Music_box();       //A default destructor
};
#endif