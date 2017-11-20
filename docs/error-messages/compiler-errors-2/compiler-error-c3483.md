---
title: Errore del compilatore C3483 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3483
dev_langs: C++
helpviewer_keywords: C3483
ms.assetid: 18b3a2c5-dfc9-4661-9653-08a5798474cf
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 145e0162c47b360b9d37cf95b108446f919435de
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3483"></a>Errore del compilatore C3483
'var' fa già parte dell'elenco di acquisizione delle espressioni lambda  
  
 È stata passata più volte la stessa variabile all'elenco di acquisizione di un'espressione lambda.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Rimuovere tutte le istanze della variabile dall'elenco di acquisizione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3483 perché la variabile `n` è visualizzata più volte nell'elenco di acquisizione di un'espressione lambda:  
  
```  
// C3483.cpp  
  
int main()  
{  
   int m = 6, n = 5;  
   [m,n,n] { return n + m; }(); // C3483  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)