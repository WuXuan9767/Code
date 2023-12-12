import requests
import os
url ='https://movie.douban.com/j/search_subjects'
folder = 'D:/Code/Python/movie/'

params={
    "type":"movie",
    "tag":"热门",
    "page_limit":"50",
    "page_start":"0"
}
headers ={
    "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/114.0.0.0"
}

data = requests.get(url,params=params,headers=headers).json()
print(data)

if not os.path.exists(folder):
    os.makedirs(folder)

subjects = data.get('subjects')
for subject in subjects:
    movie_url = subject.get('cover')
    title = subject.get('title')
    print(title,movie_url)
    image = requests.get(movie_url,headers=headers)

    with open('D:/Code/Python/movie/{}.jpg'.format(title),mode='wb')as file:
        file.write(image.content)
