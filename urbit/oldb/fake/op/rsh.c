/* fake/op/rsh.c
**
** This file is in the public domain.
*/
#include "u4/all.h"

/* u4_op_rsh():
**
**   Produce (b >> a).
*/
u4_atom
u4_op_rsh(u4_lane lane,
          u4_atom a,
          u4_atom b)
{
  u4_xw xw_count = u4_a_wbail(a, u4_bail_tank);
  mpz_t mp;

  u4_a_gmp(b, mp);
  mpz_tdiv_q_2exp(mp, mp, xw_count);

  return u4_k_atom_gmp(lane, mp);
}
