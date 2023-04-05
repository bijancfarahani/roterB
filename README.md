# roterB Plugin

This is my stab at writing my own audio plugin.  We're going with a rotary effect, with this being the dream inspiration https://youtu.be/uVtxFHkMRxA.


# Setup
This repo contains a Dockerfile for building on Linux.  But the windowing system can't (easily) run in a docker container. Right now, the app crashes with some windowing assertion error.  Until this is fixed, rely on Visual Studio for any actual development + testing.

## Running in the container
### Prerequisites
Docker needs to be installed on your dev machine.

#### Build the image
After cloning, go into the root of the repo and run:

```
you@yourLocalDevMachine:/path/to/repo/$ ./build_docker_image.sh
```
to build the image with all the packages/libraries needed build and run JUCE plugins.
#### Start a container
After the image is build, run:
```
you@yourLocalDevMachine:/path/to/repo/$ ./start_docker_container.sh
```
This will attach your shell to the container and set you in the same directory (the repo root).
