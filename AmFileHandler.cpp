#include"AmFileHandler.h"

 AmFileHandler::AmFileHandler(){
// cant find the bitmap
   // al_get_standard_path(1);

   // this->path = al_create_path_for_directory("/Mark1/GameObjects");
    this->path = al_get_standard_path(ALLEGRO_RESOURCES_PATH);



 }

 AmFileHandler::~AmFileHandler(){
  this->fl = 0;
    al_destroy_path(path);
 }



void AmFileHandler::CreateAFilePath(){



}

void AmFileHandler::LoadAFile(){




}





ALLEGRO_PATH* AmFileHandler::ReturnFilePath(){




return this->path;
}
