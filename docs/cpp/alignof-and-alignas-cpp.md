---
title: alignof and alignas (C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 1d18aa8a-9621-4fb5-86e5-4cc86d5187f4
caps.latest.revision: 2
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 39a215bb62e4452a2324db5dec40c6754d59209b
ms.openlocfilehash: fa0553d259c2ef33b33cede107a9a2f54612bd7f
ms.contentlocale: it-it
ms.lasthandoff: 09/11/2017

---
# <a name="alignof-and-alignas-c"></a>alignof and alignas (C++)
The `alignas` type specifier is a portable, C++ standard way to specify custom alignment of variables and user defined types. The `alignof` operator is likewise a standard, portable way to obtain the alignment of a specified type or variable.  
  
## <a name="example"></a>Example  
 You can use `alignas` on a class, struck or union, or on individual members. When multiple `alignas` specifiers are encountered, the compiler will choose the strictest one, (the one with the largest value).  
  
```cpp  
// alignas_alignof.cpp
// compile with: cl /EHsc alignas_alignof.cpp
#include <iostream>

struct alignas(16) Bar  
{      
    int i;       // 4 bytes  
    int n;      // 4 bytes  
    alignas(4) char arr[3];  
    short s;          // 2 bytes  
};  

int main()
{  
    std::cout << alignof(Bar) << std::endl; // output: 16  
}  
```  
  
## <a name="see-also"></a>See Also  
 [Alignment](../cpp/alignment-cpp-declarations.md)
