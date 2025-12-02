## base

| idx 0 | idx 1 | idx 2 | idx 3 |
|-------|-------|-------|-------|
| 10    | 40    | 80    | 120   |
| **prev**  | **prev**  | **prev**  | **prev**  |
| NULL  | idx 0 | idx 1 | idx 2 |
| **next**  | **next**  | **next**  | **next**  |
| idx 1 | idx 2 | idx 3 | NULL  |

## 1

insert at 2 at new2

|------------------| new2  |
|------------------|-------|
|------------------| 70    |
|------------------| **prev**  |
|------------------| idx1  |
|------------------| **next**  |
|------------------| idx2  |
                 V
| idx 0 | idx 1 | idx 2 | idx 3 |
|-------|-------|-------|-------|
| 10    | 40    | 80    | 120   |
| **prev**  | **prev**  | **prev**  | **prev**  |
| NULL  | idx 0 | idx 1 | idx 2 |
| **next**  | **next**  | **next**  | **next**  |
| idx 1 | idx 2 | idx 3 | NULL  |

# 2

| idx 0 | idx 1 | <span style="color: green;">new 2 | idx 2 | idx 3 |
|-------|-------|-------|-------|-------|
| 10    | 40    | <span style="color: green;">70    | 80    | 120   |
| **prev**  | **prev**  | **prev**  | **prev**  | **prev**  |
| NULL  | idx 0 | <span style="color: green;">idx 1 | <span style="color: red;">idx 1 | idx 2 |
| **next**  | **next**  | **next**  | **next**  | **next**  |
| idx 1 | <span style="color: red;">idx 2 | <span style="color: green;">idx 2 | idx 3 | NULL  |

# 3

| idx 0 | idx 1 | new 2 | idx 2 | idx 3 |
|-------|-------|-------|-------|-------|
| 10    | 40    | 70    | 80    | 120   |
| **prev**  | **prev**  | **prev**  | **prev**  | **prev**  |
| NULL  | idx 0 | idx 1 | <span style="color: green;">new 2 | idx 2 |
| next  | next  | next  | next  | next  |
| idx 1 | <span style="color: green;">new 2 | idx 2 | idx 3 | NULL  |
