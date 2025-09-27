# Meteor Dodging 🚀

![Made with Scratch](https://img.shields.io/badge/Made%20with-Scratch-blue?logo=scratch)
![CS50 Project](https://img.shields.io/badge/CS50-Project-red?logo=harvard)

A Scratch arcade game where you dodge falling meteors with your rocket.  
Arrow keys to move. Survive as long as possible—difficulty ramps up every 10 seconds, and high score is tracked.

## 🕹️ How to Play
- Press the green flag
- Press `Space` to start
- Use `←` and `→` to move
- Avoid meteors falling from the sky
- Your score increases every second
- Game speeds up over time
- Lose all lives? Press Space to restart

## 🎮 Features
- Clone-based meteor spawning with random positions and size
- Score + high score
- Difficulty scales every 10s via custom block `increaseDifficulty(seconds)`
- Game state machine: Title → Gameplay → Game Over
- Broadcast messaging and sprite coordination
- UI, animations, lives, and invisibility after hit
- Built entirely in [Scratch](https://scratch.mit.edu)

## 📁 Files
- `meteor-dodging.sb3` — the main Scratch project
- (Optional) `assets/` — screenshots or GIFs of gameplay

## 📝 License
MIT — you’re free to use, share, remix with credit.

