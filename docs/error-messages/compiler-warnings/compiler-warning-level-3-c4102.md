---
title: "Avviso del compilatore (livello 3) C4102 | Microsoft Docs"
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
  - "C4102"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4102"
ms.assetid: 349f308a-daf3-48c6-bd53-6c38b73f8880
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4102
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'label': etichetta senza riferimenti  
  
 L'etichetta è stata definita mai utilizzata come riferimento. Il compilatore ignora l'etichetta.  
  
 L'esempio seguente genera l'errore C4102:  
  
```  
// C4102.cpp // compile with: /W3 int main() { int a; test:   // C4102, remove the unreferenced label to resolve a = 1; }  
```