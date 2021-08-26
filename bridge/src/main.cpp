#include <iostream>

#include "ViewForms.cpp"
#include "MediaResource.cpp"


int main() {
    std::cout << "Let's see some media resources with different views." << std::endl;

    Resource *alchemist = new Book("Alchemist", "Picture of Alchemist", "This is the back of Alchemist", "Arlchemist");
    Resource *tarkan = new Artist("Tarkan", "Picture of Tarkan", "Born in 1972", "tarkan");

    std::cout << "These are the long views of each media:" << std::endl;
    LongView *view1 = new LongView(alchemist);
    view1->show();
    LongView *view2 = new LongView(tarkan);
    view2->show();
   
    std::cout << "These are the short views of each media:" << std::endl;
    ShortView *view3 = new ShortView(alchemist);
    view3->show();
    ShortView *view4 = new ShortView(tarkan);
    view4->show();
    
    std::cout << "These are the notification views of each media:" << std::endl;
    NotificationView *view5 = new NotificationView(alchemist);
    view5->show();
    NotificationView *view6 = new NotificationView(tarkan);
    view6->show();
}