import unittest
from valid_email_password import ValidEmailAndPassword

class TestValidEmailAndPassword(unittest.TestCase):
    @classmethod
    def setUpClass(self):
        self.valid = ValidEmailAndPassword('', '')

    # Email validation test cases
    def test_empty_email(self):
        self.valid.set_email('')
        self.assertFalse(self.valid.validEmail())
     
    def test_email_with_no_username(self):
        self.valid.set_email('@company.com')
        self.assertFalse(self.valid.validEmail())

    def test_email_with_no_company_name(self):
        self.valid.set_email('username@.com')
        self.assertFalse(self.valid.validEmail())

    def test_email_with_no_domainname(self):
        self.valid.set_email('username@company')
        self.assertFalse(self.valid.validEmail())
 
    def test_email_with_special_characters(self):
        self.valid.set_email('!user@company.com')
        self.assertFalse(self.valid.validEmail())
    
    def test_email_with_domain_name_length_more_than_three(self):
        self.valid.set_email('username@company.comcom')
        self.assertFalse(self.valid.validEmail())

    def test_valid_email(self):
        self.valid.set_email('username@company.com')
        self.assertTrue(self.valid.validEmail())

    # Password validation test cases
    def test_password_length_less_than_minimum(self):
        self.valid.set_password('pass')
        self.assertFalse(self.valid.validPassword())

    def test_password_with_no_digit(self):
        self.valid.set_password('password')
        self.assertFalse(self.valid.validPassword())

    def test_password_with_no_lowercase(self):
        self.valid.set_password('P@55WORD')
        self.assertFalse(self.valid.validPassword())

    def test_password_with_no_uppercase(self):
        self.valid.set_password('p@55word')
        self.assertFalse(self.valid.validPassword())

    def test_password_with_no_special_character(self):
        self.valid.set_password('Pa55wrd')
        self.assertFalse(self.valid.validPassword())

    def test_valid_password(self):
        self.valid.set_password('P@55word')
        self.assertTrue(self.valid.validPassword())

unittest.main()
