---
title: "Avviso del compilatore (livelli 2 e 3) C4008 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4008"
ms.assetid: fb45e535-cb68-4743-80e9-a6e34cfffeca
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livelli 2 e 3) C4008
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': attributo 'attribute' ignorato  
  
 Il compilatore ha ignorato l'attributo `__fastcall`, **static** o **inline** per una funzione \(avviso di livello 3\) o per i dati \(avviso di livello 2\).  
  
### Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Attributo `__fastcall` con i dati.  
  
2.  Attributo **static** o **inline** con la funzione **main**.