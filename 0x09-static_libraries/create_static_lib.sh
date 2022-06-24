#!/bin/bash
ls | grep ".c$" | tr '\n' ' ' | xargs gcc -c
ls | grep ".o$" | tr '\n' ' ' | xargs ar rc liball.a
