#include"MarkI.h"
#include<iostream>
#include<map>
using namespace std;


    MarkI en;
    Music sound;
    AmFileHandler ourfile;
    ALLEGRO_EVENT_QUEUE* q = NULL;



void UpdateGameLogic(){

 if(en.GetRender() == true && al_is_event_queue_empty(q)){ // all game logic goes in here

            al_clear_to_color(al_map_rgb(135,206,235));
            al_flip_display();

            en.SetRender(false);

        }

}

 int main(int argc, char ** argv){


    al_set_app_name("Angel Warrior");
    ALLEGRO_DISPLAY* window = NULL;




//  above code needs to be modify to retireve the icons

     ALLEGRO_PATH* dir;

     dir = ourfile.ReturnFilePath();

    //cout<<al_get_current_directory()<<endl;

   // std::cout<< al_get_path_tail(dir);
    bool leep = al_change_directory(al_path_cstr(dir,ALLEGRO_NATIVE_PATH_SEP));
// main loop that will be rewritten for each game
   cout<<leep;
 //   cout<<al_get_current_directory()<<endl;

    cout<<al_path_cstr(dir,ALLEGRO_NATIVE_PATH_SEP)<<endl;

    q = en.GetQue(q);



     ALLEGRO_BITMAP *icon = al_load_bitmap("icon.png");
     al_set_app_name("Angel Wars");
    if(icon == 0){
        en.SetGameState( -6);
    }
    else{
        en.SetIcon(icon);
        en.SetDisplay();
        en.GetDisplay(window);
        en.SetGameState(1);
        en.StartWindow();
        al_clear_to_color(al_map_rgb(135,206,235));
        al_flip_display();


    }
    // not all cases happen in this loop check classes and make sure that they will work in the futuer

    while(en.GetGameState() > -5){


        al_wait_for_event(q,en.GetEventRef());
       // al_wait_for_event_timed(q,en.GetEventRef(),en.GetFPS());
       if(en.GetEventRef()->type == ALLEGRO_EVENT_TIMER){
       // Game controls for character movments
        en.SetRender(true);

       }else if(en.GetEventRef()->type == ALLEGRO_EVENT_KEY_DOWN){
        switch(en.GetEventType().type){
            case ALLEGRO_KEY_UP:

            // Game Logic
            //en.SetRender(TRUE);
            // UpdateGameLogic();

             break;

             case ALLEGRO_KEY_RIGHT:


             break;



             case ALLEGRO_KEY_SPACE:



             break;



             case ALLEGRO_KEY_ENTER:


             break;






            case ALLEGRO_EVENT_KEY_DOWN:
            if(en.GetEventType().keyboard.keycode == ALLEGRO_KEY_ESCAPE){
                en.SetGameState(-5);
                cout<<"esc hit";

                break;
            }


            break;




            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                en.SetGameState(-5);

            break;





            }
        }
        else if(en.GetEventRef()->type == ALLEGRO_EVENT_KEY_UP){
            switch(en.GetEventRef()->keyboard.keycode){


            }

        }
        en.SetRender(true); // allows the redraw code to work

         UpdateGameLogic();

    }



    return 0;
}
