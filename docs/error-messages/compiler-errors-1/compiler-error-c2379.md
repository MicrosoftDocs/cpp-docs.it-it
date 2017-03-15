---
title: "Errore del compilatore C2379 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2379"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2379"
ms.assetid: 37dc3015-a4af-4341-bbf3-da6150df7e51
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2379
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il parametro formale numero ha un tipo diverso quando promosso  
  
 Il tipo del parametro specificato non è compatibile, nonostante le promozioni predefinite, con quello di una dichiarazione precedente.  C2379 è un errore in ANSI C \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\) e un avviso con le estensioni Microsoft \(**\/Ze**\).  
  
 Il seguente codice di esempio genera l'errore C2379:  
  
```  
// C2379.c  
// compile with: /Za  
void func();  
void func(char);   // C2379, char promotes to int  
```