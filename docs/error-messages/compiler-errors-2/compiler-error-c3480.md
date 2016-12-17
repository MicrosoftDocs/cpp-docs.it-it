---
title: "Errore del compilatore C3480 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3480"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3480"
ms.assetid: 7b2e055a-9604-4d13-861b-b38bda1a6940
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3480
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': una variabile di acquisizione delle espressioni lambda deve essere inclusa in un ambito della funzione contenitore  
  
 La variabile di acquisizione delle espressioni lambda non è inclusa in un ambito della funzione contenitore.  
  
### Per correggere l'errore  
  
-   Rimuovere la variabile dall'elenco di acquisizione dell'espressione lambda.  
  
## Esempio  
 L'esempio seguente genera l'errore C3480 perché la variabile `global` non è inclusa in un ambito della funzione contenitore:  
  
```  
// C3480a.cpp int global = 0; int main() { [&global] { global = 5; }(); // C3480 }  
```  
  
## Esempio  
 L'esempio seguente risolve l'errore C3480 rimuovendo la variabile `global` dall'elenco di acquisizione dell'espressione lambda:  
  
```  
// C3480b.cpp int global = 0; int main() { [] { global = 5; }(); }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)