---
title: "Errore del compilatore C3640 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3640"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3640"
ms.assetid: fcc56894-0f98-48af-8561-3bf7c7b2b93f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3640
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': una funzione membro virtuale o di riferimento deve essere definita  
  
 Il compilatore prevede che determinate funzioni vengano definite.  
  
 Il seguente codice di esempio genera l'errore C3640:  
  
```  
// C3640.cpp  
void f()   
{  
   struct S  
   {  
      virtual void f1();   // C3640  
      // Try the following line instead:  
      // virtual void f1(){}  
   };  
}  
```