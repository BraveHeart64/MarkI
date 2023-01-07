#include<allegro5/allegro_audio.h>
#include<allegro5/allegro_acodec.h>

class Music {
    private:
        int song_counter;




public:

    // method types are subject to change
    void Play();
    void Pause();


    ~Music(){

    }


    Music(){
        song_counter = 0;
        al_install_audio();
        al_reserve_samples(16);

    }


};
