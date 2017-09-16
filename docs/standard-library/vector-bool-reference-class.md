---
title: vector&lt;bool&gt;::reference Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vector/vector<bool>::reference
dev_langs:
- C++
helpviewer_keywords:
- vector<bool> reference class
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
caps.latest.revision: 22
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
ms.openlocfilehash: fe5ce0fa142c7d881db249d4c5905549eae5d8e6
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="vectorltboolgtreference-class"></a>vector&lt;bool&gt;::reference Class
The `vector<bool>::reference` class is a proxy class provided by the [vector\<bool> Class](../standard-library/vector-bool-class.md) to simulate `bool&`.  
  
## <a name="remarks"></a>Remarks  
 A simulated reference is required because C++ does not natively allow direct references to bits. `vector<bool>` uses only one bit per element, which can be referenced by using this proxy class. However, the reference simulation is not complete because certain assignments are not valid. For example, because the address of the `vector<bool>::reference` object cannot be taken, the following code that uses [vector\<bool>::operator&#91;&#93;](http://msdn.microsoft.com/Library/97738633-690d-4069-b2d9-8c54104fbfdd) is not correct:  
  
```cpp  
vector<bool> vb;  
// ...  
bool* pb = &vb[1]; // conversion error - do not use  
bool& refb = vb[1];   // conversion error - do not use  
```  
  
### <a name="member-functions"></a>Member Functions  
  
|||  
|-|-|  
|[flip](../standard-library/vector-bool-reference-flip.md)|Inverts the Boolean value of a vector element.|  
|[operator bool](../standard-library/vector-bool-reference-operator-bool.md)|Provides an implicit conversion from `vector<bool>::reference` to `bool`.|  
|[operator=](../standard-library/vector-bool-reference-operator-assign.md)|Assigns a Boolean value to a bit, or the value held by a referenced element to a bit.|  
  
## <a name="requirements"></a>Requirements  
 **Header**: \<vector>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [\<vector>](../standard-library/vector.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)


