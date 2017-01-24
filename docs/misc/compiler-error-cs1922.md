---
title: "Errore del compilatore CS1922 | Microsoft Docs"
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
  - "CS1922"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1922"
ms.assetid: a4098a25-6581-4966-b61d-318cd12f76d3
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1922
L'inizializzatore di raccolta richiede che il tipo 'type' implementi System.Collections.IEnumerable.  
  
 Per usare un inizializzatore di raccolta con un tipo, questo deve implementare `IEnumerable`. Questo errore può verificarsi se si usa accidentalmente la sintassi dell'inizializzatore di raccolta quando si intende usare un inizializzatore di oggetto.  
  
### Per correggere l'errore  
  
-   Se il tipo non rappresenta una raccolta, usare la sintassi dell'inizializzatore di oggetto anziché la sintassi dell'inizializzatore di raccolta.  
  
-   Se il tipo rappresenta una raccolta, modificarlo per implementare `IEnumerable` prima che sia possibile usare inizializzatori di raccolta per inizializzare oggetti di quel tipo.  
  
-   Se il tipo rappresenta una raccolta e non si ha accesso al codice sorgente, inizializzare solo gli elementi usando i costruttori di classe o altri metodi di inizializzazione.  
  
## Esempio  
 Il codice seguente genera l'errore CS1922:  
  
```  
// cs1922.cs public class Test { public static void Main() { // Collection initializer. var tc = new TestClass  {1,"hello"} ; // CS1922 // Object initalizer. var tc2 = new TestClass { memberA = 1, memberB = "hello" }; // OK } } public class TestClass { public int memberA { get; set; } public string memberB { get; set; } }  
  
```  
  
## Vedere anche  
 [Inizializzatori di oggetto e di raccolta](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md)