---
title: "Errore del compilatore CS1643 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1643"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1643"
ms.assetid: 521f352b-00fb-4d62-89be-44251db3cc5b
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1643
Non tutti i percorsi del codice restituiscono un valore in 'method' di tipo 'type\!'  
  
 Questo errore si verifica se il corpo di un delegato non ha un'istruzione return oppure contiene un'istruzione return di cui il compilatore non è in grado di verificare il raggiungimento. Nell'esempio seguente il compilatore non tenta di prevedere il risultato della condizione di diramazione per verificare che il blocco di metodo anonimo restituisca sempre un valore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1643:  
  
```  
// CS1643.cs delegate int MyDelegate(); class C { static void Main() { MyDelegate d = delegate {                 // CS1643 int i = 0; if (i == 0) return 1; }; } }  
```