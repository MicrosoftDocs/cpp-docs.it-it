---
title: "Errore del compilatore C2480 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2480"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2480"
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2480
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': 'thread' è valido solo per elementi di dati con estensione statica  
  
 Non è possibile utilizzare l'attributo `thread` con una variabile automatica, un membro dati non static o un parametro di funzione, né in dichiarazioni o definizioni di funzione.  
  
 Utilizzare l'attributo `thread` solo per variabili globali, membri dati static e variabili statiche locali.  
  
 Il seguente codice di esempio genera l'errore C2480:  
  
```  
// C2480.cpp  
// compile with: /c  
__declspec( thread ) void func();   // C2480  
__declspec( thread ) static int i;   // OK  
```