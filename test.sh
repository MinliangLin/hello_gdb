gdb -ex 'b main.c:7' -ex q build/main.out
gdb -ex 'b foo.c:4' -ex q build/main.out
