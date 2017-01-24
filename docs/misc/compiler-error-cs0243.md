---
title: "Errore del compilatore CS0243 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0243"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0243"
ms.assetid: 2506e4cb-dc26-46b4-a58c-ab6bf1601144
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0243
L'attributo Conditional non è valido per 'method' perché è un metodo di override  
  
 L'attributo [Conditional](http://msdn.microsoft.com/it-it/e1c4913b-74d0-421a-8a6d-c14b3f0e68fb) non è consentito in un metodo contrassegnato con la parola chiave [override](../Topic/override%20\(C%23%20Reference\).md). Per altre informazioni, vedere [Sapere quando utilizzare le parole chiave Override e New](../Topic/Knowing%20When%20to%20Use%20Override%20and%20New%20Keywords%20\(C%23%20Programming%20Guide\).md).  
  
 Il compilatore non esegue mai l'associazione ai metodi di override; esegue solo l'associazione al metodo di base e Common Language Runtime chiama l'override, come appropriato.  
  
 L'esempio seguente genera l'errore CS0243:  
  
```  
// CS0243.cs // compile with: /target:library public class MyClass { public virtual void M() {} } public class MyClass2 : MyClass { [System.Diagnostics.ConditionalAttribute("MySymbol")]   // CS0243 // remove Conditional attribute or remove override keyword public override void M() {} }  
```