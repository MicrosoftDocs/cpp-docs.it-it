---
title: "Errore del compilatore C2598 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2598"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2598"
ms.assetid: 40777c62-39ba-441e-b081-f49f94b43547
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2598
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le specifiche di collegamento devono risiedere in ambito globale  
  
 L'identificatore del collegamento è dichiarato in ambito locale.  
  
 Il seguente codice di esempio genera l'errore C2598:  
  
```  
// C2598.cpp  
// compile with: /c  
void func() {  
   extern "C" int func2();   // C2598  
}  
  
extern "C" int func( int i );  
```