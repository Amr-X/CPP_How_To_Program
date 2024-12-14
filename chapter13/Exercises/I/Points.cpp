/*
---Cout.MemberFunction
--cout.put(num) - ASCII

---Cin.memberFunction
--cin.get - one char Return -1 if (EOf)
--cin.getline() - ends at '\n'
--cin.clear - clear stream

---Low Level I/O -> cin.read(startaddress,cout) | cout.write(startaddress,cout)
|| Individual Bytes

---cast char* to Void* to Print Address not String

--- Manipulators (Use 'no' before "Noboolalpha" for Ex)
-- dec-hex-bin-boolalpha | showbase- setbase() - Sticky Settings
-- fixed - scientific - setprecision() -س- cout.setprecision() - Sticky Settings
-- cout.width() - cin.width()
-- showpoint Floating Number | showpos+ |
-- setw() with internal - cout.fill('*') - right - left

--- Cin State
cin.rdstate - cin.eof - cin.fail - cin.good - cin.bad
!Play with them



*/

#include <iomanip>
#include <iostream>

int main() {
  const char *word{"again"};
  // cout understand char* as a stirng ends with "\0"
  std::cout << "word is: " << word // this will print String (Not address) till
                                   // reaching null terminator
            << "\n Converting char* to void: "
            << static_cast<const void *>(
                   word) // understand as a Raw Pointer point to nothing
            << std::endl;
  // So it Prints pointer Value

  char c;
  std::cin.get(c); // Reads one character.
  std::cout << "Character entered: " << c
            << std::endl; // Outputs formatted text.
  // Raw Data
  char buffer[10];
  std::cin.read(buffer, 5); // Reads 5 bytes into the buffer.
  std::cout.write(buffer,
                  std::cin.gcount()); // Outputs 5 bytes from the buffer.
                                      // Count for Last Operation

  // Create Your Own Manipulators
  std::ostream &newLine(std::ostream & output){return output << '\n'};
  // Usage
  std::cout << "Test" << newLine; // No Need to No Arguments (cascaded)
}