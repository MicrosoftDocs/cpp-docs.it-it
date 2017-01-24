---
title: "Avviso del compilatore (livello 1) C4085 | Microsoft Docs"
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
  - "C4085"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4085"
ms.assetid: 2bc6eb25-058f-4597-b351-fd69587b5170
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4085
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

parametro pragma previsto: 'on' o 'off'  
  
 Il pragma richiede un parametro **on** o **off**. Il pragma viene ignorato.  
  
 L'esempio seguente genera l'errore C4085:  
  
```  
// C4085.cpp // compile with: /W1 /LD #pragma optimize( "t", maybe )  // C4085  
```