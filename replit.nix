{ pkgs }: {
    deps = [
  pkgs.qtile
  pkgs.sudo
  pkgs.clang_12
        pkgs.ccls
        pkgs.gdb
        pkgs.gnumake
        pkgs.gnuplot
    ];
}