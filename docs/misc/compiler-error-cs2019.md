---
title: "Errore del compilatore CS2019 | Microsoft Docs"
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
  - "CS2019"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2019"
ms.assetid: eafd2531-8b3a-499c-9e12-a605a011396f
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS2019
Il tipo di destinazione non è valido per \/target. È necessario specificare 'exe', 'winexe', 'library' o 'module'  
  
 È stata usata l'opzione del compilatore [\/target](../Topic/-target%20\(C%23%20Compiler%20Options\).md) ma è stato passato un parametro non valido. Per risolvere questo problema, ricompilare il programma usando il formato dell'opzione **\/target** appropriato al file di output.  
  
 L'esempio seguente genera l'errore CS2017:  
  
```  
// CS2019.cs // compile with: /target:libra // CS2019 expected class MyClass { }  
```