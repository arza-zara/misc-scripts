#!/bin/bash

exec grep -Ei -C10 --color=always "$@"
