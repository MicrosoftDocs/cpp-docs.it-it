---
title: "Avviso del compilatore (livello 2) CS3019 | Microsoft Docs"
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
  - "CS3019"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3019"
ms.assetid: b41117cf-8956-4989-93fd-9903812e2d2f
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS3019
Il controllo di conformità a CLS non verrà eseguito in 'type' perché non è visibile all'esterno dell'assembly.  
  
 Questo avviso viene visualizzato quando un tipo o un membro che ha l'attributo <xref:System.CLSCompliantAttribute> non è visibile da un altro assembly. Per risolvere questo errore, rimuovere l'attributo nelle classi o nei membri non visibili da altri assembly oppure rendere visibili il tipo o i membri. Per altre informazioni sulla conformità a CLS, vedere [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3019:  
  
```  
// CS3019.cs // compile with: /W:2 using System; [assembly: CLSCompliant(true)] // To fix the error, remove the next line [CLSCompliant(true)]  // CS3019 class C { [CLSCompliant(false)]  // CS3019 void Foo() { } static void Main() { } }  
```  
  
## Vedere anche  
 [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md)