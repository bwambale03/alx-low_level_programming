# Dynamic Libraries in C with Docker

## Introduction
This guide walks you through the Docker setup for a C project that uses dynamic libraries, ideal for ensuring a consistent development and testing environment across different systems. This Dockerfile uses Debian Buster as a base image and sets up a C environment for compiling and running C code.

## Docker Setup

### Base Image
- **Debian Buster**: We start with `debian:buster` as the base image. This is a stable Debian release with broad support for packages, providing a reliable foundation for our development environment.

### Working Directory
- **Setting Up the Working Directory**: The `WORKDIR` is set to `/usr/src/app`. This command sets the directory inside the container where all subsequent commands will be run.

### Installing Dependencies
- **Install Essential Packages**:
  ```dockerfile
  RUN apt-get update && apt-get install -y gcc make libc6-dev
