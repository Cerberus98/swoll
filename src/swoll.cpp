#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "scoundrel.h"

int main(int argc, char ** argv)
{
  //TODO: Implement these
  //Scoundrel::set_frame_rate(...)
  //Scoundrel::set_vsync(...)

  Scoundrel::init_scoundrel("./scoundrel.json");
  Scoundrel::game_loop();
  Scoundrel::deinitialize_game();
  return 0;
}
