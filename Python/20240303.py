
url= "http://192.168.200.2:801/eportal/?c=Portal&a=login&callback=dr1003&login_method=1&user_account=%2C1%2C1689109%40cmcc&user_password=3592689ll&wlan_user_ip= 10.16.47.240&wlan_user_ipv6=&wlan_user_mac=000000000000&wlan_ac_ip=&wlan_ac_name=&jsVersion=3.3.3&v=9317"

#curl "http://192.168.200.2:801/eportal/?c=Portal&a=login&callback=dr1003&login_method=1&user_account=%2C1%2C1689109%40cmcc&user_password=3592689ll&wlan_user_ip=10.16.32.172&wlan_user_ipv6=&wlan_user_mac=000000000000&wlan_ac_ip=&wlan_ac_name=&jsVersion=3.3.3&v=9317"
import socket

# 函数 gethostname() 返回当前正在执行 Python 的系统主机名
res = socket.gethostbyname(socket.gethostname())
print(res)