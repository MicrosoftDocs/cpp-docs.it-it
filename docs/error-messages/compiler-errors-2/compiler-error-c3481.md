---
title: "Errore del compilatore C3481 | Microsoft Docs"
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
  - "C3481"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3481"
ms.assetid: 5d09375a-5ed3-4b61-86ed-45e91fd734c7
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3481
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': variabile di acquisizione delle espressioni lambda non trovata  
  
 Il compilatore non ha trovato la definizione di una variabile passata all'elenco di acquisizione di un'espressione lambda.  
  
### Per correggere l'errore  
  
-   Rimuovere la variabile dall'elenco di acquisizione dell'espressione lambda.  
  
## Esempio  
 L'esempio seguente genera l'errore C3481 perché la variabile `n` non è definita:  
  
```  
// C3481.cpp int main() { [n] {}(); // C3481 }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)