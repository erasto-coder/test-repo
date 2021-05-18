import pyqrcode
import png
from pyqrcode import QRCode
qrstring ="https://stackoverflow.com/teams/create/free/name-your-team"#here itys a place to paste any url code
url = pyqrcode.create(qrstring)
url.png("c:\Users\ECHEDA\Desktop\\qr.png", scale=8)