import requests
from bs4 import BeautifulSoup
url ='https://s.weibo.com/top/summary'

cookie='SCF=Ag_o6UDqLjTmdM84nXxbxqcZCDCZ6WjgVLYn2P8bW8B31rnpqcPRFxbvhGFpEOhFA_Ev-lIA-BEEw68tfN9cVC4.; SUB=_2AkMSSMRMf8NxqwFRmPwczWngboV2zwDEieKkFDWXJRMxHRl-yT8Xql0ttRB6OcjqoxlaD7qgSueg3j2v850fj8h9o59N; _s_tentry=-; Apache=2197663779363.459.1702293189252; SINAGLOBAL=2197663779363.459.1702293189252; ULV=1702293189269:1:1:1:2197663779363.459.1702293189252:'

headers ={
    "Cookie":cookie
}

r =requests.get(url,headers=headers)
data = r.text


soup = BeautifulSoup(data, 'html.parser')
print(soup)
# all_news存放热搜前50的新闻和热度,形式为 {'新闻':'热度'}字典
all_news = {}

# 定位网页元素，观察到热搜新闻位于'td'元素下，class为'td-02'
for i, news in enumerate(soup.find_all('td', class_='td-02')[1:]):
    text = news.text.split('\n')[1].strip()
    print(f"NO.{i+1}:{text}")

