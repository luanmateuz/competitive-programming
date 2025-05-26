import sys

student = tuple[str, str, int]


def print_s(values: list[student]) -> None:
    values.sort(key=lambda k: (k[2], k[1], k[0]))
    for name, _, _ in values:
        print(name)


values: list[student] = []


for line in sys.stdin:
    line = line.strip()
    if not line:
        continue

    try:
        A, S, C = line.split()
        values.append((A, S, int(C)))
    except ValueError:
        # number of students
        print_s(values)
        values.clear()
    except EOFError:
        # Exit
        break

if values:
    print_s(values)
