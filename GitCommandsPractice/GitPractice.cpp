/*
=== GIT COMMAND LINE PRACTICE FILE ===

STEP-BY-STEP GIT JOURNEY:

STEP 1: FILE CREATION 
- Command: echo "content" > GitPractice.cpp
- Hindi: File create kari terminal se
- English: Created this file using terminal command

STEP 2: CHECK STATUS
- Command: git status
- Output: "Untracked files" (red color)
- Hindi: Git ko pata nahi tha ki ye file hai
- English: Git didn't know this file existed yet

STEP 3: ADD TO STAGING 
- Command: git add GitPractice.cpp
- Hindi: File ko staging area mein add kiya
- English: Added file to staging area (ready to commit)

STEP 4: CHECK STATUS AGAIN
- Command: git status
- Output: "Changes to be committed" (green color)
- Hindi: Ab file commit ke liye taiyar hai
- English: File is now ready to be committed

STEP 5: COMMIT (NEXT STEP)
- Command: git commit -m "Your message here"
- Hindi: File ko Git history mein save karega
- English: Will save file to Git history permanently

STEP 6: PUSH TO GITHUB (FINAL STEP) 
- Command: git push origin main
- Hindi: Local changes ko GitHub pe upload karega
- English: Upload local changes to GitHub repository

GIT FILE STATES
1. Untracked (red) → Git ko pata nahi / Git doesn't know
2. Staged (green) → Commit ke liye ready / Ready to commit  
3. Committed → Git history mein save / Saved in Git history
4. Pushed → GitHub pe upload / Uploaded to GitHub

USEFUL COMMANDS :
- git status → Current state dekhne ke liye / Check current state
- git add . → Sab files add karne ke liye / Add all files
- git log → Previous commits dekhne ke liye / See commit history
- git diff → Changes dekhne ke liye / See what changed
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Git Command Line Practice!" << endl;
    return 0;
}
