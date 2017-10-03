---
title: Typedef &lt;ostream&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- iosfwd/std::ostream
- iosfwd/std::wostream
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
caps.latest.revision: 11
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: bcf7df720a9b3a71ddbb32bd6eeb73f2f1332391
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltostreamgt-typedefs"></a>Typedef &lt;ostream&gt;
|||  
|-|-|  
|[ostream](#ostream)|[wostream](#wostream)|  
  
##  <a name="ostream"></a>  ostream  
 Crea un tipo da basic_ostream specializzato su `char` e `char_traits` specializzato su `char`.  
  
```
typedef basic_ostream<char, char_traits<char>> ostream;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_ostream](../standard-library/basic-ostream-class.md), specializzata per gli elementi di tipo `char` con tratti di carattere predefiniti.  
  
##  <a name="wostream"></a>  wostream  
 Crea un tipo da basic_ostream specializzato su `wchar_t` e `char_traits` specializzato su `wchar_t`.  
  
```
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_ostream](../standard-library/basic-ostream-class.md), specializzata per gli elementi di tipo `wchar_t` con tratti di carattere predefiniti.  
  
## <a name="see-also"></a>Vedere anche  
 [\<ostream>](../standard-library/ostream.md)




