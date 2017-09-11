---
title: Pimpl For Compile-Time Encapsulation (Modern C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: c3e8a90a-b328-4990-82bb-e1b147f76e07
caps.latest.revision: 11
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
ms.openlocfilehash: 0982df3552bd97cbaecf754afd6d442749745412
ms.contentlocale: it-it
ms.lasthandoff: 09/11/2017

---
# <a name="pimpl-for-compile-time-encapsulation-modern-c"></a>Pimpl For Compile-Time Encapsulation (Modern C++)
The *pimpl idiom* is a modern C++ technique to hide implementation, to minimize coupling, and to separate interfaces. Pimpl is short for "pointer to implementation." You may already be familiar with the concept but know it by other names like Cheshire Cat or Compiler Firewall idiom.  
  
## <a name="why-use-pimpl"></a>Why use pimpl?  
 Here's how the pimpl idiom can improve the software development lifecycle:  
  
-   Minimization of compilation dependencies.  
  
-   Separation of interface and implementation.  
  
-   Portability.  
  
## <a name="pimpl-header"></a>Pimpl header  
  
```cpp  
// my_class.h  
class my_class {  
   //  ... all public and protected stuff goes here ...  
private:  
   class impl; unique_ptr<impl> pimpl; // opaque type here  
};  
  
```  
  
 The pimpl idiom avoids rebuild cascades and brittle object layouts. It's well suited for (transitively) popular types.  
  
## <a name="pimpl-implementation"></a>Pimpl implementation  
 Define the `impl` class in the .cpp file.  
  
```cpp  
// my_class.cpp  
class my_class::impl {  // defined privately here  
  // ... all private data and functions: all of these  
  //     can now change without recompiling callers ...  
};  
my_class::my_class(): pimpl( new impl )  
{  
  // ... set impl values ...   
}  
```  
  
## <a name="best-practices"></a>Best practices  
 Consider whether to add support for non-throwing swap specialization.  
  
## <a name="see-also"></a>See Also  
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
