---
title: "Errore del compilatore CS1937 | Microsoft Docs"
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
  - "CS1937"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1937"
ms.assetid: f13e8dc9-8c20-477e-8b74-7192848e08a2
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1937
Il nome 'name' non si trova nell'ambito a sinistra di 'equals'. Provare a invertire le espressioni ai lati di 'equals'.  
  
 La parola chiave `equals` è un operatore speciale che viene usato in una clausola `join` per determinare l'uguaglianza tra due espressioni. La variabile di intervallo per la sequenza di origine sul lato sinistro è nell'ambito sul lato sinistro di equals e la variabile di intervallo per l'origine sul lato destro è nell'ambito solo sul lato sinistro di equals. È possibile verificarlo con IntelliSense nell'esempio di codice seguente.  
  
### Per correggere l'errore  
  
1.  Scambiare la posizione delle due variabili di intervallo come illustrato nella riga di commento nell'esempio seguente:  
  
## Esempio  
 L'esempio seguente genera l'errore CS1937.  
  
```  
// cs1937.cs using System.Linq; class Test { static void Main() { int[] sourceA = { 1, 2, 3, 4, 5 }; int[] sourceB = { 3, 4, 5, 6, 7 }; var query = from a in sourceA join b in sourceB on b equals a // CS1937 // Try the following line instead. //join b in sourceB on a equals b select new { a, b }; } }  
```  
  
 Il lato sinistro viene chiamato in genere il lato "esterno" e il lato destro viene generalmente chiamato lato "interno".  
  
## Vedere anche  
 [Clausola join](../Topic/join%20clause%20\(C%23%20Reference\).md)