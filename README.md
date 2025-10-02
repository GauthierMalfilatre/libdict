# Lib Dict

A simple static library (`.a`) providing dictionnary basic functions.

## Features

* Real utility if you don't wan to have too many variables in your code
* Easy integration into other projects

## Build

To compile the library:

```bash
# build
make

# Clean and build
make re
```

This will generate `libdict.a` in the `build/` directory.

## Usage

To use the library in your own C project:

```c
#include "dict.h"

int main(void) {
    // Initialize the dictionnary to NULL
    dict_t *dictionnary = NULL;

    // Add an entry
    dict_add_entry(&dictionnary, "variable_1", (void *)42);

    dict_add_entry(&dictionnary, "variable_2", (void *)strdup("Epitech > 42"));
    dict_add_entry(&dictionnary, "variable_3", (void *)626);
    dict_add_entry(&dictionnary, "variable_4", (void *)988);

    // Remove an entry
    dict_remove_entry(&dictionnary, "variable_3");

    // Search an entry
    int variable_4 = dict_search_entry(dictionnary, "variable_4");

    // Dump the dictionnary
    dict_dump(dictionnary);

    // Clear the dictionnary
    dict_clear(dictionnary);
    return 0;
}
```

Compile with:

```bash
gcc main.c -Lbuild/ -ldict -o main
```

## Project Structure

```
.
├── include/       # Public headers (.h)
├── src/           # Source files (.c)
├── build/         # Compiled objects + libmylib.a
├── Makefile
└── README.md
```

## Contributing

* Fork the repo
* Add new functions to `src/` and declare them in `include/`
* Run `make` to rebuild
* Submit a Pull Request

## License

Distributed under the MIT License. See `LICENSE` for details.
