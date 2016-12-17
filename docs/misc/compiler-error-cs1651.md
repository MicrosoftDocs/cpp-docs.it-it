---
title: "Errore del compilatore CS1651 | Microsoft Docs"
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
  - "CS1651"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1651"
ms.assetid: ce1043e3-b453-4b4c-b949-f344834e3845
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1651
Non è possibile passare un parametro ref o out a campi del campo statico di sola lettura 'identifier' \(tranne che in un costruttore statico\)  
  
 Questo errore si verifica se si passa una variabile a una funzione che è membro di un campo statico di sola lettura come argomento ref. Dato che i parametri ref possono essere modificati dalla funzione, questa operazione non è consentita. Per risolvere questo errore, rimuovere la parola chiave **readonly** nel campo oppure non passare membri del campo readonly alla funzione. Ad esempio, è possibile provare a creare una variabile temporanea modificabile e passarla come argomento ref, come mostrato nell'esempio seguente.  
  
 L'esempio seguente genera l'errore CS1651:  
  
```  
// CS1651.cs public struct Inner { public int i; } class Outer { public static readonly Inner inner = new Inner(); } class D { static void f(ref int iref) { } static void Main() { f(ref Outer.inner.i);  // CS1651 // Try this instead: // int tmp = Outer.inner.i; // f(ref tmp); } }  
```