import re
regex = re.compile(
        r'^(?:http|ftp)s?://' # http:// or https://
        r'(?:(?:[A-Z0-9](?:[A-Z0-9-]{0,61}[A-Z0-9])?\.)+(?:[A-Z]{2,6}\.?|[A-Z0-9-]{2,}\.?)|' #domain...
        r'localhost|' #localhost...
        r'\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3})' # ...or ip
        r'(?::\d+)?' # optional port
        r'(?:/?|[/?]\S+)$', re.IGNORECASE)

from os.path import splitext
from urllib.parse import urlparse
from urllib.request import urlopen

url = "https://mettl-arq.s3-ap-southeast-1.amazonaws.com/questions/iit-kanpur/cyber-security-hackathon/round1/problem1/defaulttestcase.txt"
file = urlopen(url)
# file = open('a.txt', 'r')
lines = file.readlines()

class Result:
    def __init__(self):
        self.d = {}
        self.status = ""

def palindrome(word):
    if len(word) > 0:
        return word == word[::-1]



a = Result()
# print(a.d)
line_no = 0
is_palindrome_present = False

path = urlparse(url).path
ext = splitext(path)[1]
# print(ext)
if re.match(regex,url) is not None:
    if ext == '.txt':
        a.status = "file ok"
    else:
        a.status = "file is not a text file"
else:
    a.status = "the URL is incorrect"

for l in lines:
    line_no += 1
    l = l.decode("utf-8", errors="ignore")
    l = l.strip()
    l = "".join(l.split())
    l = l.lower()
    if palindrome(l):
        is_palindrome_present = True
        a.d[line_no] = len(l)
        
if is_palindrome_present:
    # del a.d[line_no]
    print(a.d)
    print(a.status)
else:
    a.d[0] = 0
    print(a.d)
    print(a.status)
