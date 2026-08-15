# Backup Scripts - Linux Disk Synchronization Utility 🗂️🔁

## Description 📖

A command-line backup utility that uses `rsync` to synchronize folders or entire disks on Linux systems. The C++ program (`backup_scripts_2.cpp`) asks the user for source and destination paths, then executes `rsync -av --delete` to perform the synchronization.

⚠️ **WARNING**: The `--delete` option will remove files from the destination that are not present in the source.

## Key Features ✨

- Simple CLI interface written in C++
- Uses `rsync` for reliable and efficient synchronization
- Two modes: copy a specific folder or sync an entire disk
- Support for paths with spaces (quoted rsync commands)
- Shows which paths are being copied in the output

## Requirements 🛠️

- Linux (or any system with `rsync` installed)
- `rsync` installed
- `g++` to compile the C++ program
- (Optional) Python3 + `pyfiglet` library for ASCII art header

### Installation on Debian/Ubuntu:

```bash
sudo apt update
sudo apt install -y rsync g++ python3-pip
pip3 install pyfiglet
```

### Installation on Fedora:

```bash
sudo dnf update
sudo dnf install -y rsync g++ python3-pip
pip3 install pyfiglet
```

## Build & Run ▶️

### Step 1: Modify the source paths in the code

Open the file `backup_scripts_2.cpp` and replace the default paths with your actual paths.

**Line 20 - Option 1 (Copy a single folder):**
```cpp
system("rsync -av --delete /your/source/path/ /your/destination/path/");
```

Replace `/your/source/path/` and `/your/destination/path/` with your actual paths (e.g., `/media/user/HDD/documents/` and `/media/user/SSD/backup/documents/`).

**Line 30 - Option 2 (Sync entire disk):**
```cpp
system("rsync -av --delete /your/source/path/ /your/destination/path/");
```

Replace `/your/source/path/` and `/your/destination/path/` with your actual disk or partition paths (e.g., `/mnt/source_disk/` and `/mnt/destination_disk/`).

### Step 2: Compile the C++ program

```bash
g++ -o backup_scripts_2 backup_scripts_2.cpp
```

### Step 3: Run the program

```bash
./backup_scripts_2
```

Follow the prompts to select the mode and enter your source and destination paths.

## Usage Example 🧭

1. Choose option 1 to copy a single folder, or option 2 to sync an entire disk
2. Enter your source path (e.g., `/media/user/HDD/documents/`)
3. Enter your destination path (e.g., `/media/user/SSD/backup/documents/`)
4. Confirm and wait for the synchronization to complete

## Important Warning ⚠️

The program uses `--delete` with rsync by default. This means files that exist in the destination but not in the source will be deleted. Double-check your source and destination paths before running to avoid accidental data loss.

If you prefer to keep files in the destination, remove the `--delete` option from the command in `backup_scripts_2.cpp`.

## Troubleshooting 🐞

- **"rsync: command not found"**: install rsync
- **Permission denied**: run with appropriate permissions (use `sudo` if needed)
- **Path not found**: verify your source/destination paths and that devices are mounted
- **Compilation errors**: ensure `g++` is installed and up to date

## Project Structure 📁

```
backup_scripts/
├── backup_scripts_2.cpp    # C++ backend program
├── README.md               # This file
└── LICENSE                 # GPLv3 License
```

## License 📜

This project is licensed under GPLv3.

## Acknowledgments 🙏

- [rsync](https://rsync.samba.org/) - File synchronization tool
- [pyfiglet](https://pypi.org/project/pyfiglet/) - ASCII art library (optional)
