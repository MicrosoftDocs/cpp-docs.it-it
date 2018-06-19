---
title: Errore del compilatore C3491 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3491
dev_langs:
- C++
helpviewer_keywords:
- C3491
ms.assetid: 7f0e71b2-46a0-4d25-bd09-6158a280f509
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6bd856f50f3528b3895e4495215b2e479d8a424b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33257293"
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