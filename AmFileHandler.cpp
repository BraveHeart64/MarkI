#include"AmFileHandler.h"

 AmFileHandler::AmFileHandler(){
// cant find the bitmap
   // al_get_standard_path(1);
  // ALLEGRO_PATH* temp_path;
   //temp_path = al_create_path_for_directory("/Mark1/GameObjects");
   //this->path = al_get_standard_path(ALLEGRO_USER_HOME_PATH);
   // std::cout<<al_path_cstr(this->path,ALLEGRO_NATIVE_PATH_SEP);


    //bool t = al_rebase_path(this->path,temp_path);
    //    this->path = al_get_standard_path(ALLEGRO_USER_HOME_PATH);
   //  this->path = al_create_path_for_directory("/home/ryanlove/Desktop/Mark1/GameObjects");
//  std::cout<<t;


/*  this code below works code above is exprimental code
 this->path = al_get_standard_path(ALLEGRO_RESOURCES_PATH);

 */
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
