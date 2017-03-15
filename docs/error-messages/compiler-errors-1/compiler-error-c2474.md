---
title: "Errore del compilatore C2474 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2474"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2474"
ms.assetid: 64e6c61e-6e77-480e-bcf0-b30a2fc482ac
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# Errore del compilatore C2474
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'keyword': manca un punto e virgola adiacente, potrebbe trattarsi di una parola chiave o di un identificatore.  
  
 Il compilatore prevedeva un punto e virgola e non è riuscito a interpretare il codice. Per correggere questo errore, aggiungere il punto e virgola.  
  
## Esempio  
 L'esempio seguente genera l'errore C2474.  
  
```  
// C2474.cpp // compile with: /clr /c ref class A { ref class B {} property int i;   // C2474 error }; // OK ref class B { ref class D {}; property int i; }; ref class E { ref class F {} property; int i; };  
```