---
title: Errore del compilatore C3496 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3496
dev_langs: C++
helpviewer_keywords: C3496
ms.assetid: e19885f2-677f-4c1e-bc69-e35852262dc3
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e8e5e441011c69e2b50b4565981d89a7730d542f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3496"></a>Errore del compilatore C3496
'this' viene sempre acquisito per valore. '&' verrà ignorato  
  
 Non è possibile acquisire il puntatore `this` per riferimento.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Acquisire il puntatore `this` per valore.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3496 perché nell'elenco di acquisizione di un'espressione lambda compare un riferimento al puntatore `this` :  
  
```  
// C3496.cpp  
// compile with: /c  
  
class C  
{  
   void f()  
   {  
      [&this] {}(); // C3496  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)