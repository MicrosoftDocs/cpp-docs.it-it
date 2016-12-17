---
title: "Errore del compilatore CS1920 | Microsoft Docs"
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
  - "CS1920"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1920"
ms.assetid: efb4782f-a222-4fb5-9e79-8bd2d380520b
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1920
L'inizializzatore di elemento non può essere vuoto.  
  
 Un inizializzatore di raccolta è costituito da una sequenza di inizializzatori di elementi. Gli inizializzatori di elementi non devono essere racchiusi in parentesi a meno che non contengano un'espressione di assegnazione. Tuttavia, se sono presenti parentesi, non possono essere vuote. Se l'inizializzatore di elemento è un inizializzatore di oggetto, le parentesi potrebbero essere vuote finché l'inizializzatore contiene un'espressione di creazione di un nuovo oggetto.  
  
### Per correggere l'errore  
  
-   Aggiungere l'espressione mancante tra parentesi.  
  
-   Se l'espressione deve essere un inizializzatore di oggetto, aggiungere l'espressione di creazione di un nuovo oggetto davanti alle parentesi.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1920:  
  
```  
// cs1920.cs using System.Collections.Generic; public class Test { public static int Main() { // Error. Empty initializer // for inner list. List<List<int>> collection = new List<List<int>>() { { } }; // CS1920 // OK. No initializer for inner list. List<List<int>> collection2 = new List<List<int>>() {  }; // OK. Inner list is initialized // to one List<int> with zero elements. List<List<int>> collection3 = new List<List<int>>() { new List<int> { } }; return 0; } }  
```  
  
## Vedere anche  
 [Inizializzatori di oggetto e di raccolta](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md)