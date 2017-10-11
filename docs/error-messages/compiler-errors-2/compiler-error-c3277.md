---
title: Errore del compilatore C3277 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3277
dev_langs:
- C++
helpviewer_keywords:
- C3277
ms.assetid: 8ac5f476-e30c-4879-92c6-f03cdbd74045
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: c5ce51c198c998b96dfa941cb088276b610142f1
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3277"></a>Errore del compilatore C3277
non è possibile definire un enum non gestito 'enum' in 'tipo' gestito  
  
 È stata definita un'enumerazione in modo non corretto all'interno di un tipo gestito.  
  
 L'esempio seguente genera l'errore C3277:  
  
```  
// C3277a.cpp  
// compile with: /clr  
ref class A  
{  
   enum E {e1,e2};   // C3277  
   // try the following line instead  
   // enum class E {e1,e2};  
};  
  
int main()  
{  
}  
```  

