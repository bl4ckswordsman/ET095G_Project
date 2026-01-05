# ET095G (Introduction to Embedded System Programming) Project [![Codacy Badge](https://app.codacy.com/project/badge/Grade/39a3abd75c4449a38c3cb5271f14811f)](https://www.codacy.com/gh/bl4ckswordsman/ET095G_Project/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=bl4ckswordsman/ET095G_Project&amp;utm_campaign=Badge_Grade)

### NXP LPC1768 Dinosaur Game Project

#### 1. Introduction
This project implements an endless runner game on the NXP LPC1768 mbed application board. The player controls a walking dinosaur, using the joystick to jump over cactus obstacles. The system tracks survival time as a score, displays high scores, and saves data to a file. The user interface integrates the LCD display, joystick, potentiometer, tickers, and LEDs.

#### 2. Implementation Analysis

*   **LCD Display**
    The LCD serves as the primary visual interface, rendering bitmaps for the dinosaur, background, splash screen, and obstacles using the C12832 library. Dynamic functions update the coordinates of moving elements within the main loop. Specifically, the linear movement of the cactus is driven by a ticker interval.

*   **Joystick Control**
    The joystick handles game state and player movement:
    *   **Center Button:** Initiates the game from the splash screen.
    *   **Up Button:** Triggers the jump mechanic to avoid obstacles during gameplay.

*   **Potentiometer (Visual Modes)**
    The analog potentiometer is used for aesthetic customization, allowing the user to toggle between **Light** and **Dark** modes. The system reads the potentiometer's range to switch between standard and inverted bitmap asset sets.

*   **Tickers**
    Tickers manage precise timing events:
    *   **Gameplay:** One ticker controls the refresh rate of the cactus movement.
    *   **High Score Celebration:** Two additional tickers trigger a rapid LED blinking sequence when a new record is set.

*   **File Management**
    The system utilizes file I/O to maintain a persistent text file of score history. Upon "Game Over," the logic retrieves the saved data to compare the current session against previous records, determining if a new high score has been achieved.
