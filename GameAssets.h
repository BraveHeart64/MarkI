#include<allegro5/allegro.h>
#include<allegro5/allegro_image.h>
#include<map>
#include<iostream>
using namespace std;

#define   TRUE 1
#define   FALSE 0


class GameAssets{

    private:
        ALLEGRO_BITMAP* ground;
        map<string , ALLEGRO_BITMAP*> landmass;
        string name;




    public:
        void AddAsset(map<string, ALLEGRO_BITMAP*> lm);
        map<string,ALLEGRO_BITMAP*> DrawAssets(map<string, ALLEGRO_BITMAP*> lm);
        GameAssets();
        ~GameAssets();

};
