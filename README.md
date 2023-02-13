# mini_Shell

A simplified shell prompt based on bash

## Installation
Use make install to install readline library if needed
```bash
make install
```

## Usage
* Use make to compile
* Run with ./minishell
* Enter commands in prompt
* Use exit command to exit the shell or ctrl + d

```bash
make
./minishell
```

## Functionalities
* pipes (|)
* redirections (<, >, >>, <<)
* signals (ctrl + c, ctrl +d)
* env variables (set, unset, read with '$')
* bash commands

## Example
```bash
in.txt < wc -l | cat -e > out.txt
```
