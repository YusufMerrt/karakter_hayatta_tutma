

```markdown
# Character Management Game

This is a simple text-based character management game implemented in C. The goal is to maintain the character's needs to prevent it from dying due to hunger, lack of sleep, or poor health.

## Table of Contents

- [Introduction](#introduction)
- [Compilation](#compilation)
- [Usage](#usage)
- [Functions](#functions)
  - [Yemek_ye](#yemek_ye)
  - [Uyku_uyu](#uyku_uyu)
  - [Sevgi_gor](#sevgi_gor)
  - [Sosyal_ol](#sosyal_ol)
  - [Saglikli_yasam](#saglikli_yasam)
  - [Al_egitim](#al_egitim)
  - [Hijyen](#hijyen)
  - [Tuvalet](#tuvalet)
  - [Eglence](#eglence)
  - [Para_kazan](#para_kazan)
- [Needs](#needs)
- [Game Loop](#game-loop)

## Introduction

The game maintains a list of needs for a character, each represented by a level from 0 to 10. The character must engage in various activities to keep these levels balanced. If certain needs reach 0, the character will die from the corresponding deficiency.

## Compilation

To compile the program, use the following command in your terminal:

```sh
gcc -o character_game character_game.c
```

Replace `character_game.c` with the name of your C file if different.

## Usage

Run the compiled program using:

```sh
./character_game
```

You will be prompted to enter the character's name and age, then you can choose different activities to maintain the character's needs.

## Functions

### Yemek_ye

This function decreases all needs by 1 and increases the `Tokluk` need based on the food consumed.

- `1:doner` - Adds `number + 3` to `Tokluk`
- `2:corba` - Adds `number + 2` to `Tokluk`
- `3:kuruyemis` - Adds `number + 1` to `Tokluk`

### Uyku_uyu

This function increases the `Uyku` need by 2 if it is less than 8 and decreases all other needs by 1. It recursively calls itself up to 3 times if necessary.

### Sevgi_gor

This function decreases all needs by 1 and increases the `Sevgi` need based on the choice:

- `1` - Visit family: Adds 4 to `Sevgi`
- `2` - Visit girlfriend: Adds 3 to `Sevgi`, decreases `Para` by 1
- `3` - Pet your pet: Adds 2 to `Sevgi`

### Sosyal_ol

This function decreases all needs by 1 and increases the `Sosyallesme` need based on the choice:

- `1` - Meet friends: Adds 4 to `Sosyallesme`, decreases `Para` by 1
- `2` - Go to the park: Adds 3 to `Sosyallesme`
- `3` - Go to the club: Adds 2 to `Sosyallesme`, decreases `Para` by 1

### Saglikli_yasam

This function decreases all needs by 1 and increases the `Saglik` need based on the choice:

- `1` - Go to the gym: Adds 4 to `Saglik`
- `2` - Eat healthy: Adds 4 to `Saglik`
- `3` - Do yoga: Adds 3 to `Saglik`

### Al_egitim

This function decreases all needs by 1 and increases the `Egitim` need based on the choice:

- `1` - Go to school: Adds 4 to `Egitim`
- `2` - Go to a course: Adds 3 to `Egitim`, decreases `Para` by 1
- `3` - Study: Adds 2 to `Egitim`

### Hijyen

This function decreases all needs by 1 and increases the `Hijyen` need based on the choice:

- `1` - Clean the house: Adds 4 to `Hijyen`
- `2` - Take a shower: Adds 2 to `Hijyen`
- `3` - Brush your teeth: Adds 2 to `Hijyen`

### Tuvalet

This function decreases all needs by 1 and increases the `Tuvalet` need based on the choice:

- `1` - Toilet: Adds 4 to `Tuvalet`
- `2` - Big toilet: Adds 3 to `Tuvalet`
- `3` - Small toilet: Adds 2 to `Tuvalet`

### Eglence

This function decreases all needs by 1 and increases the `Eglence` need based on the choice:

- `1` - Go to a concert: Adds 3 to `Eglence`, decreases `Para` by 1
- `2` - Play computer games: Adds 2 to `Eglence`
- `3` - Play bowling: Adds 2 to `Eglence`

### Para_kazan

This function decreases all needs by 1 and increases the `Para` need based on the choice:

- `1` - Get a full-time job: Adds 4 to `Para`, decreases `Sosyallesme` by 1
- `2` - Get a part-time job: Adds 3 to `Para`
- `3` - Work daily: Adds 2 to `Para`

## Needs

The game tracks the following needs, each with a level from 0 to 10:

- Tokluk (Hunger)
- Uyku (Sleep)
- Sevgi (Love)
- Sosyallesme (Socialization)
- Saglik (Health)
- Egitim (Education)
- Hijyen (Hygiene)
- Tuvalet (Toilet)
- Eglence (Entertainment)
- Para (Money)

## Game Loop

The game runs in a loop, allowing the player to choose different activities to maintain the character's needs. If any critical need (`Tokluk`, `Uyku`, `Saglik`) reaches 0, the character will die, and the game will end.

Additional needs impact each other:

- If `Sevgi` is 0, `Saglik` decreases.
- If `Hijyen` is 0, `Saglik` decreases.
- If `Tuvalet` is 0, `Hijyen` decreases.
- If `Para` is 0, `Saglik` decreases.

The character's needs are printed after each turn.

---

Enjoy managing your character's life and try to keep all needs balanced!
```
