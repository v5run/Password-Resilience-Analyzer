## Password-Resilience-Analyzer
A software program using the C language, aptly named the "Password Resilience Analyzer". This program is tasked with assessing the strength of a password, bearing in mind a set of predetermined rules and guidelines in README.


### Main Menu
Implement a user-friendly main menu interface to navigate through the program.

- Display a clear and intuitive main interface.
- Handle user input for option selections accurately.
- Provide accurate responses for each selection.

Options:

1. **Test a New Password:** Allows users to input a password for strength analysis.
2. **View Strength of the Last Tested Password:** Displays the strength rating (Weak, Moderate, Strong) of the previously tested password.
3. **Exit:** Closes the program.

### Password Input
Prompt the user to input a password and store it for analysis.

- Prompt the user to enter a password for testing.
- Utilize an array (string in C) to store the entered password.
- Display an error message if the entered password is less than 8 characters and prompt the user to re-enter a longer password.

### Strength Tests
Evaluate the password based on various criteria.

- Check for the presence of lowercase letters.
- Check for the presence of uppercase letters.
- Check for numerical digits.
- Check for special characters such as !@#$%^&*().
- Award a score for lengthy passwords (12+ characters).

### Functions to Implement
Create dedicated functions for each criterion:

- `hasLowercase()`: Does the password contain lowercase letters?
- `hasUppercase()`: Does the password have uppercase letters?
- `hasDigit()`: Does the password contain numbers?
- `hasSpecialChar()`: Are there special characters in the password?
- `evaluateStrength()`: Based on the previous checks, what's the total strength score of the password?

### Password Strength Score
Compute the total strength of the password as a score, ranging from 0 (weakest) to 5 (strongest).

- Add a point to the score for each met strength criterion.

### Output
Categorize the password based on the computed score:

- 0-2 points: "Weak"
- 3-4 points: "Moderate"
- 5 points: "Strong"

Display the strength category to the user after analysis.
