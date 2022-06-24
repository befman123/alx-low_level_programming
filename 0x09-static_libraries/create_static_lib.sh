#!/bin/bash
ls | grep ".c$" | tr '\n' ' ' | xargs gcc -c
ls | grep ".c$" | tr '\n' ' ' | xargs ar rc liball.a
