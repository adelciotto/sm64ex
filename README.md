# sm64ex
My personal fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex) that I tinker with and add additional features to.

All credit for the decompilation and ports to modern platforms go to the contributors of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex), [sm64-port/sm64-port](https://github.com/sm64-port/sm64-port) and [n64decomp/sm64](https://github.com/n64decomp/sm64). I have simply forked sm64ex to tinker with and learn.

## Things I've added

* Cheat settings are now saved to configfile.
* Added a `InfiniteFallHeight` cheat so prevent any damage when falling.
* Added a `SpecialTripleJump` cheat to enable the special triple jump at anytime.
* Added a new gameplay sub menu to options screen.
* Added new mario sunshine style spinning triple jump which can be enabled in the new gameplay options sub menu.
* Added new mario sunshine style dive which can be enabled in the new gameplay options sub menu.
* Added new mario galaxy style spin jump which can be enabled in the new gameplay options sub menu.

This repository contains **no upload of any copyrighted asset**.
Run `./extract_assets.py --clean && make clean` or `make distclean` to remove ROM-originated content.