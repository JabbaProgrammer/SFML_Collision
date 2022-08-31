#include "../include//Application.h"

Application::Application() : Application(600, 600) {}

Application::Application(int width, int height) {
    window = new sf::RenderWindow(sf::VideoMode(width, height), "", sf::Style::Close);
}

void Application::Start() {
    while (window->isOpen()) {
        pollEvents();
        update();
        draw();
    }
}

void Application::pollEvents() {
    sf::Event event;
    while (window->pollEvent(event)){
        if (event.type == sf::Event::Closed) {
            window->close();
        }
    }
}

void Application::update() {

}

void Application::draw() {
    window->clear();

    // place draw functions

    window->display();
}

Application::~Application() {
    delete window;
}
