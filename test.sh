echo %% TEST MAIN
gdb -ex 'b main.c:7' -ex q build/main.out

echo %% TEST shared lib
gdb -ex 'set confirm off' -ex 'b foo' -ex r -ex q build/main.out
