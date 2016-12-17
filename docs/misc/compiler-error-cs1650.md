---
title: "Errore del compilatore CS1650 | Microsoft Docs"
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
  - "CS1650"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1650"
ms.assetid: 251a3a67-6e56-4795-874a-d54610c70595
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1650
Non è possibile effettuare un'assegnazione a campi del campo statico di sola lettura 'identifier' \(tranne che in un costruttore statico o in un inizializzatore di variabile\)  
  
 Questo errore si verifica quando si tenta di modificare un membro di un campo che è di sola lettura e statico, in cui la modifica non è consentita. Per risolvere l'errore, limitare le assegnazioni ai campi di sola lettura al costruttore o a un inizializzatore di variabile oppure rimuovere la parola chiave `readonly` dalla dichiarazione del campo.  
  
```  
// CS1650.cs public struct Inner { public int i; } class Outer { public static readonly Inner inner = new Inner(); } class D { static void Main() { Outer.inner.i = 1;  // CS1650 } }  
```