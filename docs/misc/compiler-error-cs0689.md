---
title: "Errore del compilatore CS0689 | Microsoft Docs"
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
  - "CS0689"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0689"
ms.assetid: 5c555c2e-8e71-4097-8dbf-52dbafe7bf57
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0689
Non è possibile derivare da 'identifier' perché è un parametro di tipo  
  
 Le classi base o le interfacce per le classi generiche non possono essere specificate da un parametro di tipo. Derivare da una classe o interfaccia specifica o da una classe generica specifica oppure includere il tipo sconosciuto come membro.  
  
 L'esempio seguente genera l'errore CS0689:  
  
```  
// CS0689.cs class A<T> : T   // CS0689 { }  
```