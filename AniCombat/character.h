#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "background.h"

using namespace std;

#pragma once
class CRT{
    public:

        static const int char_width = 80;
        static const int char_height = 96;
        static const int char_velo = 4;

        CRT();

        SDL_Rect collider, charRect, charPos;

        SDL_Texture* charMotion;

        Mix_Chunk* sfx;

        void initPosition(BG background);

        void handleEvent( SDL_Event& e);

        void move( const int SCREEN_WIDTH, const int SCREEN_HEIGHT );

        void render(SDL_Renderer* renderer);

        void loadChar(SDL_Renderer* renderer);

    private:

        Uint32 startTime;

        string charStat, skill;

        int leftRight /* 1 la left, 2 la right */, condition;

        int frameNum, frameTime, sheetW;

        int veloX, veloY;

        SDL_Texture* charTexture;

};

bool checkCollision( SDL_Rect a, SDL_Rect b );