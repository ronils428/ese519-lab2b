
In this part we were asked to 

Create a REPL to let you read and write RP2040 registers from a console. You should be able to:
- select any 32-bit address to read/write (even if not a valid RP2020 address)
- read/write any 32-bit value to this address
- read/write using any of the atomic bit-setting aliases and a 32-bit mask

Our demo below shows us writing to the register 0x40030000, the BUS_PRIORITY register with a value of 1. After writing, we confirm that we can read the register again and it displays the correct value.

![](https://github.com/ronils428/ese519-lab2b/blob/main/part2/part%202.gif)
