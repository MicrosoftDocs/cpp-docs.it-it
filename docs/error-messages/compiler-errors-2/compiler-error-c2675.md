---
title: "Errore del compilatore C2675 | Microsoft Docs"
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
  - "C2675"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2675"
ms.assetid: 4b92a12b-bff8-4dd5-a109-620065fc146c
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2675
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore' unario: 'tipo' non definisce questo operatore né una conversione in un tipo che può essere accettato dall'operatore predefinito  
  
 L'errore C2675 può inoltre verificarsi quando si utilizza un operatore unario e il tipo non definisce l'operatore né una conversione in un tipo che può essere accettato dall'operatore predefinito.  Per utilizzare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2675:  
  
```  
// C2675.cpp  
struct C {   
   C(){}  
} c;  
  
struct D {   
   D(){}  
   void operator-(){}  
} d;  
  
int main() {  
   -c;   // C2675  
   -d;   // OK  
}  
```