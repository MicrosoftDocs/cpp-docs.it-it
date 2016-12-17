---
title: "Errore del compilatore CS1938 | Microsoft Docs"
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
  - "CS1938"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1938"
ms.assetid: fc8de996-f7a1-46e8-b07b-aea520b391b9
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1938
Il nome 'name' non si trova nell'ambito a destra di 'equals'. Provare a invertire le espressioni ai lati di 'equals'.  
  
 La parola chiave `equals` è un operatore speciale che viene usato in una clausola `join` per determinare l'uguaglianza tra due espressioni. La variabile di intervallo per la sequenza di origine sul lato sinistro è nell'ambito sul lato sinistro di equals e la variabile di intervallo per l'origine sul lato destro è nell'ambito solo sul lato sinistro di equals. È possibile verificarlo con IntelliSense nell'esempio di codice seguente.  
  
### Per correggere l'errore  
  
1.  Scambiare la posizione delle due variabili di intervallo come illustrato nella riga di commento nell'esempio seguente:  
  
## Esempio  
 Il codice seguente genera l'errore CS1938:  
  
```  
// cs1938.cs using System.Linq; class Test { static void Main() { int[] sourceA = { 1, 2, 3, 4, 5 }; int[] sourceB = { 3, 4, 5, 6, 7 }; var query = from a in sourceA join b in sourceB on b equals a // CS1938 // Try the following line instead. // join b in sourceB on a equals b select new { a, b }; } }  
```  
  
## Vedere anche  
 [Clausola join](../Topic/join%20clause%20\(C%23%20Reference\).md)