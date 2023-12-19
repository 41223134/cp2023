{ pkgs }: {
    deps = [
      pkgs.libev
      pkgs.pandoc
      pkgs.glibcLocales
      pkgs.gitFull
      pkgs.gnuplot
      pkgs.ncurses.dev
      pkgs.gd
    ];
}