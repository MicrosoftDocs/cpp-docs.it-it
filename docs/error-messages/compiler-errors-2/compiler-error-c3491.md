---
title: Errore del compilatore C3491 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3491
dev_langs:
- C++
helpviewer_keywords:
- C3491
ms.assetid: 7f0e71b2-46a0-4d25-bd09-6158a280f509
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 58458a1ab0b67eb4fa6d38d0be2fb38f6d7496eb
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3491"></a>Errore del compilatore C3491
'var': impossibile modificare un'acquisizione per valore in un'espressione lambda non modificabile  
  
 Un'espressione lambda non modificabile non può modificare il valore di una variabile che viene acquisita per valore.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Dichiarare l'espressione lambda con la parola chiave `mutable` oppure  
  
-   Passare la variabile mediante riferimento all'elenco di acquisizione dell'espressione lambda.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3491 perché il corpo di un'espressione lambda non modificabile modifica la variabile di acquisizione `m`:  
  
```  
// C3491a.cpp  
  
int main()  
{  
   int m = 55;  
   [m](int n) { m = n; }(99); // C3491  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente risolve l'errore C3491 dichiarando l'espressione lambda con la parola chiave `mutable` :  
  
```  
// C3491b.cpp  
  
int main()  
{  
   int m = 55;  
   [m](int n) mutable { m = n; }(99);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
