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

    ALLEGRO_PATH* dir;

     dir = ourfile.ReturnFilePath();

    //cout<<al_get_current_directory()<<endl;

 //   cout<<al_path_cstr(dir,ALLEGRO_NATIVE_PATH_SEP)<<endl;
   // std::cout<< al_get_path_tail(dir);
    bool leep = al_change_directory(al_path_cstr(dir,ALLEGRO_NATIVE_PATH_SEP));
// main loop that will be rewritten for each game
   cout<<leep;
 //   cout<<al_get_current_directory()<<endl;
    ALLEGRO_EVENT_QUEUE* q;
    q = en.GetQue(q);



     ALLEGRO_BITMAP *icon = al_load_bitmap("icon.png");
     al_set_app_name("Angel Wars");
    if(icon == 0){
        en.SetGameState( -6);
    }
    else{
        en.SetIcon(icon);
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
