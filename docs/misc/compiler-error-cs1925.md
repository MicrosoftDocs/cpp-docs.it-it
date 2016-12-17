---
title: "Errore del compilatore CS1925 | Microsoft Docs"
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
  - "CS1925"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1925"
ms.assetid: b60806a5-2ccf-47f5-873b-7ac2292fdb54
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1925
Non è possibile inizializzare l'oggetto di tipo 'type' con un inizializzatore di raccolta.  
  
 Gli inizializzatori di raccolta sono consentiti solo per le classi di raccolta che soddisfano determinati criteri. Per altre informazioni, vedere [Inizializzatori di oggetto e di raccolta](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md). Questo errore viene generato anche quando si tenta di usare la forma breve di un inizializzatore di matrice annidato all'interno di un inizializzatore di raccolta.  
  
### Per correggere l'errore  
  
1.  Inizializzare l'oggetto chiamando i relativi metodi e costruttori.  
  
## Esempio  
 Il codice seguente genera l'errore CS1925:  
  
```  
// cs1925.cs public class Student { public int[] Scores; } class Test { static void Main(string[] args) { Student student = new Student { Scores = { 1, 2, 3 } }; // CS1925 } }  
```