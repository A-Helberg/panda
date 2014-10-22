
#include "syscalls_common.hpp"

void appendReturnPoint(ReturnPoint&& rp);

void registerExecPreCallback(void (*callback)(CPUState*, target_ulong));
