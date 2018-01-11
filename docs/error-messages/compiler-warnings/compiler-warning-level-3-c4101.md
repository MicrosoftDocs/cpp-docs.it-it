---
title: Compilatore (livello 3) Avviso C4101 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4101
dev_langs: C++
helpviewer_keywords: C4101
ms.assetid: d98563cd-9dce-4aae-8f12-bd552a4ea677
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 162ad70f6d87ba6de51f677d95f1af7c1b6d8054
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4101"></a>Compilatore (livello 3) Avviso C4101
'identifier': variabile locale senza riferimenti  
  
 La variabile locale non viene mai utilizzata. Questo avviso si verifica nella situazione ovvia:  
  
```  
// C4101a.cpp  
// compile with: /W3  
int main() {  
int i;   // C4101  
}  
```  
  
 Tuttavia, questo avviso si verificherà anche quando si chiama un **statico** funzione membro tramite un'istanza della classe:  
  
```  
// C4101b.cpp  
// compile with:  /W3  
struct S {  
   static int func()  
   {  
      return 1;  
   }  
};  
  
int main() {  
   S si;   // C4101, si is never used  
   int y = si.func();  
   return y;  
}  
```  
  
 In questo caso, il compilatore utilizza le informazioni sulle `si` per l'accesso il **statico** funzione, ma l'istanza della classe non è necessaria per chiamare il **statico** funzione; pertanto il messaggio di avviso. Per risolvere il problema, è possibile:  
  
-   Aggiungere un costruttore, in cui verrà utilizzata l'istanza di `si` nella chiamata a `func`.  
  
-   Rimuovere il **statico** parola chiave dalla definizione della `func`.  
  
-   Chiamare il **statico** funzione in modo esplicito: `int y = S::func();`.