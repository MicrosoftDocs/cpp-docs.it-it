---
title: "Avviso del compilatore (livello 2) CS3021 | Microsoft Docs"
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
  - "CS3021"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3021"
ms.assetid: 89f09e4d-65b0-4422-86ea-85c7e05ac29b
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS3021
'type' non necessita di un attributo CLSCompliant perché l'assembly non ha un attributo CLSCompliant  
  
 Questo avviso viene generato se `[CLSCompliant(false)]` viene visualizzato in una classe all'interno di un assembly che non ha un attributo CLSCompliant a livello di assembly impostato su true \(ovvero la riga `[assembly: CLSCompliant(true)]`\). Poiché l'assembly non dichiara se stesso come conforme a CLS, non è necessario che alcun elemento all'interno dell'assembly si dichiari non conforme, poiché previsto che non sia conforme a CLS. Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3).  
  
 Per eliminare l'avviso, rimuovere l'attributo o aggiungere l'attributo a livello di assembly.  
  
## Esempio  
 L'esempio seguente genera l'errore CS3021:  
  
```  
// CS3021.cs using System; // Uncomment the following line to declare the assembly CLS Compliant, // and avoid the warning without removing the attribute on the class. //[assembly: CLSCompliant(true)] // Remove the next line to avoid the warning. [CLSCompliant(false)]               // CS3021 public class C { public static void Main() { } }  
```  
  
## Vedere anche  
 [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md)