#ifndef SEG_H_
#define SEG_H_

#include "../libit/types.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

void seg_grad(int16 *in, int16 *out, int16 *buff, const int w, const int h, const int th);
uint32 seg_local_max(int16 *in, int16 *out, int16 *buff, const int w, const int h);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /*SEG_H_*/