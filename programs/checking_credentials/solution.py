import unittest
import re

def validate_email(email):
    return re.match('[^@]+@[^@]+\.[^@]+', email)

def validate_password(password):
    return (
        len(password) > 7 and
        any(c.isdigit() for c in password) and
        any(c.islower() for c in password) and
        any(c.isupper() for c in password) and
        any(c in '~`!@#$%^&*()-_+={}[]|\/:;"\'<>,.?' for c in password)
    )

class TestValidationMethods(unittest.TestCase):
    def test_validate_email(self):
        self.assertTrue(validate_email('example@example.org'))
        self.assertTrue(validate_email('john.appleseed@gmail.com'))
        self.assertTrue(validate_email('someone@mail.somewhere.com'))
        self.assertTrue(validate_email('business+jane@gmail.com'))

        self.assertFalse(validate_email('example.org'))
        self.assertFalse(validate_email('1232 @  .'))
        self.assertFalse(validate_email('@ a @ .'))

    def test_validate_password(self):
        self.assertTrue(validate_password('12AB#..2Ap'))

        self.assertFalse(validate_password('bpb'))
        self.assertFalse(validate_password('papapapappa'))
        self.assertFalse(validate_password('PPaapPPA@@'))
        self.assertFalse(validate_password('@@@@33313'))

# uncomment to run unit test
#unittest.main()

if validate_email(input('email? ')):
    if validate_password(input('password? ')):
        print("you're all set!")
    else:
        print('invalid password.')
else:
    print('invalid email.')
