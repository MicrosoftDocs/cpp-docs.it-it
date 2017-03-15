---
title: "Avviso del compilatore (livello 1) C4684 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4684"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4684"
ms.assetid: e95f1a83-2784-4b05-ae94-12148e056e26
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4684
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'attributo': AVVISO\!\! l'attributo può comportare la generazione di codice non valido: utilizzare con cautela  
  
 È stato utilizzato un attributo che normalmente non deve essere utilizzato.  
  
 Il seguente codice di esempio genera l'errore C4684:  
  
```  
// C4684.cpp  
// compile with: /W1 /LD  
 [module(name="xx")]; // C4684 expected  
[no_injected_text];  
```