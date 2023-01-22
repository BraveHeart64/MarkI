#include<allegro5/allegro.h>
#include<allegro5/allegro_image.h>
#include<allegro5/allegro_audio.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_native_dialog.h>
#include"Music.cpp"
#include"AmFileHandler.h"
#include<iostream>

#define TRUE  1
#define FALSE 0


class MarkI{

    private:
        ALLEGRO_DISPLAY * display;
        ALLEGRO_BITMAP* ic=0;
        ALLEGRO_TIMER* gameclock;
        ALLEGRO_EVENT event;

        ALLEGRO_EVENT_QUEUE* que;
        double fps;
        int gamestate;
        int scene;
        int render;

    public:
        ALLEGRO_DISPLAY* GetDisplay(ALLEGRO_DISPLAY* display);
        ALLEGRO_TIMER*   GetGameClock();
        void             SetGameClock(double val);
        void             StartWindow();
        void             DrawToScreen();
        int             Collision(); //I changed this to int because we can use our define for bool. I want this to work in vanila C as well as C++
        ALLEGRO_EVENT    GetEventType();
        ALLEGRO_EVENT*   GetEventRef();
        ALLEGRO_EVENT_QUEUE* GetQue(ALLEGRO_EVENT_QUEUE* q);
        ALLEGRO_BITMAP* SetIcon(ALLEGRO_BITMAP* ic);

        int  GetRender();
        void SetRender(int v);


        int GetGameState();
        void SetGameState( int number);

        void SetDisplay();





    public:
        MarkI();
        ~MarkI();


};
