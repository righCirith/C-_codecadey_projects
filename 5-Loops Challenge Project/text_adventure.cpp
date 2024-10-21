/*
Created on Sunday Oct 20 20:06:40 2024
Author: @righCirith
Module 5: Loops Chanllenge Project
Project: Build Text Adventure
*/

// Project Goals: Create a C++ text adventure with the storyline of your choosing. The program should use your knowledge of C++ conditionals, logic, and loops.

/* Project Requeriments:
    1. A storyline with: a beginning and at least three possible endings
    2. At least three branch points where the user must make a choice about what to do next: give the user at least two choices and accept user input.
    3. incorporate at least one kind of loop: 
    to validate user input (e.g., check if the user entered something other than your listed choices and then list the choices again), to give the user multiple chances to choose a specific outcome (e.g., give a user three chances to pick an option that won’t get them killed), to continue the adventure until the user makes a particular choice
    4. should handle user choices using conditional logic.
    5. Optional: Add ASCII art.
*/


#include <iostream>

int main() {
    // Title
    std::cout << "=======================\n";
    std::cout << "       Snow Man        \n";
    std::cout << "========================\n";

    std::cout << "Diary:\n" << "Expedition 2024, Location: Antartica.\n" << "Day 24\n";
    std::cout << "At 24,000 feet, visibility is only 3 meters. Noises at night are louder; I feel like I'm not alone. I found strange tracks in the snow that don't belong to any known animal.\n";
    std::cout << "*************************************\n";
    std::cout << "       / \\          /\\           /\\  \n";
    std::cout << "  /\\  /   \\/ \\  /\\ /  \\   /\\ /\\ /  \\ \n";
    std::cout << " /  \\/     \\  \\/  \\    \\/  \\  \\    \n";
    std::cout << "*************************************\n";

    // Decision Point 1
    int decision1;

    std::cout << "As Jack sets up camp for the night, he can't shake the feeling of being watched. The howling winds seem to carry whispers, and shadows flicker at the edge of his vision. He dismisses it as paranoia after all, the isolation is playing tricks on him.\n" << "--Jack can either--\n";
    std::cout << "1) Investigate the noise\n";
    std::cout << "2) Stay in the tent and ignore it\n";
    std::cout << "Choice: ";

    // capture user choice
    std::cin >> decision1;
    
    std::cout << "  .     .    .     .       \n"
                 "     .      .     .     .     .\n"
                 "               .     .     .     .\n"
                 "          .            .   .    .    .\n"
                 "                .      .         .     .\n"
                 "    .  .          .   .     .        .\n"
                 "               _/\\\\_   _/\\\\_   _/\\\\_\n"
                 "              /      \\\\ /      \\\\ /    \\\n"
                 "     .       /   _    \\\\     _  /      |\n"
                 "             /   / \\\\    \\\\   / \\\\      |\n"
                 "            /___/___\\\\____\\\\_/___\\\\______|\n";


    // input validation
    while (decision1 < 1 || decision1 > 2) {
        std::cout << "Invalid input. Please choose 1 or 2: ";
        std::cin >> decision1;
    }


    
    if (decision1 == 1) {     // 1) Investigate the noise
        std::cout << "He steps outside, the cold biting at his skin. In the moonlight, he sees footprints leading away from his camp large, unusual footprints. Suddenly, he spots a hulking figure in the distance: the Snowman, a legendary creature said to roam these mountains.\n";

        int decision1_5;
        // Desicion point 2
        std::cout << "--Jack Either--\n";
        std::cout << "1) Follow the footrprints to learn more.\n";
        std::cout << "2) Return to his tent and barricade himself\n";
        std::cout << "Choice: ";

        // capture user choice
        std::cin >> decision1_5;

        // Input validation
        while (decision1_5 < 1 || decision1_5 > 2) {
        std::cout << "Invalid input. Please choose 1 or 2: ";
        std::cin >> decision1_5;
    }       
        
    
        if (decision1_5 == 1) { // 1) Follow the prints to learn more
            std::cout << "The tracks lead him to a hidden cave. Inside, he discovers ancient carvings and relics but also realizes he's not alone the Snowman emerges from the shadows.\n";
            // ending 1: Jack escapes
            std::cout << "Thinking quickly, Jack distracts the creature with a flare from his pack. He escapes back to his camp, heart racing, and makes it back to civilization, sharing the legend of the Snowman and his harrowing tale.\n";
        } else { // 2) Return to his tent and barricade himself
            std::cout << "He barricades himself, trying to stay calm. The noises grow louder, and soon the Snowman is clawing at his tent, trying to get in.\n";
            //ending 2 Jack is killed
            std::cout << "The creature breaks through, and in a panic, Jack fights back. But it's no use; the Snowman is too strong, and Jack meets a tragic end, lost to the frozen wilderness.\n";
        }
    } else { // 2) Stay in the tent and ignore it
        std::cout << "The noises eventually fade, and he falls asleep. In the morning, he finds the Snowman sitting quietly outside his tent, seemingly uninterested in harm.\n";
        // ending 3 Jack confronts the creature
        std::cout << "Summoning his courage, Jack confronts the creature with a makeshift weapon. In a desperate struggle, he manages to outsmart the Snowman, using the environment to his advantage. He escapes, leaving the creature behind, forever haunted by his encounter.\n";
    }

    return 0;
}
