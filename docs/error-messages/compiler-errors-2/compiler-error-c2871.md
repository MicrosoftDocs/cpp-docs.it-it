---
title: "Errore del compilatore C2871 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2871"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2871"
ms.assetid: 44aeb84d-61f0-45e0-8dad-22a3cd46b7f8
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2871
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome': non esiste uno spazio dei nomi con questo nome  
  
 Questo errore si verifica quando un identificatore che non è uno spazio dei nomi viene passato a una direttiva [using](../Topic/using%20Directive%20\(C%23%20Reference\).md).  
  
 Il seguente codice di esempio genera l'errore C2871:  
  
```  
// C2871.cpp  
// compile with: /c  
using namespace d;   // C2871 d is not a namespace  
using namespace System;   // OK  
```