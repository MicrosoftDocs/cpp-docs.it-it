---
title: "Errore del compilatore CS1670 | Microsoft Docs"
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
  - "CS1670"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1670"
ms.assetid: ee2507e5-b509-4af3-a15e-2c1f2da7159c
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1670
params non è valido in questo contesto  
  
 Di seguito sono riportate alcune funzionalità C\# incompatibili con gli elenchi di argomenti variabili e che non consentono l'uso della parola chiave `params```.  
  
-   Elenchi di parametri di metodi anonimi  
  
-   Operatori di overload  
  
## Esempio  
 L'esempio seguente genera l'errore CS1670:  
  
```  
// CS1670.cs public class C { public bool operator +(params int[] paramsList)  // CS1670 { return false; } static void Main() { } }  
```