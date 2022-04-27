#include <iostream>
#include "Music_box.h"

using namespace std;

Music_box::Music_box(){
    songname = "null";
    width = 0;
}


Music_box::Music_box(string _songname, int _width){
    songname = _songname;
    width = _width;
} // a constructor that takes the song and width as arguments

string Music_box::get_song(){
    return songname;
}  // returns the name of the song that the music box plays

int Music_box::get_width(){
    return width;
};    // returns the width in centimetres of the music box

Music_box::~Music_box(){
    
}     //A default destructor
