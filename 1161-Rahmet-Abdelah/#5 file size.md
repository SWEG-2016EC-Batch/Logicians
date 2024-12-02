# Problem Analysis

### Input:

• Size of the file in Megabytes

### Process:

Convert the file size to bytes.

Calculate the transfer time in seconds using the formula: Time taken = file size / 960.

Convert the transfer time from seconds to days, hours, minutes, and seconds.

### Output:
• Transfer time in days, hours, minutes, and seconds

# Algorithm:
# Pseudocode for File Transfer Time Calculation

Step 1: Start the program

Step 2: Initialize variables
- Set `transmission_rate` to 960 (bytes per second).
- Declare variable `totaltime_taken_sec` to store total time in seconds.
- Declare variable `file_size` to store the file size.

Step 3: Prompt user for file size
- Print: "Enter the amount of your file in Megabyte."
- Input the `file_size` (in megabytes).

Step 4: Convert file size to bytes
- Multiply `file_size` by 1048576 (number of bytes in 1 MB) to get the total size in bytes.
- Update `file_size = file_size * 1048576`.

Step 5: Calculate total time in seconds
- Set `totaltime_taken_sec` to the result of `file_size / transmission_rate` (this gives the total time in seconds).

Step 6: Calculate time 
- **Days**:
  - Set `days = totaltime_taken_sec / 86400` (86400 seconds in one day).
  - Update `totaltime_taken_sec = totaltime_taken_sec % 86400` (remaining seconds after extracting full days).
- **Hours**:
  - Set `hour = totaltime_taken_sec / 3600` (3600 seconds in one hour).
  - Update `totaltime_taken_sec = totaltime_taken_sec % 3600` (remaining seconds after extracting full hours).
- **Minutes**:
  - Set `minute = totaltime_taken_sec / 60` (60 seconds in one minute).
  - Update `totaltime_taken_sec = totaltime_taken_sec % 60` (remaining seconds after extracting full minutes).
- **Seconds**:
  - Set `seconds = totaltime_taken_sec` (remaining seconds after extracting minutes).

Step 7: Output the result
- Print: "This file is needed = X days: Y hours: Z minutes: W seconds. To be fully sent."
  - Where `X` is the number of days, `Y` is the number of hours, `Z` is the number of minutes, and `W` is the number of seconds.

Step 8: End the program


# Flowchart:

``` mermaid
flowchart TD
    A([Start the program]) --> B[/Initialize variables/]
    B --> C[/Prompt user for file size in MB/]
    C --> D[/"Input file_size (in MB)"/]
    D --> E[Convert file_size to bytes]
    E --> F[Calculate total time in seconds as: Time taken = file size / 960.]
    F --> G[Calculate time breakdowm]

    G --> H[Calculate Days]
    H --> I[Set days = totaltime_taken_sec / 86400]
    I --> J[Update totaltime_taken_sec = totaltime_taken_sec % 86400]
    
    J --> K[Calculate Hours]
    K --> L[Set hour = totaltime_taken_sec / 3600]
    L --> M[Update totaltime_taken_sec = totaltime_taken_sec % 3600]
    
    M --> N[Calculate Minutes]
    N --> O[Set minute = totaltime_taken_sec / 60]
    O --> P[Update totaltime_taken_sec = totaltime_taken_sec % 60]

    P --> Q[Calculate Seconds]
    Q --> R[Set seconds = totaltime_taken_sec]

    R --> S[/Output the result/]
    S --> T([End the program])
