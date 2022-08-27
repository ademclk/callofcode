import re
class ValidEmailAndPassword:
    def __init__(self, email, password):
        self.email = email
        self.password = password

    def set_email(self, email):
        self.email = email
        
    def set_password(self, password):
        self.password = password

    def validEmail(self):
        # Email Regex is extracted from: https://www.tutorialspoint.com/python-program-to-validate-email-address
        emailRegex = "^[a-zA-Z0-9-_]+@[a-zA-Z0-9]+\.[a-z]{1,3}$"
        if re.match(emailRegex, self.email):
            return True
        return False

    def validPassword(self):
        # Check minimum length
        if len(self.password) <= 7:
            return False
        # Special characters list. More special characters can be added as needed
        # Multiple ways to do this, can use regex, set/list.
        specialChar = '!@#$%^&*()_-'

        # Check password contains digit, uppercase, lowercase and special character
        containsDigit = any(char.isdigit() for char in self.password)
        containsUpperCase = any(char.isupper() for char in self.password)
        containsLowerCase = any(char.islower() for char in self.password)
        
        containsSpecialCharacter = any(char in specialChar for char in self.password)
        if containsDigit and containsUpperCase and containsLowerCase and containsSpecialCharacter:
            return True
        return False
    
if __name__ == "__main__":
    validCheck = ValidEmailAndPassword("username@company.com", "P@55word")
    print(validCheck.validEmail())
    print(validCheck.validPassword())
