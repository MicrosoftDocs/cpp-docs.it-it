---
title: '&lt;istream&gt; typedefs | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- istream/std::iostream
- istream/std::istream
- istream/std::wiostream
- istream/std::wistream
ms.assetid: 55bc1f84-53a7-46ca-a36f-ac6ef75d0374
caps.latest.revision: 10
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 8a2142bb4e943c7ee55ba987fddc0084e70f6196
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltistreamgt-typedefs"></a>&lt;istream&gt; typedefs
||||  
|-|-|-|  
|[iostream](#iostream)|[istream](#istream)|[wiostream](#wiostream)|  
|[wistream](#wistream)|  
  
##  <a name="iostream"></a>  iostream  
 A type `basic_iostream` specialized on `char`.  
  
```  
typedef basic_iostream<char, char_traits<char>> iostream;  
```  
  
### <a name="remarks"></a>Remarks  
 The type is a synonym for template class [basic_iostream](../standard-library/basic-iostream-class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="istream"></a>  istream  
 A type `basic_istream` specialized on `char`.  
  
```  
typedef basic_istream<char, char_traits<char>> istream;  
```  
  
### <a name="remarks"></a>Remarks  
 The type is a synonym for template class [basic_istream](../standard-library/basic-istream-class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="wiostream"></a>  wiostream  
 A type `basic_iostream` specialized on `wchar_t`.  
  
```  
typedef basic_iostream<wchar_t, char_traits<wchar_t>> wiostream;  
```  
  
### <a name="remarks"></a>Remarks  
 The type is a synonym for template class [basic_iostream](../standard-library/basic-iostream-class.md), specialized for elements of type `wchar_t` with default character traits.  
  
##  <a name="wistream"></a>  wistream  
 A type `basic_istream` specialized on `wchar_t`.  
  
```  
typedef basic_istream<wchar_t, char_traits<wchar_t>> wistream;  
```  
  
### <a name="remarks"></a>Remarks  
 The type is a synonym for template class [basic_istream](../standard-library/basic-istream-class.md), specialized for elements of type `wchar_t` with default character traits.  
  
## <a name="see-also"></a>See Also  
 [\<istream>](../standard-library/istream.md)


