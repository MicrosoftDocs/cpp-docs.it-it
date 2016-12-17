---
title: "Errore del compilatore CS0503 | Microsoft Docs"
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
  - "CS0503"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0503"
ms.assetid: 12a337c9-8c5d-473d-8ce6-057b2c7e7935
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0503
Il metodo astratto 'method' non può essere contrassegnato come virtual  
  
 È inutile contrassegnare un metodo di membro sia come [abstract](../Topic/abstract%20\(C%23%20Reference\).md) che come [virtual](../Topic/virtual%20\(C%23%20Reference\).md), in quanto **abstract** implica **virtual**.  
  
 L'esempio seguente genera l'errore CS0503:  
  
```  
// CS0503.cs namespace x { abstract public class clx { abstract virtual public void f();   // CS0503 } }  
```