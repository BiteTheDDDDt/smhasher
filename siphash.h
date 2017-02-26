#ifndef SIPHASH_H
#define SIPHASH_H

#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif
uint64_t siphash_with_state(const unsigned char key[32], const unsigned char *m, size_t len);
uint64_t siphash13_with_state(const unsigned char key[32], const unsigned char *m, size_t len);
uint64_t siphash(const unsigned char key[16], const unsigned char *m, size_t len);
uint64_t siphash13(const unsigned char key[16], const unsigned char *m, size_t len);
uint32_t halfsiphash(const unsigned char key[16], const unsigned char *m, size_t len);
void siphash_seed_state(const unsigned char key[16], unsigned char state[32]);
 
#ifdef __cplusplus
}
#endif

#endif // SIPHASH_H
