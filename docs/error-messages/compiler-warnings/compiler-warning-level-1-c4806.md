---
title: "Avviso del compilatore (livello 1) C4806 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4806"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4806"
ms.assetid: 79eb74cd-b925-4b5b-84e1-8ae6f33e38b3
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4806
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operation': operazione non affidabile: nessun valore di tipo 'type' promosso al tipo 'type' può eguagliare la costante data  
  
 Questo messaggio fornisce un avviso su codice come `b == 3`, dove `b` è di tipo `bool`. Le regole di promozione causano la promozione di `bool` a `int`. Tale operazione è valida, ma non può mai essere **true**. L'esempio seguente genera l'errore C4806:  
  
```  
// C4806.cpp // compile with: /W1 int main() { bool b = true; // try.. // int b = true; if (b == 3)   // C4806 { b = false; } }  
```