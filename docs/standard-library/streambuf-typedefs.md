---
title: Typedef &lt;streambuf&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- iosfwd/std::streambuf
- iosfwd/std::wstreambuf
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
caps.latest.revision: 11
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 932b5ce7a664f75eb92f19fdbf32363b9300fb09
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltstreambufgt-typedefs"></a>Typedef &lt;streambuf&gt;
|||  
|-|-|  
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|  
  
##  <a name="streambuf"></a>  streambuf  
 Una specializzazione di `basic_streambuf` che usa `char` come parametri modello.  
  
```
typedef basic_streambuf<char, char_traits<char>> streambuf;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzata per gli elementi di tipo `char` con tratti di carattere predefiniti.  
  
##  <a name="wstreambuf"></a>  wstreambuf  
 Una specializzazione di `basic_streambuf` che usa `wchar_t` come parametri modello.  
  
```
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzata per gli elementi di tipo `wchar_t` con tratti di carattere predefiniti.  
  
## <a name="see-also"></a>Vedere anche  
 [\<streambuf>](../standard-library/streambuf.md)




