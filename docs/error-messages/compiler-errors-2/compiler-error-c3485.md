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
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 40c35bdb5be6fad108e612208b53773ceb4105e9
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

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
