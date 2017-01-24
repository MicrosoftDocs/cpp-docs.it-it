---
title: "Errore del compilatore CS1954 | Microsoft Docs"
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
  - "CS1954"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1954"
ms.assetid: bdec399e-c43d-46d3-a01b-ef3572786fe5
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1954
La corrispondenza migliore del metodo di overload 'method' per l'elemento inizializzatore della raccolta non può essere usata. I metodi 'Add' dell'inizializzatore di raccolta non possono avere parametri ref o out.  
  
 Affinché una classe di raccolte venga inizializzata usando un inizializzatore di raccolta, è necessario che la classe contenga un metodo `public` `Add` che non sia un parametro `ref` o `out`.  
  
### Per correggere l'errore  
  
-   Se è possibile modificare il codice sorgente della classe delle raccolte, fornire un metodo `Add` che non accetti un parametro `ref` o `out`.  
  
-   Se non è possibile modificare la classe di raccolte, inizializzarla con i costruttori forniti. In questo caso, non sarà possibile usare un inizializzatore di raccolta.  
  
## Esempio  
 L'esempio seguente generato l'errore CS1954 perché l'unico overload disponibile dell'elenco `Add` in `MyList` contiene un parametro `ref`.  
  
```  
// cs1954.cs using System.Collections.Generic; class MyList<T> : IEnumerable<T> { List<T> _list; public void Add(ref T item) { _list.Add(item); } public System.Collections.Generic.IEnumerator<T> GetEnumerator() { int index = 0; T current = _list[index]; while (current != null) { yield return _list[index++]; } } System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator() { return GetEnumerator(); } } public class MyClass { public string tree { get; set; } } class Program { static void Main(string[] args) { MyList<MyClass> myList = new MyList<MyClass> { new MyClass { tree = "maple" } }; // CS1954 } }  
  
```  
  
## Vedere anche  
 [Inizializzatori di oggetto e di raccolta](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md)