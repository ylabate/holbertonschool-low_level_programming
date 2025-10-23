#!/bin/bash

output="8-24_hours-best-version.c"

cat > "$output" << 'EOF'
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
EOF

for h in $(seq 0 23); do
  for m in $(seq 0 59); do
    printf "\t_putchar('%d');\n" $((h / 10)) >> "$output"
    printf "\t_putchar('%d');\n" $((h % 10)) >> "$output"
    echo -e "\t_putchar(':');" >> "$output"
    printf "\t_putchar('%d');\n" $((m / 10)) >> "$output"
    printf "\t_putchar('%d');\n" $((m % 10)) >> "$output"
    echo -e "\t_putchar('\\n');" >> "$output"
  done
done

echo "}" >> "$output"

