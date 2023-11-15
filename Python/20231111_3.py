import requests
import json
import re
import pprint
import ffmpeg
import os

url=r'https://www.bilibili.com/video/BV1tg411V7P3'

header={
    "User-Agent":"Mozilla/5.0",
    "Referer":"https://www.bilibili.com/", 
}

resp=requests.get(url=url,headers=header)


obj=re.compile(r'window.__playinfo__=(.*?)</script>',re.S)
html_data=obj.findall(resp.text)[0] 

json_data=json.loads(html_data)

videos=json_data['data']['dash']['video']
video_url=videos[0]['baseUrl']

audios=json_data['data']['dash']['audio']
audio_url=audios[0]['baseUrl']

resp1=requests.get(url=video_url,headers=header)

with open('test.mp4',mode='wb') as f:
    f.write(resp1.content)

resp2=requests.get(url=audio_url,headers=header)

with open('test.mp3',mode='wb') as f:
    f.write(resp2.content)

print("爬取完成")

os.system('ffmpeg -i test.mp4 -i test.mp3 -acodec copy -vcodec copy testout.mp4')
os.remove("test.mp4")
os.remove("test.mp3")
print("合并完成")