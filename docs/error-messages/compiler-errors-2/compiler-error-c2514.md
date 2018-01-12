---
title: Errore del compilatore C2514 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2514
dev_langs: C++
helpviewer_keywords: C2514
ms.assetid: 4b7085e5-6714-4261-80b7-bc72e64ab3e8
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 58faaec5231b8d2d0629043e5e77139dc9e3386f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2514"></a>Errore del compilatore C2514
'class': classe non ha costruttori  
  
 Non dispone di alcun costruttore con un elenco di parametri che corrispondono ai parametri utilizzati per creare un'istanza della classe, struttura o unione.  
  
 Una classe deve essere dichiarata completamente prima che è possibile creare istanze.  
  
 L'esempio seguente genera l'errore C2514:  
  
```  
// C2514.cpp  
// compile with: /c  
class f;  
  
class g {  
public:  
    g (int x);  
};  
  
class fmaker {  
   f *func1() {  
      return new f(2);   // C2514  
   }  
  
   g *func2() {  
      return new g(2);   // OK  
   }  
};   
```