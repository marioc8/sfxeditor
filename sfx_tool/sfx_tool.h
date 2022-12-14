
// OSCAR INCLUDES
#include <c64/types.h>
#include <c64/memmap.h>
#include <c64/cia.h>
#include <c64/vic.h>
#include <c64/sid.h>
#include <c64/joystick.h>
#include <c64/keyboard.h>
#include <c64/kernalio.h>
    // krnio_setnam("@0:SIDFXEFFECT.TXT,P,W");
    // krnio_open(2, 8, 2);
    // krnio_write(2, (char*)exporter_txt_template, sizeof(exporter_txt_template) - 1);
    // krnio_close(2);
#include <audio/sidfx.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
    // strcpy

// PROJECT INCLUDES
#include "common/keys.h"
#include "common/assets.h"
#include "common/utils.c"
#include "common/view_utils.c"
#include "common/scene_utils.c"
#include "common/audio.c"
#include "common/sound_bank.c"
#include "info_window/scene.h"
#include "edit_window/scene.h"
#include "sound_bank_window/scene.h"
#include "one_track_window/scene.h"
#include "sound_bank_loader_window/scene.h"
#include "edit_label_window/scene.h"

