#!/bin/bash
git status --ignored -s | grep -e '!!' | cut -d ' ' -f 2
