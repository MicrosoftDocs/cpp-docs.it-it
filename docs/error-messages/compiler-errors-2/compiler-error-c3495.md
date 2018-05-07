---
title: Errore del compilatore C3495 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3495
dev_langs:
- C++
helpviewer_keywords:
- C3495
ms.assetid: 1fd40cb8-8373-403d-b8a8-f08424a50807
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7accbc422256abbd75d518acce72c522fbb67c14
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3495"></a>Errore del compilatore C3495
'var': la durata dell'archiviazione di un'acquisizione di espressioni lambda deve essere automatica  
  
 Non è possibile acquisire una variabile che non ha una durata di archiviazione automatica, ad esempio una variabile contrassegnata come `static` o `extern`.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Non passare una variabile `static` o `extern` all'elenco di acquisizione dell'espressione lambda.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3495 perché la variabile `static` `n` è presente nell'elenco di acquisizione di un'espressione lambda:  
  
```  
// C3495.cpp  
  
int main()  
{  
   static int n = 66;  
   [&n]() { return n; }(); // C3495  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)   


