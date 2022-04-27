#include <iostream>
#include <string.h>
#include "Shelf.h"

int main(){
    Music_box box = Music_box();
    std::cout << box.get_song() << box.get_width() << std::endl;
    Music_box newBox = Music_box("Jeof", 375);
    std::cout << newBox.get_song() << newBox.get_width() << std::endl;

    Shelf shelf = Shelf(5);

    shelf.add_music_box(box);
    shelf.add_music_box(newBox);
    
    return 0;
}