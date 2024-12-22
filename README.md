<h2>Introduction</h2>
<p>Tower-of-Hanoi is a mathematical game or puzzle consisting of three rods and a number of disks of various diameters, which can slide onto any rod. The puzzle begins with the disks stacked on one rod in random order, The objective of the puzzle is to move the entire stack to one of the other rods, obeying the following rules:</p>
<br><p>1. Only one disk may be moved at a time.</p><br>
<p>2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod</p><br>
<p>3. No disk may be placed on top of a disk that is smaller than it</p><br>
<p>Once all the disks are in ascending order, you win the game</p>

<h2>Functionality</h2>
<p>This game is created using stacks, the 3 rods are represented as stacks of int data type, rather than traditional fixed number of disks in the game, this code contains no limit for disks (only int limit i.e  2,147,483,647), the top most data is transfered from one stack to the other with the correct conditon met (rules of game)</p>

<h2>How to play?</h2>
<p>Rules are once again repeated when the game is started, first total number of disks are taken as input from user which is max till 9 (max 9 disks) for making the game easier, ofcourse 9 disks are not easy but imagine playing it with 2,147,483,648 disks.</p><br>
<p>First you have to select the tower number from which topmost disk you want to move and then the tower number to where you want to place the disk.</p><br>
<p>Keep replacing disks until you win the game, hopefully</p>
