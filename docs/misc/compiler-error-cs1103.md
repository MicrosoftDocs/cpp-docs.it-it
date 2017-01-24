---
title: "Errore del compilatore CS1103 | Microsoft Docs"
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
  - "CS1103"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1103"
ms.assetid: 513a26ea-9d66-4dc3-b3e6-d709c3089b1a
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1103
Il primo parametro di un metodo di estensione non può essere di tipo 'type'.  
  
 Il primo parametro di un metodo di estensione non può essere un tipo di puntatore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1103:  
  
```  
// cs1103.cs public static class Extensions { public unsafe static char* Test(this char* charP) { return charP; } // CS1103 }   
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [non protette](../Topic/unsafe%20\(C%23%20Reference\).md)