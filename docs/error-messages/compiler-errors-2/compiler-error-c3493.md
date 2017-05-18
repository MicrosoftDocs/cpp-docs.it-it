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
caps.latest.revision: 6
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
ms.openlocfilehash: 99fc958e4873d13bbc413f556e505ec7224443a5
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

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
