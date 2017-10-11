---
title: Errore del compilatore C3485 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3485
dev_langs:
- C++
helpviewer_keywords:
- C3485
ms.assetid: d67536f9-67a1-4ad9-9a94-d8bbbca3d0dc
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: cd49b93beb54776bf17a9ee2bc5c9816f0964451
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3485"></a>Errore del compilatore C3485
una definizione di espressione lambda non può contenere qualificatori di tipo const o volatile  
  
 Non è possibile usare un qualificatore `const` o `volatile` come parte della definizione di un'espressione lambda.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Rimuovere il qualificatore `const` o `volatile` dalla definizione dell'espressione lambda.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3485 perché usa il qualificatore `const` come parte della definizione di un'espressione lambda:  
  
```  
// C3485.cpp  
  
int main()  
{  
   auto x = []() const mutable {}; // C3485  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
