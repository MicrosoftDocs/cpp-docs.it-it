---
title: Errore del compilatore C3480 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3480
dev_langs:
- C++
helpviewer_keywords:
- C3480
ms.assetid: 7b2e055a-9604-4d13-861b-b38bda1a6940
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 673eff58b09fe1f2bbfe8a7629594399e8ca6b22
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33259139"
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