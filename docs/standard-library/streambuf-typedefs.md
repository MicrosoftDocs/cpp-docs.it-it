---
title: '&lt;streambuf&gt; typedefs | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- streambuf/std::streambuf
- streambuf/std::wstreambuf
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
caps.latest.revision: 11
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 3ab3209afba1f0a1f51f0915a1aa25ecca0ee2c7
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltstreambufgt-typedefs"></a>&lt;streambuf&gt; typedefs
|||  
|-|-|  
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|  
  
##  <a name="streambuf"></a>  streambuf  
 A specialization of `basic_streambuf` that uses `char` as the template parameters.  
  
```
typedef basic_streambuf<char, char_traits<char>> streambuf;
```  
  
### <a name="remarks"></a>Remarks  
 The type is a synonym for the template class [basic_streambuf](../standard-library/basic-streambuf-class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="wstreambuf"></a>  wstreambuf  
 A specialization of `basic_streambuf` that uses `wchar_t` as the template parameters.  
  
```
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```  
  
### <a name="remarks"></a>Remarks  
 The type is a synonym for the template class [basic_streambuf](../standard-library/basic-streambuf-class.md), specialized for elements of type `wchar_t` with default character traits.  
  
## <a name="see-also"></a>See Also  
 [\<streambuf>](../standard-library/streambuf.md)




