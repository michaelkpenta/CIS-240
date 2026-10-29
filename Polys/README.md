# Polys

A simple polynomial model: `Term` stores a coefficient and degree, while `Polynomial` keeps terms and can evaluate or print them. Fixed term insertion so setting a degree updates one term instead of overwriting the entire vector.

Build: `cmake -S . -B build && cmake --build build`
