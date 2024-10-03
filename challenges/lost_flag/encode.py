file_in = open('flag.txt', 'r').read()

secret_flag = ''.join(chr((ord(char) * 123) % 256) for char in file_in)

file_out = open('flag.secret', 'w').write(secret_flag)
