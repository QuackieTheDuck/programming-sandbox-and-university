import argparse, socket

parser = argparse.ArgumentParser()

parser.add_argument('target')
parser.add_argument('-p', type=int, default=443)
args=parser.parse_args()

sock=socket.socket()
sock.settimeout(3)
try:
    sock.connect((args.target,args.p))
except Exception :
    print(f'{args.target}:{args.p} DOWN')
else:
    print(f'{args.target}:{args.p} ALIVE')
    sock.close()