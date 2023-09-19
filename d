#!/bin/bash

du -caBM "$@" | sort -n | tail -100
