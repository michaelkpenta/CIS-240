# First Objects

A first look at `Rectangle` and `Prism` classes, constructors/destructors, and passing objects by value versus reference. The prism originally owned a raw pointer, which could be double-deleted when copied; it now owns a `Rectangle` directly.

Build: `cmake -S . -B build && cmake --build build`
