---
title: "Avviso del compilatore (livello 4) C4565 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4565"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4565"
ms.assetid: a71f1341-a4a1-4060-ad1e-9322531883ed
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 4) C4565
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': ridefinizione; il simbolo era dichiarato in precedenza con \_\_declspec\(modificatore\)  
  
 Un simbolo è stato ridefinito o ridichiarato e la seconda definizione o dichiarazione, diversamente dalla prima, non include un modificatore `__declspec` \(***modificatore***\).  L'avviso è informativo.  Per risolvere il problema, eliminare una delle definizioni.  
  
 Il seguente codice di esempio genera l'errore C4565:  
  
```  
// C4565.cpp  
// compile with: /W4 /LD  
__declspec(noalias) void f();  
void f();   // C4565  
```