---
title: vector&lt;bool&gt;::reference::operator bool | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- operatorbool", "vector<bool>::reference::operatorbool", "bool", "std::vector<bool>::reference::operatorbool
dev_langs:
- C++
helpviewer_keywords:
- BOOL operator
- reference::operator bool
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
caps.latest.revision: 20
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
ms.openlocfilehash: c5f7955f2c3c5d71fad532d9e8c5b409c4026984
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="vectorltboolgtreferenceoperator-bool"></a>vector&lt;bool&gt;::reference::operator bool
Provides an implicit conversion from `vector<bool>::reference` to `bool`.  
  
## <a name="syntax"></a>Syntax  
  
```  
operator bool() const;
```  
  
## <a name="return-value"></a>Return Value  
 The Boolean value of the element of the [vector\<bool>](../standard-library/vector-bool-class.md) object.  
  
## <a name="remarks"></a>Remarks  
 The `vector<bool>` object cannot be modified by this operator.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<vector>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [vector\<bool>::reference Class](../standard-library/vector-bool-reference-class.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)


