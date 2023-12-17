# Roman Numerals
- Convert Roman Numerals to Decimal Numbers
- Program in C

# Compile using the following command

Assuming you called the program ```rn.c```

```$ gcc rn.c -o rn -lm```

# Run as follows:

`$ ./rn MCDLXIX`

`MCDLXIX = 1469`

# Why and How?

The idea behind this program was to use the ASCII values of I, V, X, L, C, D and M to calculate their decimal equivalents:

- For the **odd** numbers:   f(x)=(13*x^2 - 144*x +371)/120
- For the **even** numbers:  g(x)=(-11*x^3 + 628*x^2 - 11572*x +68720)/96

| 10^     | Decimal | Roman | ASCII | - 66 |  Parity | x  | f(x) | 10^f(x) | Roman |
|:-------:|:-------:|:-----:|:-----:|:----:|:-------:|:--:|:----:|:-------:|:-----:|
| 2       |    100  |   C   |   67  |   1  |  odd    | 1  |  2   |   100   |   C   |
| 0       |      1  |   I   |   73  |   7  |  odd    | 7  |  0   |     1   |   I   |
| 3       |   1000  |   M   |   77  |  11  |  odd    | 11 |  3   |  1000   |   M   |

| *5      | Decimal | Roman | ASCII | - 66 |  Parity | x  | g(x) | Roman |
|:-------:|:-------:|:-----:|:-----:|:----:|:-------:|:--:|:----:|:-----:|
| 100     |    500  |   D   |   68  |   2  |  even   | 2  |  500 |   D   |
|  10     |     50  |   L   |   76  |  10  |  even   | 10 |  50  |   L   |
|   1     |      5  |   V   |   86  |  20  |  even   | 20 |  5   |   V   |
|   2     |     10  |   X   |   88  |  22  |  even   | 22 |  10  |   X   |



