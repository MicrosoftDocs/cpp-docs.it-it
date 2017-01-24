---
title: "Avviso del compilatore (livello 1) C4807 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4807"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4807"
ms.assetid: 089c9f87-fd81-402e-9826-66a8ef1ef1fe
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4807
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operation': combinazione non affidabile del tipo 'type' e del campo di bit signed del tipo 'type'  
  
 Questo avviso viene generato quando si confronta un campo di bit signed a un bit con una variabile `bool`. Poiché un campo di bit signed a un bit può contenere solo il valore \-1 o 0, è pericoloso confrontarlo con `bool`. Non viene generato alcun avviso relativo alla combinazione di campi di bit senza segno di tipo `bool` e a un bit poiché sono identici a `bool` e possono contenere solo 0 o 1.  
  
## Esempio  
 L'esempio seguente genera l'errore C4807:  
  
```  
// C4807.cpp // compile with: /W1 typedef struct bitfield { signed mybit : 1; } mybitfield; int main() { mybitfield bf; bool b = true; // try.. // int b = true; bf.mybit = -1; if (b == bf.mybit) {   // C4807 b = false; } }  
```