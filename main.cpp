#include"MarkI.h"










int main(int argc, char ** argv){

    MarkI en;

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

            break;


            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                en.SetGameState(-5);

            break;



        }
        al_flip_display();
    }

    return 0;
}
