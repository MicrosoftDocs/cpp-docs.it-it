---
title: "I vincoli di tipo del metodo di estensione &#39;&lt;nomemetodo&gt;&#39; non possono mai essere soddisfatti | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc36561"
  - "vbc36561"
helpviewer_keywords: 
  - "BC36561"
ms.assetid: ff42d6e9-611b-407d-a269-f268b36ed277
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I vincoli di tipo del metodo di estensione &#39;&lt;nomemetodo&gt;&#39; non possono mai essere soddisfatti
I parametri di tipo di questo metodo interagiscono in modo da impedire che vengano soddisfatti. Di seguito viene riportato un esempio di metodo di estensione.  
  
```  
'' Not valid. '<Extension()> _ 'Sub extensionExample(Of T As U, U)(ByVal para1 As T, ByVal para2 As U) 'End Sub  
```  
  
 Poiché il metodo è un metodo di estensione, il compilatore deve poter determinare il tipo o i tipi di dati che il metodo estende solo in base al primo parametro della dichiarazione del metodo, `para1`, e all'argomento inviato per tale parametro. Quando il primo parametro fa riferimento a parametri di tipo generici, `para1 as T`, i vincoli sui parametri generici limitano il set di tipi a cui il metodo si applica.  
  
 L'applicabilità di un metodo di estensione è determinata dall'argomento fornito per il primo parametro, che nel codice seguente è `arg1`.  
  
 `'' Not valid.`  
  
 `'arg1.extensionExample(arg2)`  
  
 Deve essere possibile verificare i vincoli su tutti i parametri di tipo generici a cui fa riferimento il primo parametro, `para1`, analizzando solo il primo argomento,  `arg1`. In `extensionExample` non è possibile determinare il set di tipi che si stanno estendendo solo dal primo parametro. Il parametro di tipo `T` è vincolato dal parametro di tipo `U`, a cui `para1` non fa riferimento, e non può essere dedotto da `arg1`. L'applicabilità del metodo a qualsiasi possibile tipo non può pertanto essere verificata e il metodo non potrà mai essere chiamato.  
  
 **ID errore:** BC36561  
  
### Per correggere l'errore  
  
-   Modificare la dichiarazione di tipo per rimuovere l'interdipendenza tra i tipi.  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)