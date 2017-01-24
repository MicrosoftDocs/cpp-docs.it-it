---
title: "&#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; si differenziano per i valori predefiniti dei parametri facoltativi | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30307"
  - "bc30307"
helpviewer_keywords: 
  - "BC30307"
ms.assetid: c4cf6040-41c3-4650-8eb9-bff063756599
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; si differenziano per i valori predefiniti dei parametri facoltativi
Si è provato a eseguire l'override di un metodo con un altro metodo che differisce dal primo per i valori predefiniti dei parametri facoltativi, ossia i due metodi hanno firme diverse. Un tipo può eseguire l'override di un metodo ereditato sottoponibile a override dichiarando un metodo con lo stesso nome e la stessa firma e contrassegnando la dichiarazione con il modificatore `Overrides`.  
  
 **ID errore:** BC30307  
  
### Per correggere l'errore  
  
-   Verificare che i due metodi abbiano la stessa firma.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)   
 [NOT IN BUILD: Modificatori di override](http://msdn.microsoft.com/it-it/18e8ef02-e79b-470e-837a-46a8f4163d32)