{ pkgs }: {
    deps = [
      pkgs.pandoc
      pkgs.glibcLocales
      pkgs.gitFull
      pkgs.libev
        pkgs.sudo
        pkgs.clang_12
        pkgs.ccls
        pkgs.gdb
        pkgs.gnumake
        pkgs.gnuplot
        pkgs.gd
    ];
}
