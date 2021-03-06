#ifndef PHRASE_END_H
#define PHRASE_END_H

#include "draconity.h"

extern "C" {

int phrase_end(void *key, dsx_end_phrase *endphrase);
int phrase_hypothesis(void *key, dsx_hypothesis *hypothesis);
int phrase_begin(void *key, void *data);

} // extern "C"

#endif
