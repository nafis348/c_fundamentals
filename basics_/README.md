# Basics: Hello, World!

A minimal C program demonstrating standard output and basic program structure.

```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```

### Key Takeaways
- **`#include <stdio.h>`**: Imports the Standard Input/Output library required for `printf()`.
- **`int main(void)`**: Entry point of the program; takes no arguments and returns an integer status code.
- **`printf("Hello, World!\n");`**: Prints formatted text to the console, where `\n` moves the cursor to a new line.
- **`return 0;`**: Signals successful program termination to the operating system.
- **Semicolons (`;`) & Braces (`{}`)**: Statements end with `;`, and function bodies are enclosed within `{}`.

### Compile & Run (GCC)
```bash
gcc hello.c -o hello
./hello
```
