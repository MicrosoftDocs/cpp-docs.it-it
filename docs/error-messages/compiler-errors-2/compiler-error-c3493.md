---
title: "Errore del compilatore C3493 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3493"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3493"
ms.assetid: 734b4257-12a3-436f-8488-c8c55ec81634
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3493
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile acquisire in modo implicito 'var' perché non è stata specificata alcuna modalità di acquisizione predefinita  
  
 L'acquisizione di espressioni lambda vuota, `[]`, specifica che l'espressione lambda non acquisisce le variabili in modo esplicito o implicito.  
  
### Per correggere l'errore  
  
-   Specificare una modalità di acquisizione predefinita oppure  
  
-   Acquisire una o più variabili in modo esplicito.  
  
## Esempio  
 L'esempio seguente genera l'errore C3493 perché modifica una variabile esterna ma specifica la clausola di acquisizione vuota:  
  
```  
// C3493a.cpp int main() { int m = 55; [](int n) { m = n; }(99); // C3493 }  
```  
  
## Esempio  
 L'esempio seguente risolve l'errore C3493 specificando la modalità di acquisizione predefinita mediante riferimento.  
  
```  
// C3493b.cpp int main() { int m = 55; [&](int n) { m = n; }(99); }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)