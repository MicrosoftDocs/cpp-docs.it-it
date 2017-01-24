---
title: "Errore del compilatore C2534 | Microsoft Docs"
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
  - "C2534"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2534"
ms.assetid: 481f9f54-5b51-4aa0-8eea-218f10807705
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2534
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': i costruttori non possono restituire un valore  
  
 Un costruttore non può restituire un valore o avere un tipo restituito, neppure se è `void`.  
  
 È possibile correggere l'errore rimuovendo l'istruzione `return` dalla definizione del costruttore.  
  
 Il seguente codice di esempio genera l'errore C2534:  
  
```  
// C2534.cpp  
class A {  
public:  
   int i;  
   A() { return i; }   // C2534  
};  
```