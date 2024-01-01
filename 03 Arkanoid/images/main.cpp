#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

int main()
{
    srand(time(0));

    RenderWindow app(VideoMode(520, 450), "Arkanoid!");
    app.setFramerateLimit(60);
 Sprite sBackground(t2), sBall(t3), sPaddle(t4);
    sPaddle.setPosition(300,440);

    Sprite block[1000];
   int n=0;}
