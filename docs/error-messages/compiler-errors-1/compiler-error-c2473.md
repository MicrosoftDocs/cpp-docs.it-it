---
title: Errore del compilatore C2473 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2473
dev_langs:
- C++
helpviewer_keywords:
- C2473
ms.assetid: 6bb7dbf5-b198-490f-860e-fd64d0c2a284
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: af0342d3e8e6011e37b0588515299f2a0ab7b761
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2473"></a>Errore del compilatore C2473
'identifier': sembra una definizione di funzione, ma manca un elenco di parametri.  
  
 Il compilatore ha rilevato un elemento simile a una funzione senza elenco di parametri.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2473.  
  
```  
// C2473.cpp  
// compile with: /clr /c  
class A {  
   int i {}   // C2473  
};  
  
class B {  
   int i() {}   // OK  
};  
```