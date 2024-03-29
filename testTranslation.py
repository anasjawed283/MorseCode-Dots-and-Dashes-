morse_code_dict = {
    'A': '._', 'B': '_...', 'C': '_._.', 'D': '_..', 'E': '.', 'F': '.._.',
    'G': '__.', 'H': '....', 'I': '..', 'J': '.___', 'K': '_._', 'L': '._..',
    'M': '__', 'N': '_.', 'O': '___', 'P': '.__.', 'Q': '__._', 'R': '._.',
    'S': '...', 'T': '_', 'U': '.._', 'V': '..._', 'W': '.__', 'X': '_.._',
    'Y': '_.__', 'Z': '__..',
    '0': '_____', '1': '.____', '2': '..___', '3': '...__', '4': '...._', '5': '.....',
    '6': '_....', '7': '__...', '8': '___..', '9': '____.',
    ' ': ' '
}

def text_to_morse(text):
    morse_code = ''
    for char in text.upper():
        morse_code += morse_code_dict.get(char, '') + ' '
    return morse_code

# Example usage
input_text = "Hello, World!"
result = text_to_morse(input_text)
print(f'Morse code for "{input_text}": {result}')
