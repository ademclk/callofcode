from ast import Assert
from re import T
import pytest
from check_credentials import check_credentials as checkID

mails = ['a@m.m', '01mail_na-me@mail.com.com', '01mailna-me@mail.com', '01mail""na-me@mail.com', '01mail"!,:"na-me@mail.com', '01mail.na-me@mail.com']
pswd = ['ssSS45@@qe','ssSS45@@qr']
def test_valide_email():
    for i in mails:
        assert checkID(i,"ssSS45@@qr") is True  
         
def test_pswd_valide():
    for i in pswd:
        assert checkID('x@gmailcom',i) is True


     




