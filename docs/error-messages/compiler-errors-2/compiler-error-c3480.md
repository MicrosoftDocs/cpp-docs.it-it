---
title: Errore del compilatore C3480 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3480
dev_langs:
- C++
helpviewer_keywords:
- C3480
ms.assetid: 7b2e055a-9604-4d13-861b-b38bda1a6940
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: d84314d20ea00e880981e418c2b5b11008f74229
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3480"></a>Errore del compilatore C3480
'var': una variabile di acquisizione delle espressioni lambda deve essere inclusa in un ambito della funzione contenitore  
  
 La variabile di acquisizione delle espressioni lambda non è inclusa in un ambito della funzione contenitore.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Rimuovere la variabile dall'elenco di acquisizione dell'espressione lambda.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3480 perché la variabile `global` non è inclusa in un ambito della funzione contenitore:  
  
```  
// C3480a.cpp  
  
int global = 0;  
int main()  
{  
   [&global] { global = 5; }(); // C3480  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente risolve l'errore C3480 rimuovendo la variabile `global` dall'elenco di acquisizione dell'espressione lambda:  
  
```  
// C3480b.cpp  
  
int global = 0;  
int main()  
{  
   [] { global = 5; }();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
