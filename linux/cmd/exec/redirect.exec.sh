#!/bin/bash

exec 9<> a.out

echo "Hello World!" >& 9


