---
title: "Errore del compilatore C2473 | Microsoft Docs"
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
  - "C2473"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2473"
ms.assetid: 6bb7dbf5-b198-490f-860e-fd64d0c2a284
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2473
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': sembra una definizione di funzione, ma manca un elenco di parametri.  
  
 Il compilatore ha rilevato un elemento simile a una funzione senza elenco di parametri.  
  
## Esempio  
 L'esempio seguente genera l'errore C2473.  
  
```  
// C2473.cpp // compile with: /clr /c class A { int i {}   // C2473 }; class B { int i() {}   // OK };  
```