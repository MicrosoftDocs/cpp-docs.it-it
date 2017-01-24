---
title: "Avviso del compilatore (livello 4) C4559 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4559"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4559"
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4559
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': ridefinizione; la funzione ottiene \_\_declspec\(modificatore\)  
  
 In seguito alla ridefinizione o ridichiarazione di una funzione, è stato aggiunto un modificatore \_\_**declspec** \(***modificatore***\).  L'avviso è informativo.  Per risolvere il problema, eliminare una delle definizioni.  
  
 Il seguente codice di esempio genera l'errore C4559:  
  
```  
// C4559.cpp  
// compile with: /W4 /LD  
void f();  
__declspec(noalias) void f();   // C4559  
```