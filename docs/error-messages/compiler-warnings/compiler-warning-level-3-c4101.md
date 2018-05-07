---
title: Compilatore (livello 3) Avviso C4101 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4101
dev_langs:
- C++
helpviewer_keywords:
- C4101
ms.assetid: d98563cd-9dce-4aae-8f12-bd552a4ea677
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 973b966e4b589cb35ffc92da9031779b14d448e3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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