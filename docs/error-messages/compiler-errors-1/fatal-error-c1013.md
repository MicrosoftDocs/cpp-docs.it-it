---
title: "Errore irreversibile C1013 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1013"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1013"
ms.assetid: 5514a679-efe7-4055-bdd3-5693ca0c332f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile C1013
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: troppe parentesi aperte  
  
 Un'espressione contiene troppi livelli di parentesi in un'unica espressione. Semplificare l'espressione o suddividerla in più istruzioni.  
  
 Prima di Visual C\+\+ 6.0 Service Pack 3 il limite per le parentesi annidate in un'unica espressione era 59. Attualmente il limite per le parentesi annidate è 256.