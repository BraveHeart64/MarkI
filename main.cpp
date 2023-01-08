#include"MarkI.h"










int main(int argc, char ** argv){

    MarkI en;
    Music sound;

    al_set_app_name("Angel Warrior");
    ALLEGRO_DISPLAY* test = NULL;
    en.SetDisplay();
    en.GetDisplay(test);
    en.SetGameState(1);
    en.StartWindow();

// main loop that will be rewritten for each game
    ALLEGRO_EVENT_QUEUE* q;
    q = en.GetQue(q);

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
