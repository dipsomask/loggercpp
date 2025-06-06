FROM ubuntu:24.04

RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    clang \
    clangd \
    clang-format \
    git \
    wget \
    curl \
    ca-certificates \
    sudo \
    pkg-config \
    libssl-dev \
    libffi-dev \
    ninja-build \
    python3 \
    python3-pip \
    nlohmann-json3-dev \
    && rm -rf /var/lib/apt/lists/*