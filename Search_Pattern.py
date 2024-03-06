text_string = "birthdayboy"
pattern_string = "birth"

index = text_string.find(pattern_string)
occurrences = []

while index != -1:
    occurrences.append(index)
    index = text_string.find(pattern_string, index + 1)


if occurrences:
    print("Pattern string found at indexes:", occurrences)
else:
    print("Pattern string not found in the text string.")
