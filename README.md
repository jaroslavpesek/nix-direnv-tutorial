# Devel environment example with Nix and direnv

1. Install `Nix` (must be in $PATH)
2. Install `direnv` (must be in $PATH), most convenient is usage of nix-env: `nix-env -iA nixpkgs.direnv` via `nixpkgs`, however you might use your favorite package manager (which should be Nix)
3. Install `nix-direnv` (must be in $PATH) so you can consume nix flakes (i.e. `nix-env -iA nixpkgs.nix-direnv`)
4. Hook `direnv` to you shell - https://direnv.net/docs/hook.html , tldr. for bash users (default for liberouter infra) - add to `~/.bashrc` line `eval "$(direnv hook bash)"`
5. 1. Use this repository OR
   2. stick to this tutorial https://github.com/nix-community/nix-direnv?tab=readme-ov-file
6. `direnv allow`
7. To VS Code, install extension `mkhl.direnv` so VS Code is able to use that environment, even with SSH Remote Connection
8. Try to compile main.cpp - `g++ main.cpp -ltrap -lunirec -lunirec++`
9. Enjoy reproducibility and declare yourself
