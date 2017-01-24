---
title: "Errore del compilatore CS1914 | Microsoft Docs"
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
  - "CS1914"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1914"
ms.assetid: e61361b6-4660-41fd-a574-cc48e1b3873c
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1914
Non è possibile assegnare la proprietà o il campo statico 'name' in un inizializzatore di oggetti  
  
 Per definizione, gli inizializzatori di oggetto inizializzano oggetti o istanze di classi. Non possono essere usati per inizializzare un campo `static` di un tipo. Indipendentemente dal numero di istanze di una classe create, esiste una sola copia di un campo `static`.  
  
### Per correggere l'errore  
  
1.  Modificare il campo in un campo di istanza nel tipo o rimuovere il tentativo di inizializzarlo dall'inizializzatore di oggetto.  
  
## Esempio  
 Il codice seguente genera l'errore CS1914 perché l'inizializzatore tenta di inizializzare il campo `TestClass.Number`, che è `static`:  
  
```  
// cs1914.cs using System.Linq; public class TestClass { public string Message { get; set; } public static int Number { get; set; } } class Test { static void Main() { TestClass b = new TestClass() { Message = "Hello", Number = "555-1212" }; // CS1914 } }  
```