---
title: "&#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; si differenziano per i parametri facoltativi | Microsoft Docs"
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
  - "vbc30308"
  - "bc30308"
helpviewer_keywords: 
  - "BC30308"
ms.assetid: 591dc351-4b87-4e92-81e1-2c1ff51da295
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; si differenziano per i parametri facoltativi
Si è provato a eseguire l'override di un metodo con un altro metodo che differisce dal primo per i valori dei parametri facoltativi, ossia che ha firme diverse. Un tipo può eseguire l'override di un metodo ereditato sottoponibile a override dichiarando un metodo con lo stesso nome e la stessa firma e contrassegnando la dichiarazione con il modificatore `Overrides`.  
  
 **ID errore:** BC30308  
  
### Per correggere l'errore  
  
-   Verificare che i due metodi abbiano la stessa firma.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)   
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)