---
title: "Errore del compilatore C2537 | Microsoft Docs"
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
  - "C2537"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2537"
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2537
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': specifiche di collegamento non valide  
  
 Possibili cause:  
  
1.  L'identificatore di collegamento non è supportato.  È supportato solo l'identificatore di collegamento "C".  
  
2.  Il collegamento "C" è specificato per più funzioni in un insieme di funzioni in overload  ma questa operazione non è consentita.  
  
 Il seguente codice di esempio genera l'errore C2537:  
  
```  
// C2537.cpp  
// compile with: /c  
extern "c" void func();   // C2537  
extern "C" void func2();   // OK  
```