# Getting Started with Git and GitHub

A few steps, biased toward quick and easy use for DHSI 2015: 

1. Download and install Git at [git-scm.com](https://git-scm.com/). 
2. Sign up for GitHub at [github.com/join](https://github.com/join).
3. Create and name a public repository ("repo") without a ReadMe file.  
4. Open your Git Bash app (Windows) or terminal (OSX). We'll call this the "command line." 
5. Move to your desktop by entering `cd ~/desktop/` in the command line. 
6. Enter `git config --global user.name YOURNAME` (replacing YOURNAME with the name you want to attribute to your work). 
7. Enter `git config --global user.email EMAIL` (replacing EMAIL with the email address you used for GitHub).  
8. Enter `git init dhsi2015` (which creates a directory on your desktop).  
9. Enter `cd dhsi2015` (change your directory to `dhsi2015`).  
10. Enter `touch README.md` (create a README file for your repository). 
11. Enter `open README.md` (open the README file).
12. In the file, describe your repo. The first line should start with a `#` and be followed by a title for your repo. This is your header, with the `h1` tag in HTML.
13. Save your file: `control+S` or `command+S`. 
14. In the command line, enter `git remote add origin https://github.com/handle/repo.git` (replacing `handle` with your GitHub handle and `repo` with the name of the repo you create during Step 3). 
15. Enter `git remote -v` (verifying your remote address). 
16. Enter `git add --all` (add all changes made to your repo). 
17. Enter `git commit -m 'message'` (replacing `message` with a description of your changes, e.g., `created README.md`). 
18. Enter `git push origin master` (push your files to the remote repo stored at GitHub.com). 
19. Visit your repo online to confirm changes. 
20. As you add and change files to your local repo, repeat Steps 16 - 18 above.  
