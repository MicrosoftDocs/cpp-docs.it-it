---
title: nothrow_t Structure | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- nothrow_t
dev_langs:
- C++
helpviewer_keywords:
- nothrow_t class
ms.assetid: dc7d5d42-ed5a-4919-88fe-bbad519b7a1d
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
ms.openlocfilehash: 71d24b7e0f8d170426ce62dcac2ad4f3299f8847
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="nothrowt-structure"></a>nothrow_t Structure
The struct is used as a function parameter to operator new to indicate that the function should return a null pointer to report an allocation failure, rather than throw an exception.  
  
## <a name="syntax"></a>Syntax  
  
```
struct std::nothrow_t {};
```  
  
## <a name="remarks"></a>Remarks  
 The struct helps the compiler to select the correct version of the constructor. [nothrow](../standard-library/new-functions.md#nothrow) is a synonym for objects of type `std::nothrow_t`.  
  
## <a name="example"></a>Example  
 See [operator new](../standard-library/new-operators.md#op_new) and [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) for examples of how `std::nothrow_t` is used as a function parameter.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<new>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)




