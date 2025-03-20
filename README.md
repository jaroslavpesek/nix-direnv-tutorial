# Devel environment example with Nix and direnv

1. Install `Nix` (must be in $PATH)
2. Install `direnv` (must be in $PATH), most convenient is usage of nix-env: `nix-env -iA nixpkgs.direnv` via `nixpkgs`, however you might use your favorite package manager (which should be Nix)
3. Install `nix-direnv` (must be in $PATH) so you can consume nix flakes (i.e. `nix-env -iA nixpkgs.nix-direnv`)
4. Hook `direnv` to you shell - https://direnv.net/docs/hook.html , tldr. for bash users (default for liberouter infra) - add to `~/.bashrc` line `eval "$(direnv hook bash)"`
5. Disable sandboxing and allow flakes in Nix - in `/etc/nix/nix.conf` write following (you probably need sudo) and then restart nix deamon with `sudo systemctl restart nix-daemon.service`:
```
build-users-group = nixbld
experimental-features = nix-command flakes
sandbox = false
``` 

6. 1. Use this repository OR
   2. stick to this tutorial https://github.com/nix-community/nix-direnv?tab=readme-ov-file
7. `direnv allow`
8. To VS Code, install extension `mkhl.direnv` so VS Code is able to use that environment, even with SSH Remote Connection
9. Try to compile main.cpp - `g++ main.cpp -ltrap -lunirec -lunirec++`
10. For Intellisense, you might need reset database: F1 -> Reset Intellisense database and select right Intelisense configuration F1 -> Select intellisense configuration. It should be compiler settings from nix store, you should not use system level installed binaries.
11. Enjoy reproducibility and declare yourself
