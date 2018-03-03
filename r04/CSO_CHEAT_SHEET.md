# Tutorial 4
I, fegin, will read the document and make sure I understand the logistics and instructions. In the future, I'll try to fix these issues with the instructions specified below. If I have any further question I'll ask on Piazza.


## Logstics
--------
1. For all future labs and recitations, the scores will be post to NYU classes. CSO graders will post on Piazza when the scores are ready. 
   * If I have any question about the score, I must contact CSO graders before the deadline specified in the post.
2. All the deadlines are 11:59 PM on the due date. Any late submission will not be considered.
   * For example, if I, fegin, submit at 0:06 AM for recitation, I realized that submit will be ignored.
   * Some students submitted the code 10 minutes late and and got 0 for their recitation exercises.
3. All the future recitation deadlines will be on Tuesday nights instead of Monday (this recitation is due on Friday).
4. I must follow all the instructions CSO graders and instructors post on Piazza. Especially the ones pinned by the graders.
   * For example, CSO graders have posted how to use grace days for labs. In the future, any submission with incorrect formats will be ignored. 
5. When doing labs, I have to always follow the instructions. I, fegin, won't change the output format. If I don't understand the output format, I'll ask on Piazza.
6. Plagiarism examples:
   * For game of life, I can look up how to read a file in C language on the Internet. But the logic of game of life must be entirely implemented by myself.


## GIT instructions
----------------
I'll learn how to use GIT through [Git tutorial](https://try.github.io/levels/1/challenges/1) and [Learning Git branching](https://learngitbranching.js.org/).

### What I should not do
1. I'll never use `git add -a`. Instead, I should always specify what files I want to commit, e.g., `git add e1.c e2.c e3.c`. Using `git add -a` will result in future git conflicts.
2. I'll never modify file through https://github.com. I'll only use the website to check my updates.

### Initialization recitation repository
1. `git clone https://github.com/nyu-cso18/recitation-fegin`
2. `cd recitation-fegin`
3. `https://github.com/nyu-cso18/cso18-recitation`
4. `git pull upstream master`

### Initialization labs repository
1. `git clone https://github.com/nyu-cso18/labs-fegin`
2. `cd labs-fegin`
3. `https://github.com/nyu-cso18/cso18-labs`
4. `git pull upstream master`

### How to fix labs repository when it is corrupt.
When performing any GIT command and I get a message like ![the figure](https://github.com/nyu-cso18/cso18-recitation/blob/staff/r04/corrupt.png). I'll do following instructions to fix the problem.

1. I'll first backup the folder with the command `mv labs-fegin labs-fegin-backup`. I realize that I may change the folder name before. I'll change the instruction according to my folder setting.
2. After backuping the folder, I'll do [Initialization labs repository]()
3. Copy the files I already modified in labs-fegin-backup back to labs-fegin. I realize that I can only copy modified C files (.c, .h) back to the newly initialized folder.

### How to fix recitation repository when it is corrupt.
When performing any GIT command and I get a message like the figure. I'll do following instructions to fix the problem.

1. I'll first backup the folder with the command `mv recitation-fegin recitation-fegin-backup`. I realize that I may change the folder name before. I'll change the instruction according to my folder setting.
2. After backuping the folder, I'll do [Initialization recitation repository]()
3. I'll copy the files I already modified in recitation-fegin-backup back to recitation-fegin. I realize that I can only copy modified C files (.c, .h) back to the newly initialized folder.

### How to fix labs/recitation repository when there are conflicts.
When performing any GIT command and I get a message like the figure. I'll do following instructions to fix the problem.

1. I'll first type the command `git commit`. The command will show me the files are conflicted.
2. If I don't care about the correctness of those files, I'll type the command `git add CONFLICT_FILE_PATH`. I'll change CONFLICT\_FILE\_PATH to the paths to those conflicted files.
3. If I care about the correctness of those files, I'll edit those files. Remove unwanted lines, e.g. <<<<, >>>> and HEAD. And I'll use the same command as step 2 to add the conflicted files.
4. Then I have to do the commad `git commit`. If the command shows there are still some conflict. I'll start from step 2.
5. Finally, I have to do the command `git push origin master`.

### How to deal with the merge message.
When doing `git pull upstream master` for ether labs or recitation repository and I see a message like the figure, I'll type `ctrl + x`. 
