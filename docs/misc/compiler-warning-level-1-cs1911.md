---
title: "Avviso del compilatore (livello 1) CS1911 | Microsoft Docs"
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
  - "CS1911"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1911"
ms.assetid: 95e8a7a0-1c19-4930-a7e9-3ae4060e97d3
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1911
L'accesso al membro 'name' tramite una parola chiave 'base' da un metodo anonimo, un'espressione lambda, un'espressione di query o un iteratore produce codice non verificabile. Si consiglia di spostare l'accesso in un metodo di supporto nel tipo che lo contiene.  
  
 La chiamata di funzioni virtuali tramite la parola chiave `base` all'interno del corpo del metodo di un iteratore o di metodi anonimi implica la generazione di codice non verificabile. Il codice non verificabile non verrà eseguito in un ambiente con attendibilità parziale.  
  
 Per evitare che venga visualizzato l'avviso CS1911, è possibile spostare la chiamata di funzione virtuale in una funzione di supporto.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1911.  
  
```  
// CS1911.cs // compile with: /W:1 using System; delegate void D(); delegate D RetD(); class B { protected virtual void M() { Console.WriteLine("B.M"); } } class Der : B { protected override void M() { Console.WriteLine("D.M"); } void Test() { base.M(); } D Test2() { return new D(base.M); } public D CallBaseM() { return delegate () { base.M(); };   // CS1911 // try the following line instead // return delegate () { Test(); }; } public RetD DelToBaseM() { return delegate () { return new D(base.M); };   // CS1911 // try the following line instead // return delegate () { return Test2(); }; } } class Program { public static void Main() { Der der = new Der(); D d = der.CallBaseM(); d(); RetD rd = der.DelToBaseM(); rd()(); } }  
```