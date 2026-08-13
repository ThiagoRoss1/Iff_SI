# IFF - Exercises

This repository holds the exercises I write for my classes at IFF. It's mostly C
programs, organized by subject and numbered by exercise, each one small and
self-contained.

Nothing fancy here — it's a study repo. Files get added as the classes go on.

## Compiling

### Windows

Standard `gcc`:

```sh
gcc file.c -o file.exe
```

### Mac

Using the `clang` that already comes with macOS:

```sh
clang file.c -o file
```

Or my custom command, which is just `clang` with warnings and C11 enabled:

```sh
clr file.c -o file
```

It comes from this alias:

```sh
alias clr='clang -Wall -Wextra -std=c11'
```

So `clr file.c -o file` expands to:

```sh
clang -Wall -Wextra -std=c11 file.c -o file
```
