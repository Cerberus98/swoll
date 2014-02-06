#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "scoundrel.h"

int main(int argc, char ** argv)
{
  sf::RenderWindow* window = Scoundrel::init_sfml();
  window->setFramerateLimit(Scoundrel::FRAMERATE_LIMIT);
  window->setVerticalSyncEnabled(true);
  Scoundrel::init_game();
  Scoundrel::game_loop(window);
  Scoundrel::deinitialize_game(window);
  return 0;
}
