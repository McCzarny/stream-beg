// Configuration
#define DEVICE_NAME "Stream beg"

// Delay after a detection of a key press.
const int KEY_PRESS_INTERVAL_MS = 1000;

// Delay after changing a key state (press or release).
const int KEY_STATE_DELAY_MS = 10;

// Keypad layout
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Check the image from README to see what connection matches these PINs.
byte rowPins[ROWS] = {13, 12, 14, 27};
byte colPins[COLS] = {26, 25, 33, 32};

// Macros for keys.
char* getText(char key) {
  switch(key){
    case '1': return "Text on press 1";
    case '2': return "Text on press 2";
    case '3': return "Text on press 3";
    case '4': return "Text on press 4";
    case '5': return "Text on press 5";
    case '6': return "Text on press 6";
// You don't have to define text for each key.
    default:
      return NULL;
  }
}

