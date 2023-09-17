#include "quantum.h"

#define CYCLES_PER_LOOP 9
#define LOOP_TIMES (48000000 / (CH_CFG_ST_FREQUENCY) / (CYCLES_PER_LOOP))

void chThdSleep(sysinterval_t time)  {
    uint32_t loops = time * LOOP_TIMES;
    for (uint32_t i = 0; i < loops; i++) __NOP();
}

msg_t chThdSuspendTimeoutS(thread_reference_t* trp, sysinterval_t timeout) {
    osalSysUnlock();
    osalSysLock();
    return MSG_OK;
}
