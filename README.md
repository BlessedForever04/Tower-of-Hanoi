# Tower of Hanoi 🗼

A C++ implementation of the classic Tower of Hanoi puzzle with a twist - discs start in a **random configuration** across all three towers!

## About

Tower of Hanoi is a mathematical puzzle consisting of three rods and a number of discs of different sizes. Unlike the traditional puzzle where all discs start on one rod, this implementation randomly distributes the discs across all three towers, creating a unique challenge each time you play.

### Objective
Arrange all discs in **descending order** (largest at bottom, smallest at top) on any single tower to win the game.

### Rules
1. Only one disc may be moved at a time
2. Only the topmost disc from a tower can be moved
3. A disc cannot be placed on top of a smaller disc

## How to Play

1. **Start the game** - You'll be prompted to enter the number of discs (recommended: 3-9)
2. **Select source tower** - Choose which tower (1, 2, or 3) to move a disc from
3. **Select destination tower** - Choose where to place the disc
4. **Repeat** until all discs are arranged in order on one tower

The game displays the current state after each move, showing all three towers with their discs represented by numbers (larger numbers = larger discs).

## Technical Details

### Implementation
- **Language**: C++ (Standard C++11 or later)
- **Data Structure**: STL `stack<int>` containers for each tower
- **Features**:
  - Random initial disc placement using `<cstdlib>` and `<ctime>`
  - Input validation for valid moves
  - Clear visual display of game state
  - Win condition detection

### Code Structure
- `generatestacks()` - Creates random initial configuration
- `displaystack()` - Renders the current game state
- `game()` - Main game loop handling user input
- `transfer()` - Validates and executes disc movements
- `movecasesfor1/2/3()` - Handle movement logic for each tower

## Compilation and Running

### Prerequisites
- C++ compiler with C++11 support (g++, clang++, MSVC, etc.)

### Compile
```bash
g++ -o TowerofHanoi TowerofHanoi.cpp
```

### Run
```bash
# Windows
TowerofHanoi.exe

# Linux/Mac
./TowerofHanoi
```

## Example Gameplay

```
Welcome to the game 'Tower of Hanoi'...

  3      |      |
  2      |      |
  1      4      5
-----------------

Select Tower-
Tower 1   Tower 2   Tower 3
```

## Features

- Random initial disc configuration for varied gameplay
- Input validation to prevent invalid moves
- Clear visual representation of towers
- Automatic win detection
- Support for up to 9 discs (recommended for playability)

## Tips

- Start with 3-4 discs to learn the game mechanics
- Plan your moves ahead - Tower of Hanoi requires strategic thinking
- The minimum number of moves for a sorted configuration is $2^n - 1$ (where $n$ is the number of discs)

## License

Feel free to use and modify this code for your own projects!

## Contributing

Pull requests are welcome! Feel free to enhance the game with additional features or improvements.