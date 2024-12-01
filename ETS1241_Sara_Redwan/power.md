# Power Calculator program
## Design Analysis
**Goal:** The program is designed to calculate and show the result of raising a number (base) to a specific power (exponent).</p>
1. **Input:** Two numbers:
   - The base (x) and 
   - The exponent (y).
2. **Process:**
   - Calculate the power using pow(x, y). 
3. **Output:**
   - Display the result, showing how x raised to the power of y equals the calculated result.

## Pseudocode
**step 1:** Start

**step 2:** Input: Prompt the user to enter the base number and store it in x. Prompt the user to enter the exponent and store it in y.

**step 3:** Calculate the Power: Use the pow function from the library to calculate x raised to the power y. Store the result in result.

**step 4:** Display the Result: Print the message displaying x raised to the power y along with the calculated result. 

**step 5:** End
## Flowchart
``` mermaid
flowchart 
    id1([Start]) --> id2[/enter the base number and store it in x/]
    id2 --> id3[/ enter the exponent and store it in y/]
    id3 --> id4[Calculate x raised to the power y using the pow function and store it in result]
    id4 --> id5[/Display the result/]
    id5 --> id6([End])


