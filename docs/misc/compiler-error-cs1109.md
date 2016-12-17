---
title: "Errore del compilatore CS1109 | Microsoft Docs"
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
  - "CS1109"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1109"
ms.assetid: bebe56b8-3831-4ebb-a49e-e0364b4c11a7
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1109
I metodi di estensione devono essere definiti in una classe statica di primo livello, mentre 'name' è una classe annidata.  
  
 I metodi di estensione non possono essere definiti nelle classi annidate.  
  
## Esempio  
 L'esempio seguente genera CS1109 perché la classe `Extension` è annidata nella classe `Out`:  
  
```  
// cs1109.cs public class Test { } static class Out { static class Extension { static void ExtMethod(this Test c) // CS1109 { } } }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)