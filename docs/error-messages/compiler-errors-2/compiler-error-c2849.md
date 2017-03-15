---
title: "Errore del compilatore C2849 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2849"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2849"
ms.assetid: e28f6b3e-e0e7-4f92-b006-ebaa81d368e6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2849
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'distruttore': un'interfaccia non può avere un distruttore  
  
 Un'[interfaccia](../../cpp/interface.md) di Visual C\+\+ non può avere un distruttore.  
  
 Il seguente codice di esempio genera l'errore C2849:  
  
```  
// C2849.cpp  
// compile with: /c  
__interface C {  
   ~C();   // C2849 destructor not allowed in an interface  
};  
```