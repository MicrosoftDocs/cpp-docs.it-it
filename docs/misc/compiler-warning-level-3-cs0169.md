---
title: "Avviso del compilatore (livello 3) CS0169 | Microsoft Docs"
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
  - "CS0169"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0169"
ms.assetid: 04b0015f-658d-440a-b9ba-831178f1a180
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0169
Il campo privato 'class member' non è mai usato  
  
 Una variabile privata è stata dichiarata ma mai usata come riferimento. Questo avviso viene spesso generato quando si dichiara un membro privato di una classe e non lo si usa.  
  
 L'esempio seguente genera l'errore CS0169:  
  
```  
// compile with: /W:3 using System; public class ClassX { int i;   // CS0169, i is not used anywhere public static void Main() { } }  
```