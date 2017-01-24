---
title: "Errore del compilatore C3118 | Microsoft Docs"
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
  - "C3118"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3118"
ms.assetid: 40fbe681-8868-4cb2-a2b2-4db4449319a7
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3118
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'interfaccia': le interfacce non supportano l'ereditarietà virtuale  
  
 Si è tentato di ereditare da un'interfaccia in modo virtuale.  Di seguito è riportato un esempio:  
  
```  
// C3118.cpp  
__interface I1 {  
};  
  
__interface I2 : virtual I1 {   // C3118  
};  
```  
  
 genera questo errore.