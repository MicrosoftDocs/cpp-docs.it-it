---
title: "Avviso del compilatore (livello 1) CS3018 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS3018"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3018"
ms.assetid: 35d2f4bd-10c3-4e9f-8e02-389ab84db2cd
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3018
Non è possibile contrassegnare 'type' come conforme a CLS perché è un membro del tipo non conforme a CLS 'type'  
  
 Questo avviso viene visualizzato quando una classe annidata con l'attributo CLSCompliant impostato su `true` viene dichiarata membro di una classe il cui attributo CLSCompliant è impostato su `false`. L'operazione non è consentita perché una classe nidificata, se è membro di una classe esterna non compatibile con CLS, non può essere compatibile con CLS. Per correggere l'errore, rimuovere l'attributo CLSCompliant dalla classe nidificata oppure sostituire l'impostazione `true` dell'attributo con `false`. Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3018.  
  
```  
// CS3018.cs // compile with: /target:library using System; [assembly: CLSCompliant(true)] [CLSCompliant(false)] public class Outer { [CLSCompliant(true)]   // CS3018 public class Nested {} // OK public class Nested2 {} [CLSCompliant(false)] public class Nested3 {} }  
```