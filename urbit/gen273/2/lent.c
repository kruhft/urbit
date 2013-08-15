/* j/2/lent.c
**
** This file is in the public domain.
*/
#include "all.h"
#include "../pit.h"

/* functions
*/
  u2_weak                                                         //  transfer
  j2_mbc(Pit, lent)(u2_wire wir_r, 
                    u2_noun a)                                    //  retain
  {
    u2_weak len = _0;

    while ( 1 ) {
      if ( _0 == a ) {
        return len;
      }
      else if ( u2_no == u2_dust(a) ) {
        u2_rl_lose(wir_r, len);
        return u2_none;
      }
      else {
        len = u2_rl_vint(wir_r, len);
        a = u2_t(a);
      }
    }
  }
  u2_noun
  j2_mb(Pit, lent)(u2_wire wir_r, 
                   u2_noun cor)                                   //  retain
  {
    u2_noun a;

    if ( u2_none == (a = u2_frag(4, cor)) ) {
      return u2_none;
    } else {
      return j2_mbc(Pit, lent)(wir_r, a);
    }
  }

/* structures
*/
  u2_ho_jet 
  j2_mbj(Pit, lent)[] = {
    { ".3", j2_mb(Pit, lent), u2_no, u2_none, u2_none },
    { }
  };
