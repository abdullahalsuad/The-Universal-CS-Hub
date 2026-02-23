# 🔄 Loops & Iteration in C — The Ultimate Human-Friendly Guide

> **"The computer's greatest superpower isn't intelligence — it's tireless repetition. Loops are how you harness it."**

---

## 📌 What Is a Loop and Why Do We Even Need It?

Imagine you're building a program to calculate the average salary of 10,000 employees. Would you write `scanf` ten thousand times? Of course not — that's insane. A loop says: **"CPU, do this task N times (or until a condition changes)"** and the CPU obeys with zero complaints, zero fatigue.

This is called **Iteration** — executing a block of code repeatedly.

Every loop in C, regardless of type, has the same four components:

1. **Initialization** — Set up a starting state (e.g., a counter variable)
2. **Condition** — The test that decides whether to keep looping
3. **Body** — The code that runs on each repetition
4. **Update** — Change the state so the condition eventually becomes false (preventing infinite loops)

The three loop types (`while`, `for`, `do-while`) differ only in **where** these components are placed and **when** the condition is checked.

---

## 1. 🔁 The `while` Loop — Entry-Controlled, Condition-First

### 🧠 The Human Explanation

Think of a `while` loop as a **bouncer at a club door**. Before you're allowed in, the bouncer checks your condition. If you pass → you're in (the code runs). When you try to re-enter, the bouncer checks again. The moment you fail the check, you're done — no more entry.

This means if you fail the very first check, **you never get in at all**. The body might never execute. This is what "entry-controlled" means.

### ⚙️ Execution Flow (Step by Step)

```
┌─────────────────────────────────────────┐
│  1. INITIALIZATION (before the loop)    │
│     int i = 0;                          │
├─────────────────────────────────────────┤
│  2. CHECK CONDITION                     │─────── FALSE ──► Loop ends, go past
│     while (i < 5)                       │
├─────────────────────────────────────────┤
│  │                                      │
│  │ (condition is TRUE)                  │
│  ▼                                      │
│  3. EXECUTE BODY                        │
│     { ... code ... }                    │
├─────────────────────────────────────────┤
│  4. UPDATE (inside the body)            │
│     i++;                                │
│     ↑                                   │
│     └────────── go back to STEP 2 ──────┘
```

### ✅ When to Use `while`

Use `while` when you **don't know ahead of time exactly how many iterations you'll need**. The loop count depends on data or user behavior, not a fixed number.

**Real-world examples:**

- Reading lines from a file — keep reading until you hit the end
- Waiting for a player to type "quit" — you don't know how many turns they'll play
- Draining a queue — keep processing until it's empty
- Validating input — keep asking until the user gives a valid answer

### 💻 Code Example

```c
#include <stdio.h>

int main() {
    // --- Example 1: Battery drain simulation ---
    int battery = 100;

    printf("📱 Phone simulation started:\n");
    while (battery > 0) {
        printf("   Battery: %d%% — Still running...\n", battery);
        battery -= 25;  // UPDATE: drain battery each cycle
    }
    printf("📴 Phone died. Battery: %d%%\n", battery);

    // --- Example 2: Input validation ---
    int userInput;
    printf("\nEnter a number between 1 and 10: ");
    scanf("%d", &userInput);

    while (userInput < 1 || userInput > 10) {
        printf("❌ Invalid! Try again (1-10): ");
        scanf("%d", &userInput);
    }
    printf("✅ Valid input received: %d\n", userInput);

    return 0;
}
```

**Output (for battery example):**

```
📱 Phone simulation started:
   Battery: 100% — Still running...
   Battery: 75% — Still running...
   Battery: 50% — Still running...
   Battery: 25% — Still running...
📴 Phone died. Battery: 0%
```

> ⚠️ **Key Insight:** If `battery` started at 0, the `while` body would **never execute**. The phone would be "dead" before we even started. This is the defining behavior of entry-controlled loops.

---

## 2. 🔢 The `for` Loop — The Counter Loop

### 🧠 The Human Explanation

The `for` loop is the `while` loop's organized sibling. When you know exactly how many times you want to loop, the `for` loop elegantly packages all four loop components into **a single compact line**: Initialization, Condition, and Update are all visible in the `for(...)` header itself.

This makes it immediately clear to any programmer reading your code: "This loop runs exactly N times."

### ⚙️ Execution Flow and Memory (Step by Step)

```c
for (initialization; condition; update) {
    body;
}
```

```
Step 1: Run INITIALIZATION once          → int i = 0
Step 2: Check CONDITION                  → is i < 5?
         ↓ TRUE                ↓ FALSE
Step 3: Run BODY               → Exit loop
Step 4: Run UPDATE             → i++
Step 5: Back to Step 2         → Check again
```

**What happens in memory:**

```
i = 0: [Condition CHECK] ✅ → [BODY runs] → [UPDATE i++] → i is now 1
i = 1: [Condition CHECK] ✅ → [BODY runs] → [UPDATE i++] → i is now 2
i = 2: [Condition CHECK] ✅ → [BODY runs] → [UPDATE i++] → i is now 3
i = 3: [Condition CHECK] ✅ → [BODY runs] → [UPDATE i++] → i is now 4
i = 4: [Condition CHECK] ✅ → [BODY runs] → [UPDATE i++] → i is now 5
i = 5: [Condition CHECK] ❌ → LOOP ENDS
```

### ✅ When to Use `for`

Use `for` whenever you know the **exact number of iterations** at the time the loop starts.

**Real-world examples:**

- Loop through all 10 elements of an array
- Print a multiplication table from 1 to 12
- Repeat a menu exactly 3 times for retries
- Process exactly 365 days of data in a year

### 💻 Code Example

```c
#include <stdio.h>

int main() {
    // --- Example 1: Basic counter ---
    printf("Counting 0 to 4:\n");
    for (int i = 0; i < 5; i++) {
        printf("  i = %d\n", i);
    }

    // --- Example 2: Multiplication table ---
    int number = 7;
    printf("\nMultiplication Table for %d:\n", number);
    printf("━━━━━━━━━━━━━━━━━━━\n");
    for (int i = 1; i <= 10; i++) {
        printf("  %d × %2d = %3d\n", number, i, number * i);
    }

    // --- Example 3: Count DOWN ---
    printf("\nRocket launch countdown:\n");
    for (int t = 10; t >= 0; t--) {
        printf("  T minus: %d\n", t);
    }
    printf("🚀 LIFTOFF!\n");

    return 0;
}
```

### 💡 Advanced `for` Loop Tricks

```c
// Multiple variables in initialization and update:
for (int i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d\n", i, j);
}

// Loop over characters in a string:
char name[] = "hello";
for (int i = 0; name[i] != '\0'; i++) {
    printf("%c\n", name[i]);
}

// Infinite loop (same as while(1)):
// for (;;) { ... }
```

---

## 3. 🔃 The `do-while` Loop — Exit-Controlled, Body-First

### 🧠 The Human Explanation

The `do-while` is the rebel of loops. Every other loop checks the condition BEFORE running. `do-while` says: **"Run first, ask questions later."**

Think of it this way: Imagine a restaurant menu system. Before you can ask the customer _"Did you like the menu?"_, you MUST show them the menu at least once. You can't respond to feedback about something that hasn't been seen yet. That's `do-while`.

The body always runs **at least once**, unconditionally. The condition is only checked at the **bottom**, after the first execution.

### ⚙️ Execution Flow

```
┌─────────────────────────────────────────┐
│  1. EXECUTE BODY (no questions asked)   │
│    { ... code ... }                     │
├─────────────────────────────────────────┤
│  2. CHECK CONDITION at the bottom       │─── TRUE ──► Jump back to STEP 1
│     } while (condition);               │
│                                         │─── FALSE ──► Exit loop
└─────────────────────────────────────────┘
```

**The critical difference visualized:**

|                                      | `while` loop          | `do-while` loop       |
| ------------------------------------ | --------------------- | --------------------- |
| Condition is FALSE from the start    | Body runs **0 times** | Body runs **1 time**  |
| Condition becomes FALSE after 3 runs | Body runs **3 times** | Body runs **3 times** |

### ✅ When to Use `do-while`

Use `do-while` when the loop body **must execute at least once** before the condition can even be evaluated — typically when the body itself generates the data that the condition tests.

**Real-world examples:**

- ATM PIN entry — you must ask for the PIN before you can check if it's right
- Menu systems — you must display the menu before asking for a choice
- Form validation — you must receive input before you can validate it
- Game loops — you must render the first frame before checking "is the game over?"

### 💻 Code Example

```c
#include <stdio.h>

int main() {
    // --- Example 1: PIN entry system (perfect do-while use case) ---
    int pin;
    int attempts = 0;
    int correctPin = 1234;

    printf("🔐 ATM PIN Entry System\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━\n");

    do {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);
        attempts++;

        if (pin != correctPin) {
            printf("❌ Incorrect PIN. Try again.\n");
        }
    } while (pin != correctPin && attempts < 3); // Check AFTER asking

    if (pin == correctPin) {
        printf("✅ PIN accepted! Welcome.\n");
    } else {
        printf("🚫 Card blocked after %d failed attempts.\n", attempts);
    }

    // --- Example 2: Simple restaurant menu ---
    int choice;
    do {
        printf("\n📋 MENU:\n");
        printf("  1. Burger\n");
        printf("  2. Pizza\n");
        printf("  3. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("🍔 Burger ordered!\n"); break;
            case 2: printf("🍕 Pizza ordered!\n"); break;
            case 3: printf("👋 Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 3); // Keep showing menu until user exits

    return 0;
}
```

---

## 4. 🎛️ Loop Control: `break` and `continue`

These keywords give you **surgical control** over a loop's behavior from the inside.

### 🛑 `break` — The Emergency Exit

#### 🧠 The Human Explanation

`break` is like a fire alarm in a building. The moment it triggers, everything stops — you don't finish what you were doing, you don't go floor by floor checking everyone — you immediately exit the building (the loop).

When the CPU hits `break`, it instantly exits the **innermost loop** and jumps to the first line of code **after** the closing `}` of that loop.

**Critical real-world use case:**
You're searching through a database of 1 million records to find a specific user. You find them at record 5. There's absolutely no reason to scan the remaining 999,995 records. `break` saves you from that wasted work.

```c
#include <stdio.h>

int main() {
    int targetUser = 42;
    int found = 0;

    printf("Searching database...\n");

    for (int i = 1; i <= 1000000; i++) {
        if (i == targetUser) {
            printf("✅ User %d found at record %d!\n", targetUser, i);
            found = 1;
            break;  // ← Stop searching! Don't waste 999,958 more checks.
        }
    }

    if (!found) {
        printf("❌ User not found.\n");
    }

    return 0;
}
```

### ⏩ `continue` — The Skip Button

#### 🧠 The Human Explanation

`continue` doesn't exit the loop — it just **skips the rest of the current iteration** and jumps to the **next one**. The loop continues normally.

Think of it like a factory conveyor belt. A product comes along, the quality checker notices it's defective, so they skip it (don't process it) and let the next product come along. The belt doesn't stop — just that one item is skipped.

**How `continue` behaves differently in different loops:**

- In a `for` loop → Jumps to the **update expression** (`i++`), then rechecks condition
- In a `while` loop → Jumps straight back to the **condition check**

```c
#include <stdio.h>

int main() {
    // --- Example 1: Print only ODD numbers ---
    printf("Odd numbers from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip evens — go straight to i++
        }
        printf("%d ", i);  // Only odd numbers reach this line
    }
    printf("\n");

    // --- Example 2: Skip invalid/negative values ---
    int data[] = {5, -3, 8, -1, 12, 6, -7, 2};
    int size = 8;
    int sum = 0;

    printf("\nProcessing valid (positive) numbers only:\n");
    for (int i = 0; i < size; i++) {
        if (data[i] < 0) {
            printf("  Skipping invalid value: %d\n", data[i]);
            continue;  // Skip negatives
        }
        sum += data[i];
        printf("  Added %d → Running sum: %d\n", data[i], sum);
    }
    printf("Final sum: %d\n", sum);

    return 0;
}
```

**Output:**

```
Odd numbers from 1 to 10:
1 3 5 7 9

Processing valid (positive) numbers only:
  Added 5 → Running sum: 5
  Skipping invalid value: -3
  Added 8 → Running sum: 13
  Skipping invalid value: -1
  Added 12 → Running sum: 25
  Added 6 → Running sum: 31
  Skipping invalid value: -7
  Added 2 → Running sum: 33
Final sum: 33
```

### ⚡ `break` vs `continue` — Side by Side

```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break;  // Output: 1 2    (Loop STOPS at 3)
    }
    printf("%d ", i);
}

for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;  // Output: 1 2 4 5  (Iteration 3 is SKIPPED)
    }
    printf("%d ", i);
}
```

---

## 5. 🔩 Nested Loops — A Loop Inside a Loop

### 🧠 The Human Explanation

Like a clock: the **seconds hand** (inner loop) makes a full 60-rotation sweep for every **single step** of the minutes hand (outer loop). For every outer iteration → the inner loop completes its full cycle.

This is fundamental for working with **2D structures** — anything with rows and columns: matrices, game boards, tables, pixel grids.

### ⚙️ The Multiplication Rule

```
Outer loop runs:   N times
Inner loop runs:   M times per outer iteration
Total iterations:  N × M times
```

This is why nested loops are tied to **Time Complexity**:

- Single loop → O(N) → Linear time
- Double nested loop → O(N²) → Quadratic time (expensive for large N!)
- Triple nested loop → O(N³) → Cubic time (very expensive!)

### 💻 Code Examples

```c
#include <stdio.h>

int main() {
    // --- Example 1: Star Pattern (3 rows × 5 cols) ---
    printf("Star Pattern:\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 5; col++) {
            printf("* ");  // inner loop prints across
        }
        printf("\n");  // outer loop moves to next row
    }

    // --- Example 2: Multiplication Table (2D grid) ---
    printf("\nMultiplication Table:\n");
    printf("   ");
    for (int j = 1; j <= 5; j++) printf("%4d", j);
    printf("\n   ");
    for (int j = 1; j <= 5; j++) printf("────");
    printf("\n");

    for (int i = 1; i <= 5; i++) {
        printf("%2d│", i);
        for (int j = 1; j <= 5; j++) {
            printf("%4d", i * j);  // inner fills each column
        }
        printf("\n");  // outer moves to next row
    }

    // --- Example 3: Right triangle pattern ---
    printf("\nRight Triangle:\n");
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) {  // inner varies with outer!
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}
```

**Output:**

```
Star Pattern:
* * * * *
* * * * *
* * * * *

Multiplication Table:
      1    2    3    4    5
   ────────────────────────
 1│   1    2    3    4    5
 2│   2    4    6    8   10
 3│   3    6    9   12   15
 4│   4    8   12   16   20
 5│   5   10   15   20   25

Right Triangle:
#
# #
# # #
# # # #
# # # # #
```

### ⚠️ `break` in Nested Loops — The Trap!

```c
// ⚠️ break only exits the INNERMOST loop it's inside!
for (int i = 0; i < 3; i++) {         // Outer loop
    for (int j = 0; j < 3; j++) {     // Inner loop
        if (j == 1) {
            break;  // ← This breaks ONLY the inner loop, NOT the outer one!
        }
        printf("i=%d, j=%d\n", i, j);
    }
    // Execution resumes here after inner break
}

// Output:
// i=0, j=0
// i=1, j=0
// i=2, j=0
```

> To break out of **multiple nested loops**, use a flag variable or a `goto` (used carefully).

---

## 6. ♾️ Infinite Loops — Intentional and Accidental

### 🧠 The Human Explanation

An infinite loop is a loop where the condition **never becomes false**, so it runs forever.

Sometimes this is **accidental** (a bug). Sometimes it's **intentional** and essential — web servers, game loops, and operating systems are all built on infinite loops that keep running until the program is forcefully stopped.

### 💀 Accidental Infinite Loops — How They Happen

```c
// BUG 1: Forgot the update statement
int i = 0;
while (i < 5) {
    printf("Stuck! i = %d\n", i);
    // i++ is MISSING → i stays 0 forever → program hangs!
}

// BUG 2: Update goes the WRONG direction
for (int i = 10; i > 0; i++) {  // ← i++ makes it grow, never reaches 0!
    printf("Also stuck: %d\n", i);
}

// BUG 3: Condition can never be false
int x = 5;
while (x != 6) {
    x += 2;  // x goes: 5, 7, 9, 11... NEVER equals 6!
}
```

### ✅ Intentional Infinite Loops

```c
// Pattern 1: while(1) — classic and readable
while (1) {
    // Server: accept connections, process request, loop again
    // Game: get input, update state, render, loop again
    // OS: process events, handle interrupts, loop again

    if (shouldExit) break;  // Controlled exit via break or return
}

// Pattern 2: for(;;) — "forever for" — same behavior, preferred by some
for (;;) {
    // Same idea
    if (shouldExit) break;
}
```

**Real-world example — Game Loop:**

```c
int gameRunning = 1;

while (gameRunning) {
    getPlayerInput();    // Step 1: Read input
    updateGameState();   // Step 2: Update physics, AI, etc.
    renderFrame();       // Step 3: Draw the screen

    if (playerQuit || playerDied) {
        gameRunning = 0; // Next iteration check will exit
    }
}
```

---

## 🔄 The Big Loop Comparison Table

| Feature                | `while`                    | `for`              | `do-while`                         |
| ---------------------- | -------------------------- | ------------------ | ---------------------------------- |
| **Condition checked**  | Before body                | Before body        | After body                         |
| **Minimum executions** | 0                          | 0                  | **1** (always!)                    |
| **Type**               | Entry-controlled           | Entry-controlled   | **Exit-controlled**                |
| **Best for**           | Unknown iterations         | Known count        | Must-run-once scenarios            |
| **Components visible** | Init before, update inside | All in one line    | Update inside, condition at bottom |
| **Example use case**   | Read file until EOF        | Loop through array | ATM PIN, Menu systems              |

---

## 🗺️ Loop Selection Decision Guide

```
You need to repeat something...
│
├─► Do you know EXACTLY how many times to repeat?
│   └─► Use:  for (int i = 0; i < N; i++) { ... }
│
├─► You DON'T know how many times, but the code
│   might NOT need to run at all if condition is instantly false?
│   └─► Use:  while (condition) { ... }
│
└─► The code MUST run at LEAST ONCE before you can
    even check the condition?
    └─► Use:  do { ... } while (condition);

Bonus:
├─► Need to exit loop early when a target is found?
│   └─► Use:  break
│
└─► Need to skip a specific iteration and continue?
    └─► Use:  continue
```

---

## ⚠️ Classic Loop Pitfalls — Exam Favorites

### Pitfall 1: Off-by-One Error (Fencepost Error)

```c
// INTENTION: Print 1 through 10 (10 numbers)

// ❌ Wrong — Only prints 1 through 9 (9 numbers)
for (int i = 1; i < 10; i++) { printf("%d ", i); }

// ✅ Correct — Prints 1 through 10 (10 numbers)
for (int i = 1; i <= 10; i++) { printf("%d ", i); }
```

> 💡 **Count the fence posts, not just the gaps.** Off-by-one is so common it has its own name.

### Pitfall 2: Modifying the Loop Variable Inside the Body

```c
// ❌ Dangerous: Modifying i inside the loop causes unexpected behavior
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
    i += 2;  // ← This also changes i! i goes 0, 3, 6, 9 instead of 0,1,2...
}
```

### Pitfall 3: `while` vs `do-while` — Zero Iterations

```c
int x = 0;

// while loop: condition is FALSE immediately → body NEVER runs
while (x > 0) {
    printf("This never prints!\n");
}

// do-while loop: body runs ONCE regardless → then checks condition
do {
    printf("This prints exactly once!\n");
} while (x > 0);
```

### Pitfall 4: `continue` in `while` vs `for`

```c
// ❌ DANGEROUS: Infinite loop when using continue with while!
int i = 0;
while (i < 5) {
    if (i == 2) {
        continue;  // Jumps back to while check... but i++ never ran! → STUCK at i=2 forever!
    }
    printf("%d ", i);
    i++;  // UPDATE is after the continue, so it gets skipped!
}

// ✅ FIX: Move i++ before the continue
int i = 0;
while (i < 5) {
    if (i == 2) {
        i++;       // Update first
        continue;  // Then skip
    }
    printf("%d ", i);
    i++;
}

// ✅ SAFER: Use for loop (update always runs, even after continue)
for (int i = 0; i < 5; i++) {
    if (i == 2) continue;  // i++ in for header ALWAYS runs — no danger!
    printf("%d ", i);
}
```

---

## ⚡ Quick Reference Cheat Sheet

```c
// 1. while — Unknown count, check first
int i = 0;
while (i < 10) {
    // body
    i++;
}

// 2. for — Known count, clean syntax
for (int i = 0; i < 10; i++) {
    // body
}

// 3. do-while — Must run at least once
do {
    // body
} while (condition);

// 4. break — Exit loop immediately
for (int i = 0; i < 10; i++) {
    if (i == 5) break;   // Stops at 5
}

// 5. continue — Skip current iteration
for (int i = 0; i < 10; i++) {
    if (i == 5) continue; // Skips 5, continues 6,7,8,9
    printf("%d ", i);
}

// 6. Nested loop
for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
        printf("(%d,%d) ", r, c);
    }
    printf("\n");
}

// 7. Intentional infinite loop
while (1) {
    // do stuff
    if (exitCondition) break;
}
```

---

> ✍️ **Summary in Plain English:**
> Loops are how you make the CPU do the heavy lifting. Instead of copy-pasting code a thousand times, you tell the machine to repeat a block. Use `for` when you know the count, `while` when you don't, and `do-while` when the body must run at least once. Control that loop with `break` (exit early) and `continue` (skip an iteration). Nest loops for 2D problems, but remember: nested loops are expensive — O(N²) or worse. Master loops, and you can process any amount of data.
