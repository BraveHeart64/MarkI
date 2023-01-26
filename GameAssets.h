#include<allegro5/allegro.h>
#include<allegro5/allegro_image.h>
#include<iostream>

#define   TRUE 1
#define   FALSE 0


class GameAssets{

    private:
        ALLEGRO_BITMAP* obj;
        int solid;
        char name;




    public:
        GameAssets();
        ~GameAssets();

};
