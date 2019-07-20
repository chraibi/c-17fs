#!/usr/bin/env bash

if [ "$TRAVIS_OS_NAME" == "linux" ]
then
    if [ "$CXX" = "g++" ];
    then
        sudo apt-get install -qq g++-9
        export CXX="g++-9"
    elif [ "$CXX" == "clang++" ]
    then
        sudo apt-get install -y  --allow-unauthenticated -qq clang-8  g++-9
        export CXX="clang++-8";
    fi
elif [ "$TRAVIS_OS_NAME" == "osx" ]
then
    echo "not yet implemented"
fi
