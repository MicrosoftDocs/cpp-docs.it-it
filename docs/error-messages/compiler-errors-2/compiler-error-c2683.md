---
title: "Errore del compilatore C2683 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2683"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2683"
ms.assetid: db605e4f-601b-4d05-92a1-c43ca24de08d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2683
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'cast': 'tipo' non è un tipo polimorfico  
  
 Non è possibile utilizzare [dynamic\_cast](../../cpp/dynamic-cast-operator.md) per la conversione da una classe non polimorfica, ovvero una classe senza funzioni virtuali.  
  
 È possibile utilizzare [static\_cast](../../cpp/static-cast-operator.md) per eseguire le conversioni di tipi non polimorfici.  Tuttavia, `static_cast` non esegue un controllo in fase di esecuzione.  
  
 Il seguente codice di esempio genera l'errore C2683:  
  
```  
// C2683.cpp  
// compile with: /c  
class B { };  
class D : public B { };  
  
void f(B* pb) {  
   D* pd1 = dynamic_cast<D*>(pb);  // C2683  
   D* pd1 = static_cast<D*>(pb);   // OK  
}  
```