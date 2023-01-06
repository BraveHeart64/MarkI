
#include"MarkI.h"
/*
class MarkI{

     private:
        ALLEGRO_DISPLAY * display;
        ALLEGRO_TIMER* gameclock;
        ALLEGRO_EVENT event;

        ALLEGRO_EVENT_QUEUE* que;
        double fps;
        int gamestate;
        int scene;


    public:
        ALLEGRO_DISPLAY* GetDisplay(ALLEGRO_DISPLAY* display);
        ALLEGRO_TIMER   GetGameClock(ALLEGRO_TIMER* gameclock);

        int GetGameState();
        void SetGameState( int number);

        void SetDisplay();
        void   SetGameClock(ALLEGRO_TIMER* gameclock);




    public:
        MarkI();
        ~MarkI();



};

*/



MarkI::MarkI(){
    al_init();
    al_init_image_addon();
    al_init_font_addon();
    al_init_native_dialog_addon();
    al_install_audio();
    display = 0;
    gamestate = 1;
    render = TRUE;


    fps = ALLEGRO_BPS_TO_SECS(1.0/60.0);
    gameclock = al_create_timer(fps);
    SetGameClock(fps);
    que = al_create_event_queue();

    al_install_keyboard();
    al_install_audio();
    al_install_joystick();
    al_init_font_addon();




}

MarkI::~MarkI(){
    al_destroy_timer(GetGameClock());
    al_destroy_display(this->display);
    al_destroy_event_queue(this->que);
    al_stop_timer(gameclock);


}

void MarkI::SetGameState(int number){
    this->gamestate = number;

}

int MarkI::GetGameState(){
    return this->gamestate;
}

void MarkI::SetGameClock(double val){
  this->gameclock = al_create_timer(val);

}

int MarkI::GetRender(){
    return this->render;
}


void MarkI::SetRender(int v){
    this->render = v;
}

void MarkI::SetDisplay(){
    this->display = al_create_display(800,800);
}


 ALLEGRO_TIMER* MarkI::GetGameClock(){
  return this->gameclock;

 }

ALLEGRO_EVENT_QUEUE* MarkI::GetQue(ALLEGRO_EVENT_QUEUE* q){

    return this->que;
 }


ALLEGRO_DISPLAY* MarkI::GetDisplay(ALLEGRO_DISPLAY* display){
 display = this->display;

 if(display != 0){
    return display;
 }
 else{
    ALLEGRO_DISPLAY* error = al_create_display(500,500);
    al_show_native_message_box(error,"Null on Display","E!","The display is null create the display","close",ALLEGRO_MESSAGEBOX_ERROR);
    al_destroy_display(error);
 }
    this->gamestate = -100; // -100 means close the program because display was not initiated for the main window

    return display;
}

ALLEGRO_EVENT  MarkI::GetEventType(){return this->event;}

ALLEGRO_EVENT*  MarkI::GetEventRef(){return &this->event;}

 void  MarkI::StartWindow(){
   al_start_timer(GetGameClock());

    al_register_event_source(que,al_get_keyboard_event_source());
    al_register_event_source(que,al_get_timer_event_source(GetGameClock()));
    al_register_event_source(que,al_get_display_event_source(GetDisplay(this->display)));


 }
