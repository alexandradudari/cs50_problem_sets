# MARIO LESS

Implement a program that prints out a half-pyramid of a specified height, per the below.

```
$ ./mario
Height: 5
    ##
   ###
  ####
 #####
######
```

```
$ ./mario
Height: 3
  ##
 ###
####
```

## Specification

* Write, in a file called mario.c in ~/workspace/pset1/mario/less/, a program that recreates this half-pyramid using hashes (#) for blocks.

* To make things more interesting, first prompt the user for the half-pyramid’s height, a non-negative integer no greater than 23. (The height of the half-pyramid pictured above happens to be 8.)

* If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again.

* Then, generate (with the help of printf and one or more loops) the desired half-pyramid.

* Take care to align the bottom-left corner of your half-pyramid with the left-hand edge of your terminal window.

## Usage

Your program should behave per the example below. Assumed that the underlined text is what some user has typed.

```
$ ./mario
Height: 4
   ##
  ###
 ####
#####
```

```
$ ./mario
Height: 0
```

```
$ ./mario
Height: -5
Height: 4
   ##
  ###
 ####
#####
```

```
$ ./mario
Height: -5
Height: five
Height: 40
Height: 24
Height: 4
   ##
  ###
 ####
#####
```

# MARIO MORE

Implement a program that prints out a double half-pyramid of a specified height, per the below.

```
$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```
## Specification

* Write, in a file called mario.c in your ~/workspace/pset1/mario/more/ directory, a program that recreates these half-pyramids using hashes (#) for blocks.

* To make things more interesting, first prompt the user for the half-pyramids' heights, a non-negative integer no greater than 23. (The height of the half-pyramids pictured above happens to be 4, the width of each half-pyramid 4, with an a gap of size 2 separating them.)

* If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again.

* Then, generate (with the help of printf and one or more loops) the desired half-pyramids.

* Take care to left-align the bottom-left corner of the left-hand half-pyramid with the left-hand edge of your terminal window.

## Usage

Your program should behave per the example below. Assumed that the underlined text is what some user has typed.

```
$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

```
$ ./mario
Height: 0
```

```
$ ./mario
Height: -5
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

```
$ ./mario
Height: -5
Height: five
Height: 40
Height: 24
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```
