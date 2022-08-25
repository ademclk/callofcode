import re
def check_credentials(email,pswd):
    capitalAlpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    smallAlpha="abcdefghijklmnopqrstuvwxyz"
    specialchar="$@_"
    digits="0123456789"
    c,s ,sc,d=0,0,0,0
    pswdLen = len(pswd)
    regex = '^[a-z0-9]+[\._]?[a-z0-9]+[@]\w+[.]\w{2,3}$' 
    ## password check
    if(pswdLen>7):
        for i in pswd :
            if(i in capitalAlpha):
                c = c +1 ## to count capital alphabatic in the input
            if(i in smallAlpha):
                s =s+1  ## to count the smalalphabitic
            if(i in specialchar):
                sc =sc +1  ## to count the specilachar
            if( i in digits):
                d=d+1 ## to count the digits 
        if(c>=1 and s>=1 and sc>=1 and d >=1 and c+s+sc+d==pswdLen):
            print("password accepted")
            return True
            
        else:
            print("password not valid")
            return False
            
    ## email check
    if(re.search(regex,email)):
        print("Email Valid")
        return True
    else:
        print("Email not valide ")  
        return False
        
        
# email =input("enter an Email :")
# pswd = input("Enter a password :")
# check_credentials(email,pswd)