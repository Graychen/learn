#! /bin/sh

echo "Is it morning? Please answer yes or no."
read YES_OR_NO
if [ "$YES_OR_NO" = "yes" ];then
    echo "Goods morning!"
elif [ "$YES_OR_NO" = "no" ]; then
    echo "Goods afternoon!"
else    
    echo "Sorry,$YES_OR_NO not recognized.Enter yes or no."
    exit 1
fi
exit 0
