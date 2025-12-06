# MyApp - C++ Application

A simple C++ application with automated builds and releases via GitHub Actions.

## Features

- Cross-platform C++ application
- Automated builds for macOS
- GitHub Actions CI/CD pipeline
- Automatic releases on version tags

## Building Locally

### Prerequisites
- CMake 3.10 or higher
- C++ compiler with C++17 support

### Build Instructions

```bash
# Create build directory
cmake -B build -DCMAKE_BUILD_TYPE=Release

# Build the project
cmake --build build --config Release

# Run the application
./build/myapp
```

## Releases

Releases are automatically created when you push a version tag:

```bash
git tag v1.0.0
git push origin v1.0.0
```

The GitHub Actions workflow will:
1. Build executables for macOS
2. Create a GitHub release
3. Upload all platform binaries to the release

## Download

Download the latest release for your platform from the [Releases](../../releases) page.

## License

MIT License
