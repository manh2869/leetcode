import requests

response = requests.get("https://www.google.com/search","con meo")
print(response.status_code)
