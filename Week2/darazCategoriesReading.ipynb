{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 3,
   "id": "9ecd78e7",
   "metadata": {},
   "outputs": [],
   "source": [
    "import pandas as pd\n",
    "from selenium import webdriver\n",
    "from bs4 import BeautifulSoup\n",
    "driver = webdriver.Chrome(executable_path=r'C:\\Users\\DR.NOOR KHAN\\Week2\\chromedriver.exe')\n",
    "driver.get(\"https://www.daraz.pk/mens-shorts/?spm=a2a0e.home.cate_9.4.35e34937QXWeAF\")\n",
    "content = driver.page_source\n",
    "soup = BeautifulSoup(content)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 28,
   "id": "dc3ad621",
   "metadata": {},
   "outputs": [],
   "source": [
    "products=[] #List to store name of the product\n",
    "prices=[] #List to store price of the product\n",
    "discounts=[] #List to store rating of the product\n",
    "for a in soup.findAll('div',attrs={'class':'c2prKC'}):\n",
    "    name=a.find('div' , attrs = {\"class\":\"c16H9d\"})\n",
    "    price=a.find('span', attrs={'class':'c13VH6'})\n",
    "    discount=a.find('span', attrs={'class':'c1hkC1'})\n",
    "    products.append(name.text)\n",
    "    prices.append(price.text)\n",
    "    if (discount != None):\n",
    "        discounts.append(discount.text)\n",
    "    else:\n",
    "        discounts.append(\"0%\")\n",
    "df = pd.DataFrame({'Product Disc':products,'Price':prices,'Discounts':discounts})\n",
    "df.to_csv('darazproducts.csv', index=False, encoding='utf-8')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "03040040",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "fcd02227",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.8.8"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}
