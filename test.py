import requests as req

host = "https://github.com/"
words = [chr(i) for i in range(97,123)]
count = 0
ok = {}
for i in words:
    url1 = host + i
    for ii in words:
        url2 = url1 + ii
        for iii in words:
            url3 = url2 + iii
            url = url3
            res = req.head(url)
            count += 1
            print(" Url" +str(count)  + url + "        Status_code :" + str(res.status_code))
            if res.status_code == 404:
                ok[url] = res.url
print(ok)