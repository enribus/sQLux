

#ifndef QL_CCONV_H
#define QL_CCONV_H

void init_iso(void);
void iso2ql_mem(unsigned char *buf, int len);
void ql2iso_mem(unsigned char *buf, int len);
int tra_conv(char *dest, char *src, int len);

#endif

