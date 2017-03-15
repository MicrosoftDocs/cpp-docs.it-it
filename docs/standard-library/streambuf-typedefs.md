---
title: Typedef &lt;streambuf&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 8a11f21fc55babc7c71bb312bc582719f532347a
ms.lasthandoff: 02/24/2017

---
# <a name="ltstreambufgt-typedefs"></a>Typedef &lt;streambuf&gt;
|||  
|-|-|  
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|  
  
##  <a name="a-namestreambufa--streambuf"></a><a name="streambuf"></a>  streambuf  
 Una specializzazione di `basic_streambuf` che usa `char` come parametri modello.  
  
```
typedef basic_streambuf<char, char_traits<char>> streambuf;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzata per gli elementi di tipo `char` con tratti di carattere predefiniti.  
  
##  <a name="a-namewstreambufa--wstreambuf"></a><a name="wstreambuf"></a>  wstreambuf  
 Una specializzazione di `basic_streambuf` che usa `wchar_t` come parametri modello.  
  
```
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzata per gli elementi di tipo `wchar_t` con tratti di carattere predefiniti.  
  
## <a name="see-also"></a>Vedere anche  
 [\<streambuf>](../standard-library/streambuf.md)




