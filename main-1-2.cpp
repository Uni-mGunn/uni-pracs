#include <iostream>
#include <string.h>
#include "Shelf.h"

int main(){
    Music_box box = Music_box();
    std::cout << box.get_song() << box.get_width() << std::endl;
    Music_box newBox = Music_box("Jeof", 375);
    std::cout << newBox.get_song() << newBox.get_width() << std::endl;

    Shelf shelf = Shelf(1);

    std::cout << shelf.get_width() << " " << shelf.get_number_of_music_boxes() << std::endl;

    shelf.add_music_box(box);

    std::cout << shelf.get_width() << " " << shelf.get_number_of_music_boxes() << std::endl;

    shelf.add_music_box(newBox);

    std::cout << shelf.get_width() << " " << shelf.get_number_of_music_boxes() << std::endl;

    Music_box *boxes = shelf.get_contents();

    std::cout << boxes[0].get_width() << std::endl;
    return 0;
}

