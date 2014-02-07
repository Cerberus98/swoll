#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "scoundrel.h"

using namespace Scoundrel;

int main(int argc, char ** argv) {
  //TODO: Implement these
  //Scoundrel::set_frame_rate(...)
  //Scoundrel::set_vsync(...)

  init_scoundrel("./scoundrel.json");
  
  //Universe universe = new Universe('scoundrel.json'); // loads the terrain, collidables,
  //    npcs, the player, window styles, etc. It's all in there, possibly
  //    by just pointing to other json files.
  // ... 'npcs': 'npcs.json', 'terrain': 'terrain_v2.json' ...
  
  //string playername = universe.prompt("Whats your name?");
  
  //universe.player.set_name(playername);

  //universe.world.add_function(quicksand());  // quicksand tiles know to look for this
  //universe.world.add_function(weather()); // atmo effects
  //universe.player.add_function(second_chance()); // 5% chance to refill half life after dying

  //while (universe.player.get_state() == ALIVE) { // program quits when you die
    game_loop();
  //}
  
  deinitialize_game();
  return 0;
}
