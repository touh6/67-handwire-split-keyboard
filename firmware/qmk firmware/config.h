#pragma once

// matrix 
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

// pro micro pins

#define MATRIX_ROW_PINS {D2, D3}
#define MATRIX_COL_PINS {D4, D5, D6}

// diodes

#define DIODE_DIRECTION COL2ROW

// split communication 
#define USE_SERIAL

#define SPLIT_HAND_PIN D7

// default master

#define MASTER_RIGHT FALSE

// prevent issues
#define SPLIT_USB_DETECT

//676767676767
