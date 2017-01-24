---
title: "Errore del compilatore C2086 | Microsoft Docs"
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
  - "C2086"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2086"
ms.assetid: 4329bf72-90c8-444c-8524-4ef75e6b2139
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2086
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': ridefinizione  
  
 L'identificatore viene definito più volte oppure una dichiarazione successiva è diversa da una dichiarazione che la precede.  
  
 L'errore C2086 può inoltre essere causato da un'operazione di compilazione incrementale per un assembly C\# con riferimenti.  Per correggerlo, ricompilare l'assembly C\#.  
  
 Il seguente codice di esempio genera l'errore C2086:  
  
```  
// C2086.cpp  
main() {  
  int a;  
  int a;   // C2086 not an error in ANSI C  
}  
```