---
title: "Errore del compilatore CS0441 | Microsoft Docs"
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
  - "CS0441"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0441"
ms.assetid: 3f07500a-d479-424c-a0f4-c219be1b5a45
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0441
'class': una classe non può essere sia static che sealed  
  
 Questo errore si verifica quando si dichiara una classe che è sia static che sealed. Le classi statiche sono implicitamente sealed, quindi il modificatore sealed non è necessario. Per risolvere il problema, usare un solo modificatore.  
  
 L'esempio seguente genera l'errore CS0441:  
  
```  
// CS0441.cs sealed static class MyClass { }   // CS0441  
```