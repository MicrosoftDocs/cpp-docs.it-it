---
title: "Errore del compilatore C2658 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2658"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2658"
ms.assetid: 638368e8-7893-4a14-abec-13c768a9543a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2658
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': ridefinizione in struct\/union anonima  
  
 Due strutture o unioni anonime contenevano dichiarazioni di membri con lo stesso identificatore, ma con tipi diversi.  Anche in [\/Za](../../build/reference/za-ze-disable-language-extensions.md) questo errore viene generato per membri con lo stesso identificatore e tipo.  
  
 Il seguente codice di esempio genera l'errore C2658:  
  
```  
// C2658.cpp  
// compile with: /c  
struct X {  
   union { // can be struct too  
      int i;  
   };  
   union {  
      int i;   // Under /Za, C2658  
      // int i not needed here because it is defined in the first union  
   };  
};  
  
struct Z {  
   union {  
      char *i;  
   };  
  
   union {  
      void *i;   // C2658 redefinition of 'i'  
      // try the following line instead  
      // void *ii;  
   };  
};  
```