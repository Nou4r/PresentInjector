Hello, since i found a better way to inject my internal cheat, i decided to release this one. 

 - 3 .data pointers chained in .data section of win32k.sys.
 - PFN Clearing (nulling).
 - Allocating kernel memory then exposing it to the game by modify the page bits.
 - Present Pointer Swapping, calling dll main by swapping the present pointer to the dll entry.
 - Driver unloading (unhook) after injection.

# PresentInjector
A simple present scene, kernel allocation injector.
