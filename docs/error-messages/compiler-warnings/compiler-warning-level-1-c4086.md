---
title: "Avviso del compilatore (livello 1) C4086 | Microsoft Docs"
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
  - "C4086"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4086"
ms.assetid: 9248831b-22bf-47af-8684-bfadb17e94fc
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4086
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

parametri pragma previsti: '1', '2', '4', '8' o '16'  
  
 Il parametro pragma non contiene il valore richiesto \(1, 2, 4, 8 o 16\).  
  
## Esempio  
  
```  
// C4086.cpp // compile with: /W1 /LD #pragma pack( 3 ) // C4086  
```