---
title: "Avviso del compilatore (livello 1) CS3017 | Microsoft Docs"
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
  - "CS3017"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3017"
ms.assetid: 8e56b2f0-9caf-4c9a-98c2-d3ad0b70e767
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3017
Impossibile specificare l'attributo CLSCompliant su un modulo che differisce dall'attributo CLSCompliant sull'assembly  
  
 Questo avviso viene visualizzato se un attributo CLSCompliant dell'assembly è in conflitto con l'attributo CLSCompliant del modulo. Un assembly conforme a CLS non può contenere moduli non conformi a CLS. Per risolvere il problema, assicurarsi che l'assembly e gli attributi CLSCompliant del modulo siano entrambi true o entrambi false oppure rimuovere uno degli attributi. Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3017:  
  
```  
// CS3017.cs // compile with: /target:module using System; [module: CLSCompliant(true)] [assembly: CLSCompliant(false)]  // CS3017 // Try this line instead: // [assembly: CLSCompliant(true)] class C { static void Main() {} }  
```