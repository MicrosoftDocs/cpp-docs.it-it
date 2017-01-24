---
title: "Errore del compilatore CS1648 | Microsoft Docs"
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
  - "CS1648"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1648"
ms.assetid: 5cf1bc84-cd18-4df2-942f-1cc17eabacd6
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1648
Non è possibile modificare i membri del campo di sola lettura 'identifier' \(tranne che in un costruttore o in un inizializzatore di variabile\)  
  
 Questo errore si verifica quando si tenta di modificare un membro di un campo che è di sola lettura in cui la modifica non è consentita. Per risolvere l'errore, limitare le assegnazioni ai campi di sola lettura al costruttore o a un inizializzatore di variabile oppure rimuovere la parola chiave di sola lettura dalla dichiarazione del campo.  
  
 L'esempio seguente genera l'errore CS1648:  
  
```  
// CS1648.cs public struct Inner { public int i; } class Outer { public readonly Inner inner = new Inner(); } class D { static void Main() { Outer outer = new Outer(); outer.inner.i = 1;  // CS1648 } }  
```