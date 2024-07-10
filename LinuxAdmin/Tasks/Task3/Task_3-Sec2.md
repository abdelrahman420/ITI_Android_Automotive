# Section 2
## 1. List the user commands and redirect the output to /tmp/commands.list
```bash
compgen -c > /tmp/command.list
```
---
## 2. Edit in your profile to display date at login and change your prompt permanently. 

```bash
#1-open the .profile file to edit in it
vim $HOME/.profile
#2-add date command to display it to user when login
echo "Today's date is: $(date)"

```
---
## 3. What is the command to count the word in a file or number of file in directory. 

### a. Count the number of user commands 
```bash
#the command to count the word in a file or number of file in directory is .
wc
wc -w /tmp/commands #to count words in this file
```
--- 
## 4. What happens if you execute:  
###  a.  cat filename1 | cat filename2  

`cat filename2` will not receive any input from `cat filename1` because cat by itself without arguments simply echoes whatever input it receives. Therefore, cat filename2 will not display anything unless filename1 contains text or data.

---
### b. ls | rm  

ls: Lists the files and directories in the current directory.
`ls | rm`: Sends the output of `ls` as input to `rm` 
`rm` expects filenames as arguments, not input via a pipe `|`. Therefore, `rm` will fail.

---
### c.  ls /etc/passwd | wc –l
`ls /etc/passwd` will output `/etc/passwd` to stdout.
`wc -l` will count the number of lines received from `ls /etc/passwd`, which will be 1. Therefore, the output of this command will be 1.  

---
## 5. Write a command to search for all files on the system that, its name is “.profile”. 
```bash
locate .profile
```
---
## 6.  List the inode numbers of /, /etc, /etc/hosts. 
```bash
# list i node numbers of /
ls -i /
# list i node numbers of /etc
cd ~
ls -i /etc
# list i node numbers of /etc/hosts
cd ~
ls -i /etc/hosts
```
---
## 7. Create a symbolic link of /etc/passwd in /boot. 
```bash
ln -s /etc/passwd /boot/passwd
```
---
## 8. Create a hard link of /etc/passwd in /boot. Could you? Why? 
this is the command to create a hard link but a messege appears tell that we cannot create a hard link
ln: failed to create hard link '/boot/passwd_h' => '/etc/passwd': Operation not permitted

Hard links are restricted to the same filesystem and cannot link files across different filesystems like /etc/passwd to /boot/passwd due to inode limitations.

```bash
ln /etc/passwd /boot/passwd
```
---
## 9. Echo \ it will jump to the next line, and will print > Notice the prompt ”>” what is that? and how can you change it from “>” to “:”. NOTE: search the usage of PS1  
It indicates that the shell is waiting for further input to complete the command.   
to change the ">" to ":" we open the .bashrc file and edit PS1
``` bash
#to change it using PS2
vim ~/.bashrc
export PS2=":"
source ~/.bashrc
```
---
 