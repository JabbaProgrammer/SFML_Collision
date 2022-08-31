#ifndef SFML_BREAKBLOCKS_GAME_H
#define SFML_BREAKBLOCKS_GAME_H
#include "SFML/Graphics.hpp"


class Application {
public:
    Application();
    Application(int width, int height);
    ~Application();

    void Start();

private:
    void pollEvents();
    void update();
    void draw();

    sf::RenderWindow* window;
};


#endif //SFML_BREAKBLOCKS_GAME_H
