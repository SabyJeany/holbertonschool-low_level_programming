#!/bin/bash

frames=(
"  O  
 /|\\ 
 / \\ "
" \\O/ 
   |  
  / \\"
"  O  
 /|\\ 
 / \\ "
" \O/ 
  |   
 / \\"
)

while true; do
  for frame in "${frames[@]}"; do
    clear
    echo "$frame"
    sleep 0.3
  done
done
