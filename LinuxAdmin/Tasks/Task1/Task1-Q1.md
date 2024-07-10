### 1.List three Linux Distributions.
```
1-ubunto
2-fedora linux
3-debian

```
### 2.From the slides what is the man command used for?
```
used to display the manual pages of other commands. It provides detailed documentation about a command's syntax, options, and usage.

```
### 3.What is the difference between rm and rmdir using man command?
```
rm is used to delete files or directories by using -r option
rmdir is used to delete empty directories only 
```
### 5.Copy the /etc/passwd file to your home directory making its name is mypasswd
```bash
#use command
cp /etc/passwd ~/mypasswd
```
### 6.Rename this new file to be oldpasswd
```bash
#use command
mv ~/mypasswd ~/oldpasswd

```
### 7.You are in /usr/bin, list four ways to go to your home directory
```bash
#1st way use
cd

#2nd way use
~cd

#3rd way use
cd $HOME

#4th way use
cd /home/abdelrahman

#abdelrahman is my username
```
### 8.List Linux commands in /usr/bin that start with letter w
```bash
#use command 
ls /usr/bin/w*
#output
wall
watch
wc
wget
whereis
which
who
whoami

```
### 9.What command "type" is used for?
```
used to determine the type of command
```
### 10.Show 2 types of command file in /usr/bin that start with letter c
```bash
cp
/usr/bin/cp
chmod
/usr/bin/chmod
```
### 11.Using man command find the command to read file. (Note: man take option)
```bash
man -k read
```

### 12.What is the usage of apropos command?
```
used to search the manual page descriptions for keywords     
It is helpful for finding commands when you know a part of their functionality but doesnot now the exact name of the command
```