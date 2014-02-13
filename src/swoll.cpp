#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "scoundrel.h"

using namespace Scoundrel;

int main(int argc, char ** argv) {
  //TODO: Implement these
  //Scoundrel::set_frame_rate(...)
  //Scoundrel::set_vsync(...)

  init_scoundrel("./scoundrel.json");

  // Perkins' flow!
  //
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

  /* Basic flow, as I see it

  Core core = new Scoundrel::Core(...);

  //Number of drawable layers, possible created in the constructor above instead
  core.set_layer_count(3);

  // See scoundrel/game_map for details on this, but the maps will define graphics, coords, separate areas,
  // triggers and so on. Some of it will be relevant to our game only, while Scoundrel will own some.
  core.load_map("level1.json");

  MyGame::Player player;
  player.set_position(core.get_map().get_spawn_point());

  // May shortcut this, or change the interface. Not every relevant entity will be drawable
  Scoundrel::Layer layer = core.get_layer(1);
  core.add_entity(player, layer);

  // Call keyboard_input and mouse_input on the object once per frame, if there is any
  core.handles_input(player, Scoundrel::KEYBOARD);
  core.handles_input(player, Scoundrel::MOUSE);

  // Player overrides methods from ScoundrelEntity
  core.begin_frame();

  //Some game logic goes here

  //A hash table of objects that were hit. The value is an array of things that hit it
  //Ideally, each thing wouldn't be in the table as both a key and a value. Worth investigating
  Scoundrel::CollisionMap collisions = core.get_collisions();

  // calls collide(other) on each key in the map. That way you can resolve none, some or all
  MyGame::resolve_collisions(collisions);

  // More to come

  core.end_frame();
  //Scoundrel will iterate and trigger AI routines for us
  //Scoundrel will iterate and collide objects for us
  //Scoundrel will iterate and draw each layer, from lowest numbered to highest

  */

  deinitialize_game();
  return 0;
}
