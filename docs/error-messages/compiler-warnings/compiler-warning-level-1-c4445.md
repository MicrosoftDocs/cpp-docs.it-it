---
title: "Avviso del compilatore (livello 1) C4445 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4445"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4445"
ms.assetid: 535e92a0-ba08-4dfc-89b2-af2dcdd7caeb
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 1) C4445
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': in un tipo WinRT o gestito un metodo virtuale non può essere privato  
  
 Se una funzione virtuale è privata, non è possibile accedervi da un tipo derivato.  Per correggere l'errore, impostare l'accessibilità della funzione del membro virtuale come protetta o pubblica.