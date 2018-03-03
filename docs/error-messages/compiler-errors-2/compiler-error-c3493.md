---
title: Errore del compilatore C3493 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3493
dev_langs:
- C++
helpviewer_keywords:
- C3493
ms.assetid: 734b4257-12a3-436f-8488-c8c55ec81634
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8094b3b03f06dcc799b6bdfeea2b57399f92b852
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3493"></a>Errore del compilatore C3493
impossibile acquisire in modo implicito 'var' perché non è stata specificata alcuna modalità di acquisizione predefinita  
  
 L'acquisizione di espressioni lambda vuota, `[]`, specifica che l'espressione lambda non acquisisce le variabili in modo esplicito o implicito.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Specificare una modalità di acquisizione predefinita oppure  
  
-   Acquisire una o più variabili in modo esplicito.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3493 perché modifica una variabile esterna ma specifica la clausola di acquisizione vuota:  
  
```  
// C3493a.cpp  
  
int main()  
{  
   int m = 55;  
   [](int n) { m = n; }(99); // C3493  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente risolve l'errore C3493 specificando la modalità di acquisizione predefinita mediante riferimento.  
  
```  
// C3493b.cpp  
  
int main()  
{  
   int m = 55;  
   [&](int n) { m = n; }(99);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)