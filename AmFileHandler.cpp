#include"AmFileHandler.h"

 AmFileHandler::AmFileHandler(){

    ALLEGRO_PATH* temp_path;
    temp_path = al_create_path("GameObjects");
    this->path = al_get_standard_path(ALLEGRO_RESOURCES_PATH);
    al_join_paths(this->path , temp_path);
    al_destroy_path(temp_path);
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
