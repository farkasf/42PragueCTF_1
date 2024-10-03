# binary_code
What am I supposed to do with this weird binary code?

## hint
-- --- .-. ... .

## walthrough
1. convert the binary parts into morse code
2. translate morse into text

- flag creation:
``` python
def morse_to_binary(morse_code):
    translation_map = {'.': '1', '-': '0', ' ': ' '}
    binary_code = ''.join(translation_map.get(char, char) for char in morse_code)
    
    return binary_code

morse_strings = {
    'b1n4ry': '-... .---- -. ....- .-. -.--',
    '1n': '.---- -.',
    'm0rs3': '-- ----- .-. ... ...--'
}

for key, morse in morse_strings.items():
    binary = morse_to_binary(morse)
    print(f"{key}: {binary}")
```

## flag
42{b1n4ry_1n_m0rs3}
