---
title: "Errore del compilatore C2469 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2469"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2469"
ms.assetid: 3814bdff-581a-4d3e-8b47-8de6887cea69
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2469
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': non è possibile allocare l'oggetto 'type'  
  
 Un tipo non valido è stato passato a un operatore.  
  
 L'esempio seguente genera l'errore C2469:  
  
```  
// C2469.cpp int main() { int *i = new void;   // C2469 int *i = new int;   // OK }  
```