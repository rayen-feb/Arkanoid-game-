#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

int main()
{
    srand(time(0));

    RenderWindow app(VideoMode(520, 450), "Arkanoid!");
    app.setFramerateLimit(60);
