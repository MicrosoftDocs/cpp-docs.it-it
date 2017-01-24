---
title: "Errore del compilatore CS0694 | Microsoft Docs"
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
  - "CS0694"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0694"
ms.assetid: 048615e4-4599-4726-b5db-55322ccc936f
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0694
Il parametro di tipo 'identifier' ha lo stesso nome del tipo che lo contiene o del metodo  
  
 Poiché il nome del parametro di tipo non può essere identico al nome di tipo o metodo che contiene il parametro di tipo, è necessario usare un nome diverso per il parametro di tipo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0694.  
  
```  
// CS0694.cs // compile with: /target:library class C<C> {}   // CS0694  
```  
  
## Esempio  
 Oltre al caso precedente che coinvolge una classe generica, questo errore può verificarsi con un metodo:  
  
```  
// CS0694_2.cs // compile with: /target:library class A { public void F<F>(F arg);   // CS0694 }  
```