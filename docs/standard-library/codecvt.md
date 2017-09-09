---
title: '&lt;codecvt&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- codecvt", "std::<codecvt>", "<codecvt>
dev_langs:
- C++
helpviewer_keywords:
- codecvt header
ms.assetid: d44ee229-00d5-4761-9b48-0c702122789d
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: ebfd3f17d03d7cdb83a5ac8d25e6a1fda472cebb
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltcodecvtgt"></a>&lt;codecvt&gt;
Defines several template classes that describe objects based on template class [codecvt](../standard-library/codecvt-class.md). These objects can serve as [locale facets](../standard-library/locale-class.md#facet_class) that control conversions between a sequence of values of type `Elem` and a sequence of values of type `char`.  
  
## <a name="syntax"></a>Syntax  
  
```  
#include <codecvt>  
  
```  
  
## <a name="remarks"></a>Remarks  
 The locale facets declared in this header convert between several character encodings. For wide characters (stored within the program in fixed-size integers):  
  
-   UCS-4 is Unicode (ISO 10646) encoded within the program  
  
-   UCS-4 is Unicode (ISO 10646) encoded within the program as a 32-bit integer.  
  
-   UCS-2 is Unicode encoded within the program  
  
-   UCS-2 is Unicode encoded within the program as a 16-bit integer.  
  
-   UTF-16 is Unicode encoded within the program as either one  
  
-   UTF-16 is Unicode encoded within the program as either one or two 16-bit integers. (Note that this does not meet all the requirements of a valid wide-character encoding for Standard C or Standard C++. Nevertheless it is widely used as such.)  
  
 For byte streams (stored in a file, transmitted as a byte sequence, or stored within the program in an array of `char`):  
  
-   UTF-8 is Unicode encoded  
  
-   UTF-8 is Unicode encoded within a byte stream as one or more eight-bit bytes with a deterministic byte order.  
  
-   UTF-16LE is Unicode encoded  
  
-   UTF-16LE is Unicode encoded within a byte stream as UTF-16 with each 16-bit integer presented as two eight-bit bytes, less significant byte first.  
  
-   UTF-16BE is Unicode encoded  
  
-   UTF-16BE is Unicode encoded within a byte stream as UTF-16 with each 16-bit integer presented as two eight-bit bytes, more significant byte first.  
  
### <a name="enumerations"></a>Enumerations  
  
|||  
|-|-|  
|[codecvt_mode](../standard-library/codecvt-enums.md#codecvt_mode)|Specifies configuration information for locale facets.|  
  
### <a name="classes"></a>Classes  
  
|||  
|-|-|  
|[codecvt_utf8](codecvt-utf8-class.md)|Represents a locale facet that converts between wide characters encoded as UCS-2 or UCS-4, and a byte stream encoded as UTF-8.|  
|[codecvt_utf8_utf16](codecvt-utf8-utf16-class.md)|Represents a locale facet that converts between wide characters encoded as UTF-16 and a byte stream encoded as UTF-8.|  
|[codecvt_utf16](codecvt-utf16-class.md)|Represents a locale facet that converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE or UTF-16BE.|  

  
## <a name="requirements"></a>Requirements  
 **Header:** \<codecvt>  
  
 **Namespace:** stdt  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)





