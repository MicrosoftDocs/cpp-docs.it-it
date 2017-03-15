---
title: "Avviso del compilatore (livello 1) C4618 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4618"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4618"
ms.assetid: 6ff10d0a-6d5b-4373-8196-1d57bb6b1611
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4618
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

i parametri di pragma comprendono una stringa vuota. Pragma ignorato  
  
 Una stringa null è stata assegnata come argomento a un **\#pragma**.  
  
 Il pragma è stato elaborato senza l'argomento.  
  
 Il seguente codice di esempio genera l'errore C4618:  
  
```  
// C4618.cpp  
// compile with: /W1 /LD  
#pragma code_seg("")   // C4618  
```