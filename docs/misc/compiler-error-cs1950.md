---
title: "Errore del compilatore CS1950 | Microsoft Docs"
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
  - "CS1950"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1950"
ms.assetid: e37fb5b1-09e0-47a6-9db5-a48f90ea7bbb
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1950
Il miglior metodo Add di overload 'name' per l'inizializzatore di raccolta presenta alcuni argomenti non validi.  
  
 Per supportare gli inizializzatori di raccolta, è necessario che una classe implementi IEnumerable e contenga un metodo `Add` pubblico. Per inizializzare il tipo usando un inizializzatore di raccolta, il parametro di input del metodo `Add` deve essere compatibile con il tipo dell'oggetto che si sta provando ad aggiungere.  
  
### Per correggere l'errore  
  
-   Usare un tipo compatibile nell'inizializzatore di raccolta.  
  
-   Modificare il parametro di input e\/o l'accessibilità del metodo `Add` nel tipo di raccolta.  
  
-   Aggiungere un metodo `Add` nuovo con un parametro di input che corrisponda a quello che si sta passando.  
  
-   Rendere generica la classe di raccolte per poter contenere un metodo `Add` che accetti qualsiasi tipo passato.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1950:  
  
```  
// cs1950.cs using System.Collections; class TestClass : CollectionBase { public void Add(int c) { } } class Test { static void Main() { TestClass t = new TestClass { "hi" }; // CS1950 } }  
```  
  
## Vedere anche  
 [Inizializzatori di oggetto e di raccolta](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md)