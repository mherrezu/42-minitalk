# 📟 MINITALK - 42

# ⚡ What is Minitalk?

The purpose of this project is to create a small data exchange program using UNIX signals between client and server.

![showcase](https://github.com/mherrezu/42-minitalk/assets/114182402/5bd62c1a-e0ff-441e-b529-a6d0ddb64b30)

# :computer: Technologies

This Project was made with:

* [C - SIGNAL_H](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

# ⚙️ How to Run
```bash
# *************COMMANDS************ #
# run - run compile all the libtest with the your libft and run the all tests
$ make
# clean - remove the .o and .c files 
$ make clean
# fclean - remove the .o and .c files and the .a
$ make fclean
# re - remove all files and remake all
$ make re

# after run one time the the comand ``make``, run server and copy its PID to the
# client alongside the message you want to send.
$ ./server
$ ./client <server_PID> <message> 

```

