HAS_PRINTF := NO

# ----------------------------
# Makefile Options
# ----------------------------

NAME = ALRANDOM
ICON = icon.png
DESCRIPTION = "AL68's Randoms - v0.1.0"
COMPRESSED = YES
ARCHIVED = YES

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
