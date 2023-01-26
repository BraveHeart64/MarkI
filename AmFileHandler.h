
#include<allegro5/allegro.h>
#include<iostream>
#include<fstream>

class AmFileHandler{

    private:
        ALLEGRO_FILE *fl;
        ALLEGRO_PATH *path;




    public:

        void CreateAFilePath();
        void LoadAFile();

        ALLEGRO_PATH* ReturnFilePath();

        AmFileHandler();
        ~AmFileHandler();


};
