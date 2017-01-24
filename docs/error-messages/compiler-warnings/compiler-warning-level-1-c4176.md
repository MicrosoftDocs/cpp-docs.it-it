---
title: "Avviso del compilatore (livello 1) C4176 | Microsoft Docs"
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
  - "C4176"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4176"
ms.assetid: cfffb934-219a-4a63-9df6-ba54405bf766
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4176
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'subcomponent': sottocomponente sconosciuto per \#pragma component browser  
  
 Il pragma **component** contiene un sottocomponente non valido. Per escludere i riferimenti a un determinato nome, usare l'opzione **references** prima del nome.  
  
## Esempio  
  
```  
// C4176.cpp // compile with: /W1 /LD #pragma component(browser, off, i)  // C4176 #pragma component(browser, off, references, i) // ok  
```