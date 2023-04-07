# math-1116-projects
projects from c++ (year 1)

## Running Code

### Compiling

Since C++ is a compiled language [see here](https://www.youtube.com/watch?v=I1f45REi3k4), before we run the code, we have to compile it into a binary using the `gcc` compiler.

To compile a program, we use the following command:

```bash
$ g++ -o {OUTPUT_BINARY_FILE} {INPUT_CPP_FILE}
```

Where:
- `{OUTPUT_BINARY_FILE}` is the name of the binary file that we want to create
  - **MAKE SURE BINARY FILE HAS A `.out` EXTENSION**. This ensures that these files will not get pushed to GitHub (since `.out` is in the `.gitignore`), which is not a good practice.
- `{INPUT_CPP_FILE}` is the name of the `cpp` file that we have already written

The `-o` flag tells the command that the next string is going to be the name of the `-o`utput file.

For example, if we wanted to compile a file named `hello_world.cpp` to an executable file named `hello_world.out`, we would do:

```bash
$ g++ -o hello_world.out hello_world.cpp
```

### Running

Once our code is compiled, we just have to execute the binary files by running the file from it's directory as:

```bash
$ ./{FILE_NAME}
```

So following the same example above, if we wanted to run the `hello_world.out` file that we compiled, we would run:

```bash
$ ./hello_world.out
```


## Git Instructions

### Adding New Code

1. Add code to the repository folder (`math-1116-projects`)
2. Run the following git commands: 

```bash
$ git add .
$ git commit -m "COMMIT MESSAGE"
$ git push
```

### Pulling Code

1. From the repository folder (`math-1116-projects`)
2. Pull the code from the remote server using the following command:

```bash
$ git pull
```
