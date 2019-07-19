[![Build Status](https://travis-ci.com/chraibi/c-17fs.svg?branch=master)](https://travis-ci.com/chraibi/c-17fs)

# Linux

- `mkdir build`
- `cd build`


## g++ >= 8
- `cmake  -DCMAKE_CXX_COMPILER=g++-8  ..`
- `make`

## clang >=8

- `cmake  -DCMAKE_CXX_COMPILER=clang++-8  ..`
- `make`


# OSX

Waiting for OSX10.15 and Xcode 11

Until then

- Brew user
```
brew install gcc
```

- Port user

```
port install gcc8
```
