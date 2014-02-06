swoll
=====

Linking and running

create symlinks to your scoundrel include and library paths if you haven't copied them into the standard locations (e.g. /usr/lib, /usr/include)

Example:

<pre>
Scoundrel was built in ~/code/cpp/scoundrel_sfml
Assuming swoll lives under ~/code/cpp/
ln -s ../scoundrel_sfml/lib scoundrel_lib
ln -s ../scoundrel_sfml/include scoundrel_include
make
./run_swoll
</pre>
