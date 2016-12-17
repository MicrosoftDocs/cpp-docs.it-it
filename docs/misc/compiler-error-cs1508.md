---
title: "Errore del compilatore CS1508 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1508"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1508"
ms.assetid: 979bc615-58ce-49f8-ba73-e6cf57c56418
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1508
L'identificatore di risorsa 'identifier' è già stato usato in questo assembly  
  
 In una compilazione lo stesso identificatore \(***identificatore***\) è stato passato a due o più opzioni del compilatore [\/resource](../Topic/-resource%20\(C%23%20Compiler%20Options\).md) o [\/linkresource](../Topic/-linkresource%20\(C%23%20Compiler%20Options\).md).  
  
 Ad esempio, le opzioni seguenti generano l'errore CS1508:  
  
```  
/resource:anyfile.bmp,DuplicatIdent /linkresource:a.bmp,DuplicatIdent  
```