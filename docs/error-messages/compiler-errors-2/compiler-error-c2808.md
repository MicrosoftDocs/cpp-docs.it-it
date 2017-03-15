---
title: "Errore del compilatore C2808 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2808"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2808"
ms.assetid: 3d745102-d3b3-4735-a7d2-ad42d5bf3cfa
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2808
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator operatore' \(unario\) ha troppi parametri formali  
  
 L'operatore unario ha un elenco di parametri non void.  
  
 Il seguente codice di esempio genera l'errore C2808:  
  
```  
// C2808.cpp  
// compile with: /c  
class X {  
public:  
   X operator! ( X );   // C2808 nonvoid parameter list  
   X operator! ( void );   // OK  
};  
  
```