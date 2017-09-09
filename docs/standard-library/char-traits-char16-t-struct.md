---
title: char_traits&lt;char16_t&gt; Struct | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- char_traits<char16_t>
- string/std::char_traits<char16_t>
dev_langs:
- C++
helpviewer_keywords:
- char_traits<char16_t> class
ms.assetid: 5daf3b62-dd6e-451f-b189-0350a04ff966
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
ms.openlocfilehash: 6b5cc6a40443dcbd2eedf10ea43d776fe18b4b5e
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="chartraitsltchar16tgt-struct"></a>char_traits&lt;char16_t&gt; Struct
A struct that is a specialization of the template struct **char_traits\<CharType>** to an element of type `char16_t`.  
  
## <a name="syntax"></a>Syntax  
  
```
template <>  
struct char_traits<char16_t>;
```  
  
## <a name="remarks"></a>Remarks  
 Specialization allows the struct to take advantage of library functions that manipulate objects of the type `char16_t`.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<string>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [\<string>](../standard-library/string.md)   
 [char_traits Struct](../standard-library/char-traits-struct.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)




