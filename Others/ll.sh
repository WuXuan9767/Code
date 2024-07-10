#!/bin/sh /etc/rc.common
# Copyright (C) 2008-2014 OpenWrt.org

ip link add link eth1 name eth1.1 type macvlan
ip link add link eth1 name eth1.2 type macvlan
ifconfig eth1.1 up
ifconfig eth1.2 up
udhcpc -i eth1.1
udhcpc -i eth1.2

ips=$(ifconfig -a | grep inet | grep -v 127.0.0.1 | grep -v inet6 | awk '{print $2}' | tr -d "addr:" | grep "10.16")
ips_array=($ips)

#user1
user1_name=1689109
user1_pd=3592689ll
server1=cmcc
echo "${ips_array[2]}"
curl "http://192.168.200.2:801/eportal/?c=Portal&a=login&callback=dr1003&login_method=1&user_account=%2C1%2C${user1_name}%40${server1}&user_password=${user1_pd}&wlan_user_ip=${ips_array[0]}&wlan_user_ipv6=&wlan_user_mac=000000000000&wlan_ac_ip=&wlan_ac_name=&jsVersion=3.3.3&v=9317"

echo "\n${ips_array[2]}"
curl "http://192.168.200.2:801/eportal/?c=Portal&a=login&callback=dr1003&login_method=1&user_account=%2C0%2C${user1_name}%40${server1}&user_password=${user1_pd}&wlan_user_ip=${ips_array[1]}&wlan_user_ipv6=&wlan_user_mac=000000000000&wlan_ac_ip=&wlan_ac_name=&jsVersion=3.3.3&v=9317"
#user2
user2_name=1689116
user2_pd=zh203818zh
server2=unicom

echo "\n${ips_array[2]}"
curl "http://192.168.200.2:801/eportal/?c=Portal&a=login&callback=dr1003&login_method=1&user_account=%2C1%2C${user1_name}%40${server2}&user_password=${user2_pd}&wlan_user_ip=${ips_array[2]}&wlan_user_ipv6=&wlan_user_mac=000000000000&wlan_ac_ip=&wlan_ac_name=&jsVersion=3.3.3&v=9317"

echo "\n${ips_array[2]}"
curl "http://192.168.200.2:801/eportal/?c=Portal&a=login&callback=dr1003&login_method=1&user_account=%2C0%2C${user1_name}%40${server2}&user_password=${user2_pd}&wlan_user_ip=${ips_array[3]}&wlan_user_ipv6=&wlan_user_mac=000000000000&wlan_ac_ip=&wlan_ac_name=&jsVersion=3.3.3&v=9317"