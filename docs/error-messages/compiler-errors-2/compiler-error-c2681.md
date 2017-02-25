---
title: "Errore del compilatore C2681 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2681"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2681"
ms.assetid: eb42da6d-8d2c-43fd-986b-e73e2b004885
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2681
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': tipo di espressione non valido per nome  
  
 Un operatore di cast ha tentato la conversione da un tipo non valido.  Se si utilizza, ad esempio, l'operatore [dynamic\_cast](../../cpp/dynamic-cast-operator.md) per convertire un'espressione in un tipo di puntatore, l'espressione di origine deve essere un puntatore.  
  
 Il seguente codice di esempio genera l'errore C2681:  
  
```  
// C2681.cpp  
class A { virtual void f(); };  
  
void g(int i) {  
    A* pa;  
    pa = dynamic_cast<A*>(i);  // C2681  
}  
```