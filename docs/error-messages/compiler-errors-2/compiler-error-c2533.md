---
title: "Errore del compilatore C2533 | Microsoft Docs"
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
  - "C2533"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2533"
ms.assetid: 5b335652-076c-4824-87c8-a741f64a3ce0
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2533
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': i costruttori non possono avere un tipo restituito  
  
 Un costruttore non può avere un tipo restituito \(nemmeno un tipo restituito `void`\).  
  
 Questo errore si verifica di solito a causa di un punto e virgola mancante tra la fine della definizione di una classe e l'implementazione del primo costruttore.  Il compilatore riconosce la classe come definizione del tipo restituito per la funzione costruttore e genera l'errore C2533.  
  
 L'esempio seguente genera l'errore C2533 e mostra come risolverlo:  
  
```  
// C2533.cpp  
// compile with: /c  
class X {  
public:  
   X();     
};  
  
int X::X() {}   // C2533 - constructor return type not allowed  
X::X() {}   // OK - fix by using no return type  
```