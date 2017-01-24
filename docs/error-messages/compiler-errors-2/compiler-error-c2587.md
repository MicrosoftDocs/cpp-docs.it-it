---
title: "Errore del compilatore C2587 | Microsoft Docs"
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
  - "C2587"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2587"
ms.assetid: 7637a2c7-35d4-4b5a-a8f2-515a7bda98fd
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2587
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': impossibile utilizzare una variabile locale come parametro predefinito  
  
 Le variabili locali non sono consentite come parametri predefiniti.  
  
 Il seguente codice di esempio genera l'errore C2587:  
  
```  
// C2587.cpp  
// compile with: /c  
int i;  
void func() {  
   int j;  
   extern void func2( int k = j );  // C2587 -- local variable  
   extern void func3( int k = i );   // OK  
}  
```