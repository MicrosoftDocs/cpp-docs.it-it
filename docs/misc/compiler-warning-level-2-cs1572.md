---
title: "Avviso del compilatore (livello 2) CS1572 | Microsoft Docs"
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
  - "CS1572"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1572"
ms.assetid: 24bc8b96-29d2-4201-bc4e-6b9b5a4f5a1d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS1572
Il commento XML in 'construct' ha un tag paramref per 'parameter', ma non esiste nessun parametro con questo nome  
  
 Con l'opzione del compilatore [\/doc](../Topic/-doc%20\(C%23%20Compiler%20Options\).md) è stato specificato un commento per un parametro che non esiste per il metodo. Modificare il valore passato all'attributo del nome oppure rimuovere una delle righe di commento.  
  
 L'esempio seguente genera l'errore CS1572:  
  
```  
// CS1572.cs // compile with: /W:2 /doc:x.xml /// <summary>help text</summary> public class MyClass { /// <param name='Int1'>Used to indicate status.</param> /// <param name='Char1'>Used to indicate status.</param> /// <param name='Char2'>???</param> // CS1572 public static void MyMethod(int Int1, char Char1) { } /// <summary>help text</summary> public static void Main () { } }  
```