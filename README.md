# PD3-GG: Payday 3 Mod Menu

PD3-GG is a single-player and private lobby mod menu for Payday 3, designed to enhance gameplay through a customizable, injectable DLL with an ImGui-based interface. This mod is intended for offline use or private sessions to avoid disrupting public gameplay or violating game terms of service.

> [!WARNING]  
> This mod **only supports DirectX 11**. There are no plans to update it for DirectX 12, as the developer is focusing solely on DX11 compatibility. Note that DX11 may have performance issues, as Payday 3 developers are prioritizing DirectX 12 optimizations.

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
  - **_Note_**: Weapon mods must be applied in a single-player match with the desired loadout equipped. The mod writes to a cached database object property list that is only created for equipped items after entering a match. A console message confirms or denies successful application. Once applied, mods persist for those weapons in subsequent matches (single-player or private lobbies) as long as the same loadout is equipped.
- **Enemy Highlighting**: Mark enemies through walls on demand using the in-game marking mechanic.
- **Hooked Process Event**: Intercepts and processes game events for mod functionality.
- **Logging**: Flexible logging system that:
  - Outputs to the console by default.
  - Logs process events to a file when enabled.
  - Supports logging of any in-game data to a file.

## Usage

1. **Requirements**:
   - Payday 3 (PC version, **DirectX 11 only**).
   - A DLL injector.  
     **Warning**: Common injectors like Cheat Engine and Extreme Injector may not be safe for Payday 3, as they could be flagged by server-side logging. It’s recommended to build your own injector or use a known, trusted injector from a reputable source to minimize risks.
   - Windows OS (tested on Windows 10/11).
   - Visual C++ Redistributable for Visual Studio 2019/2022. Most users have this installed via Payday 3 or other games. If needed, download it from [Microsoft](https://docs.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist).

2. **Installation**:
   - Download the latest release from the [Releases](https://github.com/Lilith2/PD3-GG/releases) page.
   - Place the `PD3-GG.dll` in a secure location.

3. **Injection**:
   - Launch Payday 3 in single-player or a private lobby, ensuring the game is running in DirectX 11 mode.
   - Use your trusted DLL injector to inject `PD3-GG.dll` into the Payday 3 process.
   - The ImGui menu should appear, controllable via mouse or configured keybinds.

4. **Applying Weapon Mods**:
   - Start a **single-player match** with the loadout you want to mod.
   - Press the weapon mod keybind (default: `F1`) to apply modifications (e.g., fire rate, spread, etc.).
   - Check the console for a message confirming or denying successful mod application.
   - Once confirmed, exit to the main menu. The modified weapons will retain their new stats in subsequent single-player or private lobby matches, as long as you use the same loadout.
   - **_Note_**: Weapon mods only apply to equipped items and require entering a match at least once to create the cached database object property list.

5. **Controls**:
   - Default keybinds (configurable in the menu):
     - Toggle Menu: `Insert`.
     - Unload Mod: `Delete`.
     - Apply Weapon Mods: `F1` (modify fire rate, spread, etc.).
     - Highlight Enemies: `F2` (marks enemies through walls).
   - Navigate the ImGui menu with your mouse to adjust settings or enable/disable features.

6. **Logging**:
   - Console logs are enabled by default.
   - To enable file logging for process events, toggle the option in the ImGui menu.
   - Logs are saved to the same directory as the DLL (e.g., `process_events.log`).

## Compiling the Project

To compile the project, you’ll need Visual Studio (2019/2022 recommended) with C++ support. Be aware of the following pitfalls:

- **Hard-Coded Include Paths**: The Visual Studio project files use hard-coded include paths for project files, without environment variables. You must manually update these paths in the project settings to match your system’s file structure.
- **SDK Folder Structure**:
  - The `SDK` folder must contain only `.hpp` header files. Do not include `.cpp` files here.
  - The `Dumper7` folder should only include `.cpp` files you intend to use directly. At minimum, include:
    - `Basic.cpp`
    - `CoreUObject_functions.cpp`
    - `Engine_functions.cpp`
  - This project uses `StarBreeze_Functions.cpp` to call functions in process events from the general game client. Include it if you need similar functionality.
- **Visual Studio Settings**:
  - Compile with **"Build Errors Only"** in Visual Studio. IntelliSense struggles with large quantities of large files and may cause compilation issues if enabled.
  - Compile the DLL with the `/bigobj` flag to handle large object files generated by the project.
- **DirectX 11 Dependency**: The project is built for DirectX 11 only. DX11 may exhibit performance issues, as Payday 3 developers are focusing on DirectX 12.
- **Vestigial Code**: This project is ported from a broader mod framework, so there may be unused or vestigial code. It does not affect functionality but may require cleanup for clarity.
- **Dependencies**: Ensure you have the necessary SDKs (e.g., DirectX 11 SDK, Unreal Engine SDK via Dumper7). These are not included in the repository.

## Future Plans

The following features are planned for future updates:

- **Drawing ESP**: Implement efficient ESP (Extra Sensory Perception) for visual overlays. Preliminary code is tested but requires optimization for frame time efficiency. Note: The current marking mechanic reduces the necessity for ESP on living NPCs.
- **Stealth Features**: Add mechanics for manipulating non-masked gameplay (e.g., pre-heist or stealth phases). Specific features are still in the planning stage.
- **Aimbot**: Explore leveraging the game’s AI aim system to simulate aim assistance on the client side, potentially running lightweight simulations for player-controlled aiming.

## Notes

- This mod is intended for **single-player or private lobbies only**. Using it in public matches may violate Payday 3’s terms of service and result in bans.
- **Anti-Cheat and Bans**: Payday 3 does not appear to have client-level anti-cheat, but the game sends client logs to the server. There have been reports of bans in public matches, though the exact mechanisms are unclear. The developer used this mod for three months without issues, but caution is advised in public lobbies. Stick to single-player or private matches to minimize risks.
- The mod is provided as-is, with no warranty. Use at your own risk.
- Ensure your game and injector are compatible with the latest Payday 3 patch to avoid crashes or compatibility issues.
- No DirectX 12 support is planned. DX11 performance may degrade as Payday 3 developers prioritize DX12.

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

This project is licensed under the GNU AFFERO GENERAL PUBLIC LICENSE. See the [LICENSE]([LICENSE](https://github.com/Lilith2/PD3-GG/blob/main/LICENSE.txt)) file for details.

## Disclaimer

PD3-GG is an unofficial mod and is not affiliated with Starbreeze Studios or the Payday 3 development team. Use responsibly and respect the game’s community guidelines.
