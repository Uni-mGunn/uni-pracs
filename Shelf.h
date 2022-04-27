#ifndef SHELF_H
#define SHELF_H
#include <iostream>
#include <string.h>
#include "Music_box.h"

class Shelf {
    private:
        Music_box *boxes;
        int numBoxes;
        int width;
        int widthUsed;
    public:
        Shelf();  // default constructor
        Shelf(int width);  // constructor for shelf with given width in centimetres
        int get_width();  // returns the width of the shelf in centimetres
        // returns the number of Music boxes currently on the shelf
        int get_number_of_music_boxes(); 
        // returns a dynamic array of the music boxes currently on the shelf
        Music_box *get_contents();
        // returns true and adds music box to shelf if there is sufficient space
        // otherwise returns false
        bool add_music_box(Music_box a_music_box);

        ~Shelf();
};
#endif