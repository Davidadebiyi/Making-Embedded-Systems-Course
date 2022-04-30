



void console_puts(char *s) {
  while (*s != '\0') {
    if (*s == '\r') {
      console_putc('\n');
    } else {
      console_putc(*s);
    }
    s++;
  }
}

int console_gets(char *s, int len) {
  char *t = s;
  char c;

  *t = '\000';
  /* read until a <LF> is received */
  while ((c = console_getc()) != '\n') {
    *t = c;
    console_putc(c);
    if ((t - s) < len) {
      t++;
    }
    /* update end of string with NUL */
    *t = '\000';
  }
  return t - s;
}
