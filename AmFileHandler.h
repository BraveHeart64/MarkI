#include<allegro5/file.h>


class AmFileHandler{

    private:
        ALLEGRO_FILE *fl;
        ALLEGRO_PATH *path;




    public:

        void CreateAFilePath();
        void LoadAFile();
        ALLEGRO_PATH* ReturnFilePath(ALLEGRO_PATH &p);

        AmFileHandler();
        ~AmFileHandler();


};
