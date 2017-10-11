---
title: Errore del compilatore C3498 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3498
dev_langs:
- C++
helpviewer_keywords:
- C3498
ms.assetid: 0a5a7817-0872-4119-83bf-980a19113374
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 0429b9d21829f772596b6d0fd2c51d72b0924e26
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3498"></a>Errore del compilatore C3498
'var': non è possibile acquisire una variabile che dispone di un oggetto gestito o WinRTtype  
  
 Non è possibile acquisire una variabile con un tipo gestito o un tipo Windows Runtime in un'espressione lambda.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Passare la variabile gestita o Windows Runtime all'elenco di parametri dell'espressione lambda.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3498 perché una variabile con un tipo gestito viene visualizzata nell'elenco di acquisizione di un'espressione lambda:  
  
```  
// C3498a.cpp  
// compile with: /clr  
using namespace System;  
  
int main()  
{  
   String ^ s = "Hello";  
   [&s](String ^ r)   
      { return String::Concat(s, r); } (", World!"); // C3498  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente risolve l'errore C3498 passando la variabile gestita `s` all'elenco di parametri dell'espressione lambda:  
  
```  
// C3498b.cpp  
// compile with: /clr  
using namespace System;  
  
int main()  
{  
   String ^ s = "Hello";  
   [](String ^ s, String ^ r)   
      { return String::Concat(s, r); } (s, ", World!");  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
