---
title: "Errore del compilatore CS1518 | Microsoft Docs"
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
  - "CS1518"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1518"
ms.assetid: 26e0870d-fe91-4c66-b3f8-ed2b074c964e
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1518
È prevista una classe, un delegato, un enum, un'interfaccia o uno struct  
  
 È stata trovata una dichiarazione non supportata in uno [spazio dei nomi](../Topic/namespace%20\(C%23%20Reference\).md). In uno spazio dei nomi il compilatore accetta solo classi, strutture, enumerazioni, interfacce, spazi dei nomi e delegati.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1518:  
  
```  
// CS1518.cs namespace x { sealed class c1 {};      // OK namespace f2 {};         // OK sealed f3 {};            // CS1518 }  
```