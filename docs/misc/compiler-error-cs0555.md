---
title: "Errore del compilatore CS0555 | Microsoft Docs"
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
  - "CS0555"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0555"
ms.assetid: e4b2f890-98b4-4578-b1de-ebaafc8b3da2
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0555
L'operatore definito dall'utente non può accettare un oggetto del tipo di inclusione e convertirlo in un oggetto del tipo di inclusione  
  
 Le conversioni definite dall'utente verso i valori della classe contenitore non sono consentite. Non è necessario usare questo operatore.  
  
 L'esempio seguente genera l'errore CS0555:  
  
```  
// CS0555.cs public class MyClass { // delete the following operator to resolve this CS0555 public static implicit operator MyClass(MyClass aa)   // CS0555 { return new MyClass(); } public static void Main() { } }  
```