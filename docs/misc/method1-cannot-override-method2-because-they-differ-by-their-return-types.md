---
title: "&#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; i tipi restituiti sono diversi | Microsoft Docs"
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
  - "bc30437"
  - "vbc30437"
helpviewer_keywords: 
  - "BC30437"
ms.assetid: e566ae72-c597-4b33-b70d-5d4ea879d644
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; i tipi restituiti sono diversi
Si è provato a eseguire l'override di un metodo con un altro metodo che si differenzia per il tipo restituito. Un tipo può eseguire l'override di un metodo ereditato sottoponibile a override dichiarando un metodo con lo stesso nome e la stessa firma e contrassegnando la dichiarazione con il modificatore `Overrides`. Le firme dei due metodi devono corrispondere.  
  
 **ID errore:** BC30437  
  
### Per correggere l'errore  
  
-   Controllare i tipi restituiti dei metodi e modificarli in modo che corrispondano.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)