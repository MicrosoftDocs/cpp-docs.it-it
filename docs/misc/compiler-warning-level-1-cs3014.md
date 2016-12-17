---
title: "Avviso del compilatore (livello 1) CS3014 | Microsoft Docs"
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
  - "CS3014"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3014"
ms.assetid: 6825b42f-1820-4265-b8d8-9b3387d7c130
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3014
'member' non necessita di un attributo CLSCompliant perché l'assembly non ha un attributo CLSCompliant  
  
 In un file di codice sorgente in cui non è stata specificata la conformità alle specifiche CLS \(Common Language Specification\), un costrutto nel file è stato contrassegnato come conforme a CLS, ma questa operazione non è consentita. Per risolvere il problema, aggiungere al file un attributo conforme a CLS a livello di assembly \(nell'esempio seguente, rimuovere il commento della riga che contiene l'attributo a livello di assembly\). Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3014:  
  
```  
// CS3014.cs using System; // [assembly:CLSCompliant(true)] public class I { [CLSCompliant(true)]   // CS3014 public void M() { } public static void Main() { } }  
```