Hello guys, welcome to my second repo, so **LETS GET STARTED** (showcase in test.asm (no comments))
  # so SNASM
  Its a pack of macros I made for NASM assembly to make it simpler (pls do PR requests or forks I do want attention btw)
  # Features:
  - `print` prints defined strings
  - `defstr` defines strings (without newline)
  - `defstrln` defines stings (with newline)
  - `read` reads input, but still needs a buffer
  - `exit` well, exits the program
  - `sleep` waits (like ofc)
  # How to assemble the test.asm (I expect you to use Linux and already have git and GNU C COLLECTION and NASM installed):
  ## Step 1:
  download/clone both the snasm.inc and the test.asm (ESPECIALLY THE `snasm.inc`, ITS IMPORTANT)
  `git clone https://github.com/LarpTrox/snasm-simple-nasm.git`  
  ## Step 2:
  assemble it
  `nasm -f elf64 test.asm -o test.o`
  ## Step 3:
  link it
  `ld test.o -o test`
    
    
