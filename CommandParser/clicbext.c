#include <stdio.h>
#include <stdlib.h>
#include "clicbext.h"

void
terminate_signal_handler(){
    collect_supportsave_data();
    exit(0);
}

void
collect_supportsave_data(){
    printf("%s() is called ...\n", __FUNCTION__);
}
