---
title: "novtable | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "novtable"
  - "novtable_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], novtable"
  - "novtable __declspec (parola chiave)"
ms.assetid: cfef09c5-8c1e-4b14-8a72-7d726ded4484
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# novtable
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Questo è un attributo `__declspec` esteso.  
  
 Questo formato dell'attributo `__declspec` può essere applicato a qualsiasi dichiarazione di classe, ma deve essere applicato solo a classi di interfaccia pure, ovvero, classi per le quali non verrà mai creata un'istanza automaticamente.  L'attributo `__declspec` arresta la generazione di codice da parte del compilatore per inizializzare vfptr nel costruttore o nei costruttori e nel distruttore della classe.  In molti casi, in tal modo vengono rimossi gli unici riferimenti a vtable associati alla classe e, pertanto, il linker la rimuoverà.  L'utilizzo del formato dell'attributo `__declspec` può comportare una riduzione significativa della dimensione del codice.  
  
 Se si tenta di creare un'istanza di una classe contrassegnata con `novtable` e quindi accedere a un membro di classe, si riceverà una violazione di accesso \(AV\).  
  
## Esempio  
  
```  
// novtable.cpp  
#include <stdio.h>  
  
struct __declspec(novtable) X {  
   virtual void mf();  
};  
  
struct Y : public X {  
   void mf() {  
      printf_s("In Y\n");  
   }  
};  
  
int main() {  
   // X *pX = new X();  
   // pX->mf();   // Causes a runtime access violation.  
  
   Y *pY = new Y();  
   pY->mf();  
}  
```  
  
  **In Y**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)