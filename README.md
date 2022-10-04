Subrahmanyam Mullangi, CS2110C Homework 8
***
# Game: Froot Shoot
## Description:
This game took inspiration from Fruit Ninja, a mobile game where random fruit fly up and are sliced with users' swipes on a smartphone screen. However, since the game would be on a gameboy advance (without touch screen), I created a version involving shooting these fruits instead of slicing them. The game revolves around shooting as many fruits as possible with a limited amount of time (60 seconds) and bullets (30). After one of these runs out, the game is over, and the end screen will display the score (amount of fruits hit) and prompt you to start over.
***

## Playing the Game: 
Playing the game is simple to understand, but difficult to master! Here is a simple breakdown:


### Navigation: 
From the start screen, **click the A button (Z key) or the Start button (Enter key) to start** the game. From the end screen, **click the A button (Z key) or the Start button (Enter key) to return to the start**. In any part of the game, **clicking the Select button (Backspace key) will reset the entire game** and return to the start screen.


### The Game: 
The player controls the crosshairs, which indicate where bullets will be fired if the player decides to shoot. The crosshairs cannot be moved off of the screen. In addition, everywhere the player fires will leave a bullethole driven into the wall. If the player can hit a fruit, they will know it due to the score going up and from seeing a big splatter of the mauled fruit all over the backdrop. A player's score, bullets left, and time left are all displayed during gameplay via a black infobar running along the top of the screen.


### Controls: 
**Hold directions on the D-Pad (arrow keys) to move** the crosshairs left, right, up, down, or diagonally. **Press A (Z key) to shoot** once at the location of the crosshairs. Holding the A button will NOT shoot multiple times; shooting is edge triggered to prevent breaking the game from being too trigger-happy.