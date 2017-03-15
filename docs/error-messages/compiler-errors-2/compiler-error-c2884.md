---
title: "Errore del compilatore C2884 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2884"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2884"
ms.assetid: 8b4d43e3-3fb5-4360-86c8-de59d8736d4f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2884
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome': introdotto dalla dichiarazione using è in conflitto con la funzione locale 'funzione'  
  
 Si è tentato di definire una funzione più di una volta.  La prima definizione è una definizione locale.  La seconda è ricavata da uno spazio dei nomi con una dichiarazione `using`.  
  
 Il seguente codice di esempio genera l'errore C2884:  
  
```  
// C2884.cpp  
namespace A {  
   void z(int);  
}  
  
void f() {  
   void z(int);  
   using A::z;   // C2884 z is already defined  
}  
```