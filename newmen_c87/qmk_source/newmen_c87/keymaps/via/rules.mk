VIA_ENABLE=yes

# Reduce RAW endpoints
OPT_DEFS += -DRAW_IN_CAPACITY=1
OPT_DEFS += -DRAW_OUT_CAPACITY=1

# Remove idle thread
OPT_DEFS += -DCH_CFG_NO_IDLE_THREAD=TRUE

# Include the patched functions
SRC += keymaps/via/no_idle_thread.c


