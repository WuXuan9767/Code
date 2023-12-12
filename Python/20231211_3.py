import requests
from bs4 import BeautifulSoup
 
headers={"User-Agent": "Mozilla/5.0 compatible; MSIE 9.0;"
         "Windows NT 6.1; Trident /5.0;"}
#1.确定目标网站
#2.获取网址(网页内容)
for x in range(10):
    url = "https://movie.douban.com/top250?start={}&filter=".format(x * 25)
    response = requests.get(url,headers=headers).text
    soup = BeautifulSoup(response,features='lxml')
    src = soup.find_all('img')
    imagesrc=soup.find_all('img',width="100")
    for s in imagesrc:
        with open('jpg/{}.jpg'.format(s.get('alt')),'wb') as file:
            image = requests.get(s.get('src')).content
            file.write(image)