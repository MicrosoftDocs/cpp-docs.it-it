---
title: Errore del compilatore C3156 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3156
dev_langs:
- C++
helpviewer_keywords:
- C3156
ms.assetid: 1876da78-b94e-4af7-9795-28f72b209b3e
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 793b143fa42e790610a086782c4bf99369965e1f
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3156"></a>Errore del compilatore C3156
'class': impossibile avere una definizione locale di un tipo gestito o WinRT  
  
 Una funzione non può contenere la definizione, o dichiarazione, di una classe, struct o interfaccia gestita o WinRT.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3156.  
  
```  
// C3156.cpp  
// compile with: /clr /c  
void f() {  
   ref class X {};   // C3156  
   ref class Y;   // C3156  
}  
```  

