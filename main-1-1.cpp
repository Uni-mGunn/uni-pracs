#include <iostream>
#include <string.h>
#include "Music_box.h"

int main(){
    Music_box box = Music_box();
    std::cout << box.get_song() << box.get_width() << std::endl;
    Music_box newBox = Music_box("Jeof", 375);
    std::cout << newBox.get_song() << newBox.get_width() << std::endl;
    return 0;
}
