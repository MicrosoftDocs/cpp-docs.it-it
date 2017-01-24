---
title: "Errore del compilatore C2483 | Microsoft Docs"
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
  - "C2483"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2483"
ms.assetid: 5762b325-914b-442d-a604-e4617ba04038
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2483
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': un oggetto con un costruttore o distruttore non può essere dichiarato 'thread'  
  
 Le variabili dichiarate con l'attributo `thread` non possono essere inizializzate con un costruttore o un'altra espressione che richiede la valutazione in fase di esecuzione.  Per inizializzare dei dati `thread` è necessaria un'espressione statica.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2483:  
  
```  
// C2483.cpp  
// compile with: /c  
__declspec(thread) struct A {  
   A(){}  
   ~A(){}  
} aa;   // C2483 error  
  
__declspec(thread) struct B {} b;   // OK  
```  
  
## Vedere anche  
 [thread](../../cpp/thread.md)