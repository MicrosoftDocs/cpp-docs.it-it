---
title: "Errore del compilatore CS1955 | Microsoft Docs"
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
  - "CS1955"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1955"
ms.assetid: 38a8542d-da53-4739-b807-46c8c077363c
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1955
Impossibile utilizzare il membro non richiamabile 'name' come metodo.  
  
 È possibile richiamare solo metodi e delegati. Questo errore viene generato quando si tenta di usare parentesi vuote per chiamare un elemento diverso da un metodo o un delegato.  
  
### Per correggere l'errore  
  
1.  Rimuovere le parentesi dall'espressione.  
  
## Esempio  
 Il codice seguente genera l'errore CS1955 poiché il codice sta tentando di richiamare un campo e una proprietà usando un operatore di chiamata al metodo [\(\)](../Topic/\(\)%20Operator%20\(C%23%20Reference\).md). Non è possibile chiamare un campo o una proprietà, ma è possibile accedere al valore in esso archiviato usando l'operatore di accesso ai membri \( [.](../Topic/.%20Operator%20\(C%23%20Reference\).md) \).  
  
```  
// cs1955.cs class A { public int x = 0; public int X { get { return x; } set { x = value; } } } class Test { static int Main() { A a = new A(); a.x(); // CS1955 a.X(); // CS1955 // Try this line instead: // int num = a.x; } }  
```