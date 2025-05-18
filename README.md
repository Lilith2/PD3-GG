# PD3-GG: Payday 3 Mod Menu

PD3-GG is a single-player and private lobby mod menu for Payday 3, designed to enhance gameplay through a customizable, injectable DLL with an ImGui-based interface. This mod is intended for offline use or private sessions to avoid disrupting public gameplay or violating game terms of service.

## Features

- **Injectable DLL**: Load and unload the mod dynamically with hot loading/unloading support.
- **ImGui Menu**: Intuitive mouse-controlled graphical interface for easy navigation and configuration.
- **Keybinds**: Customizable keybinds for:
  - Toggling the menu.
  - Unloading the mod.
  - Writing weapon stat modifications, including:
    - Increased fire rate.
    - Spread manipulation.
    - Increased ammo pickups.
    - Enhanced armor penetration.
    - Added wall penetration.
- **Enemy Highlighting**: Mark enemies through walls on demand using the in-game marking mechanic.
- **Hooked Process Event**: Intercepts and processes game events for mod functionality.
- **Logging**: Flexible logging system that:
  - Outputs to the console by default.
  - Logs process events to a file when enabled.
  - Supports logging of any in-game data to a file.

## Usage

1. **Requirements**:
   - Payday 3 (PC version).
   - A DLL injector (e.g., Cheat Engine, Extreme Injector, or similar).
   - Windows OS (tested on Windows 10/11).

2. **Installation**:
   - Download the latest release from the [Releases](https://github.com/Lilith2/PD3-GG/releases) page.
   - Place the `PD3-GG.dll` in a secure location.

3. **Injection**:
   - Launch Payday 3 in single-player or a private lobby.
   - Use your preferred DLL injector to inject `PD3-GG.dll` into the Payday 3 process.
   - The ImGui menu should appear, controllable via mouse or configured keybinds.

4. **Controls**:
   - Default keybinds (configurable in the menu):
     - Toggle Menu: `Insert`.
     - Unload Mod: `Delete`.
     - Apply Weapon Mods: `F1` (modify fire rate, spread, etc.).
     - Highlight Enemies: `F2` (marks enemies through walls).
   - Navigate the ImGui menu with your mouse to adjust settings or enable/disable features.

5. **Logging**:
   - Console logs are enabled by default.
   - To enable file logging for process events, toggle the option in the ImGui menu.
   - Logs are saved to the same directory as the DLL (e.g., `process_events.log`).

## Future Plans

The following features are planned for future updates:
- **Drawing ESP**: Implement efficient ESP (Extra Sensory Perception) for visual overlays. Preliminary code is tested but requires optimization for frame time efficiency. Note: The current marking mechanic reduces the necessity for ESP on living NPCs.
- **Stealth Features**: Add mechanics for manipulating non-masked gameplay (e.g., pre-heist or stealth phases). Specific features are still in the planning stage.
- **Aimbot**: Explore leveraging the game's AI aim system to simulate aim assistance on the client side, potentially running lightweight simulations for player-controlled aiming.

## Notes

- This mod is intended for **single-player or private lobbies only**. Using it	In public matches may violate Payday 3's terms of service and result in bans.
- The mod is provided as-is, with no warranty. Use at your own risk.
- Ensure your game and injector are compatible with the latest Payday 3 patch to avoid crashes or compatibility issues.

## Contributing

Contributions are welcome! Please:
1. Fork the repository.
2. Create a feature branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -m 'Add YourFeature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Open a pull request.

## Issues

If you encounter bugs or have feature requests, please open an issue on the [Issues](https://github.com/Lilith2/PD3-GG/issues) page. Include:
- A detailed description of the problem or request.
- Steps to reproduce (if applicable).
- Any relevant logs or screenshots.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Disclaimer

PD3-GG is an unofficial mod and is not affiliated with Starbreeze Studios or the Payday 3 development team. Use responsibly and respect the game's community guidelines.