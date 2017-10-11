---
title: Avviso del compilatore C4430 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4430
dev_langs:
- C++
helpviewer_keywords:
- C4430
ms.assetid: 12efbfff-aa58-4a86-a7d6-2c6a12d01dd3
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 4455419ab6ce8a98dfb26bdb6575cc229d364c0f
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-warning-c4430"></a>Avviso del compilatore C4430
identificatore di tipo mancante, verrà utilizzato int. Nota: In C++ non supportati int predefinito  
  
 Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual C++ 2005: tutte le dichiarazioni devono specificare in modo esplicito il tipo. non verrà utilizzato int.  
  
 C4430 viene sempre generato come errore.  È possibile disattivare questo avviso con il `#pragma warning` o **/wd**; vedere [avviso](../../preprocessor/warning.md) o [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /, abbiamo /wo, /WV., /WX (livello avviso)](../../build/reference/compiler-option-warning-level.md)per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4430.  
  
```  
// C4430.cpp  
// compile with: /c  
struct CMyClass {  
   CUndeclared m_myClass;  // C4430  
   int m_myClass;  // OK  
};  
  
typedef struct {  
   POINT();   // C4430  
   // try the following line instead  
   // int POINT();  
   unsigned x;  
   unsigned y;  
} POINT;  
```
