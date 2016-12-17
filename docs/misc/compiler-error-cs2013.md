---
title: "Errore del compilatore CS2013 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS2013"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2013"
ms.assetid: 8a57b4c8-02fc-4f73-b489-121ff468c17d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS2013
'value' non è un numero di base dell'immagine valido  
  
 Un valore non valido \(non numerico\) è stato passato all'opzione del compilatore [\/baseaddress](../Topic/-baseaddress%20\(C%23%20Compiler%20Options\).md).  
  
 L'esempio seguente genera l'errore CS2013:  
  
```  
// CS2013.cs // compile with: /target:library /baseaddress:x // CS2013 expected class MyClass { }  
```