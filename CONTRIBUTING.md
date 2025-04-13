# Contributing Guide

Thank you for your interest in contributing! 🎉  
This project welcomes contributions that help others learn and grow 💡

## 📌 Steps to Contribute

1. **Fork the Repository**

Start by forking this repository to your own GitHub account.

2. **Clone the Repository**

3. **Create a New Branch**

Create a new branch for your change:
```bash
git checkout -b add-problem-name
```

---

## Adding a New Problem

If you're adding a **new LeetCode problem**, follow these steps:

1. **Create a new folder** inside the root directory with the exact problem name.  
   Example: `Add_Two_Numbers`

2. **Inside that folder**, create a new subfolder with the name of the programming language (e.g. `C`, `Python`, `Java`, etc.)

3. **Add your solution** file there (e.g. `solution.c`).

4. **Create** a `README.md` inside the problem folder explaining briefly:
   - The idea of your solution
   - Time and space complexity (optional)
   - Any edge cases handled

5. **Update the main `README.md`** file:
   - Add a new entry in the table with:
     - Problem ID (LeetCode ID)
     - Problem Title (with a link to the LeetCode problem)
     - Link to your solution (to this repo)
     - Difficulty

---

## Adding a New Language to an Existing Problem

If the problem already exists, and you just want to add a new language version:

1. Navigate to the problem's folder.
2. Create a new folder for the language (e.g. `Python`).
3. Add your solution file (e.g. `solution.py`) and update the `README.md` in that folder if needed.
4. No need to add a new row in the main table — just add a new link inside the existing row

---

## Before Submitting

- Make sure your code compiles/runs correctly.
- Keep folder and file names clean and consistent.
- Open a **pull request** with a clear title and description.

---
