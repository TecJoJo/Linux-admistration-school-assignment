#!/bin/sh

git add .
echo "commit message: "
read message
git commit -m"$message"
echo "The commit message you typed in is $message."
git push
