---
title: "Errore del compilatore C2630 | Microsoft Docs"
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
  - "C2630"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2630"
ms.assetid: 7a655a9c-bab4-495b-97a3-a3f34cf5369a
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2630
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

trovato 'simbolo' in quello che dovrebbe essere un elenco separato da virgola  
  
 Il simbolo è presente in un contesto che richiede una virgola.  
  
 Il seguente codice di esempio genera l'errore C2630:  
  
```  
// C2630.cpp  
// compile with: /c  
struct D {  
   D(int);  
};  
  
struct E {  
   E(int);  
};  
  
class C : public D, public E {  
   C();  
};  
  
C::C() : D(0) ; E(0) { }   // C2630  
C::C() : D(0), E(0) {}   // OK  
```