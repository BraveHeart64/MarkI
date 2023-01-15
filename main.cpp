#include"MarkI.h"
#include<iostream>
using namespace std;









int main(int argc, char ** argv){

    MarkI en;
    Music sound;
    AmFileHandler ourfile;
    al_set_app_name("Angel Warrior");
    ALLEGRO_DISPLAY* test = NULL;

//  above code needs to be modify to retireve the icons
   cout<<al_get_current_directory()<< "Before"<<endl;
    ALLEGRO_PATH* dir = ourfile.ReturnFilePath();
    al_set_path_filename(dir,"icon.png");
    al_change_directory(al_path_cstr(dir, ALLEGRO_NATIVE_PATH_SEP));


    al_change_directory(al_path_cstr(dir, ALLEGRO_NATIVE_PATH_SEP) ) ;

    //test we know it takes half the dir not the whole thing
    cout<<al_get_path_tail(dir)<<endl;// this is gamesobjects


   al_rebase_path(dir,al_get_path_tail(dir));
    //al_append_path_component(dir,"/GameObjects");

   // al_change_directory(al_path_cstr(dir, ALLEGRO_NATIVE_PATH_SEP));
    cout<<al_get_current_directory()<< "After"<<endl;


// main loop that will be rewritten for each game
    ALLEGRO_EVENT_QUEUE* q;
    q = en.GetQue(q);



     ALLEGRO_BITMAP *icon = al_load_bitmap("icon.png");
    if(icon == 0){
        en.SetGameState( -6);
    }
    else{
        en.SetDisplay();
        en.GetDisplay(test);
        en.SetGameState(1);
        en.StartWindow();

    }

    while(en.GetGameState() > -5){

        al_wait_for_event(q,en.GetEventRef());
        switch(en.GetEventType().type){
            case ALLEGRO_EVENT_TIMER:
            // Game Logic
            en.SetRender(TRUE);

            break;

            case ALLEGRO_EVENT_KEY_DOWN:


            break;




            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                en.SetGameState(-5);

            break;



        }

        if(en.GetRender() && al_is_event_queue_empty(q)){
            al_clear_to_color(al_map_rgb(0,0,0));
            al_flip_display();
            en.SetRender(FALSE);
        }

    }



    return 0;
}
