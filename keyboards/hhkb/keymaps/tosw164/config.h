#ifndef CONFIG_THEO_H
#define CONFIG_THEO_H

#include "../../config.h"

#undef MANUFACTURER
#undef PRODUCT
#undef DESCRIPTION
#define MANUFACTURER    QMK
#define PRODUCT         HHKB QMK
#define DESCRIPTION     HHKB on QMK Firmware 

// Increase "Tap" detection window. Avoid missing 'q' or 'z' when typing slowly.
#undef TAPPING_TERM
#define TAPPING_TERM 300

// Uncomment to enable NKRO by default. May cause issues with KVM switches.
//#define FORCE_NKRO

#endif
