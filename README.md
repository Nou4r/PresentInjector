Hello, since i found a better way to inject my internal cheat, i decided to release this one after some indian guy i gave to him leaked it.

 - 3 .data pointers chained in .data section of win32k.sys.
 - PFN Clearing (nulling).
 - Allocating kernel memory then exposing it to the game by modify the page bits.
 - Present Pointer Swapping, calling DllMain by swapping the present pointer to the Dll Entry.
 - Driver unloading (unhook) after injection.
 - Discord & Medal present pointers (offset & signatures).
 - Shadow Imports.

# PresentInjector
A simple present scene, kernel allocation injector.
