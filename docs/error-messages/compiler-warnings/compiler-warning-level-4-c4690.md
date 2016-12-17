---
title: "Avviso del compilatore (livello 4) C4690 | Microsoft Docs"
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
  - "C4690"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4690"
ms.assetid: 080a0ea1-458b-477b-a37a-4a34c94709ff
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4690
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\[ emitidl\( pop \) \]: più estrazioni che inserimenti  
  
 Il numero di estrazioni dell'attributo [emitidl](../../windows/emitidl.md) supera di una volta il numero di inserimenti.  
  
## Esempio  
 L'esempio seguente genera l'errore C4690.  
  
```  
// C4690.cpp // compile with: /c /W4 [emitidl(pop)];   // C4690 class x {};  
```