---
title: "Errore del compilatore CS1649 | Microsoft Docs"
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
  - "CS1649"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1649"
ms.assetid: 6355c7f2-157c-441d-8925-500062988636
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1649
I membri del campo readonly 'identifier' non possono essere passati a un parametro ref o out \(tranne che in un costruttore\)  
  
 Questo errore si verifica quando si passa a una funzione una variabile membro di un campo `readonly` come argomento `ref` o `out`. Questa operazione non è consentita perché i parametri `ref` e `out` possono venire modificati dalla funzione. Per correggere l'errore, rimuovere la parola chiave `readonly` dal campo oppure non passare i membri del campo `readonly` alla funzione. Ad esempio, è possibile provare a creare una variabile temporanea modificabile e passarla come argomento `ref`, come mostrato nell'esempio seguente.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1649:  
  
```  
// CS1649.cs public struct Inner { public int i; } class Outer { public readonly Inner inner = new Inner(); } class D { static void f(ref int iref) { } static void Main() { Outer outer = new Outer(); f(ref outer.inner.i);  // CS1649 // Try this code instead: // int tmp = outer.inner.i; // f(ref tmp); } }  
```