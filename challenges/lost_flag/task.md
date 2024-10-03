# lost_flag
This mysterious man claims to know more than just painting.

## hint
pow(prime, -1, mod)

## walthrough
python code for reversing:
``` python
prime = 123
mod = 256

encoded = open('flag.secret', 'r').read()

decoded = ''
inverse_prime = pow(prime, -1, mod)

for char in encoded:
    encoded_value = ord(char)
    original_value = (encoded_value * inverse_prime) % mod
    decoded += chr(original_value)

print(f"Flag: {decoded}")
```

## flag
42{pr1m3_numb3r5_4r3_3v3rywh3r3}
