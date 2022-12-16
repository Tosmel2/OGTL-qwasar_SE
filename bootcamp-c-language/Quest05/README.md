# Welcome to Quest05
***

## Task
Back to do some shell.

Objective is to be more expert with find and discover -type file option, globing (* replace any characters...) and --exec to be able to run another command. (for example basename :D)
Finally, pipe (|) let's you chain command.

## Description
- <strong>ex00</strong> Write a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. It should include ".", the starting directory.

- <strong>ex01</strong>In a file called my_clean place the command line that will search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or a name that start and end by #
The command line will print and delete all files found.
Only one command is allowed: no ; or && or other gitaneries.

- <strong>ex02</strong> => Write a command line that searches for all file names that end with ".sh" (without quotation marks) in the current directory and all its sub-directories. It should display only the name of files without the extension .sh
<code>find . -type f -name '*.sh' \-exec sh -c 'for n; do basename "$n" .sh; done' sh {} + </code>
This command uses the find command to search for files with the .sh extension in 
the current directory (.) and all its sub-directories (the -type option specifies 
that the search should be limited to files only, and the -name option specifies the 
pattern to match). The -exec option allows you to specify a command to run on each 
file that matches the search criteria. In this case, the command uses a sh shell to 
run a loop that iterates over each file and uses the basename command to display the name 
of the file without the .sh extension.

- <strong>ex03</strong> => Patch transform a file origin to a fixed file applying the transformation or you can called it patch.
<code>patch a -o my_patch < sw.diff </code>


## Resources

https://unix.stackexchange.com/questions/391872/command-line-bash-sh-filter
https://www.thegeekstuff.com/2014/12/patch-command-examples/

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>