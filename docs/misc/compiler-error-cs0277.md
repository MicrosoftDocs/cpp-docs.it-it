---
title: "Errore del compilatore CS0277 | Microsoft Docs"
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
  - "CS0277"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0277"
ms.assetid: 8abec3eb-4d4c-4aab-87cc-d0444ab23535
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0277
'class' non implementa il membro di interfaccia 'accessor'. 'class accessor' è di tipo non pubblico  
  
 Questo errore si verifica quando si tenta di implementare una proprietà di un'interfaccia, ma l'implementazione della funzione di accesso alle proprietà nella classe non è pubblica. I metodi che implementano membri di interfaccia devono avere accessibilità pubblica. Per risolvere il problema, rimuovere il modificatore di accesso nella funzione di accesso alle proprietà.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0277:  
  
```  
// CS0277.cs public interface MyInterface { int Property { get; set; } } public class MyClass : MyInterface   // CS0277 { public int Property { get { return 0; } // Try this instead: //set { } protected set { } } }  
```