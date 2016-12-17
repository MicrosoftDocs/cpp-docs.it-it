---
title: "Previsto &#39;In&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc36607"
  - "vbc36607"
helpviewer_keywords: 
  - "BC36607"
ms.assetid: f390bca5-12fe-4fe1-bd86-7f8ab66dfbd8
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Previsto &#39;In&#39;
Una clausola `From` o `Aggregate` è stata specificata senza un operatore `In`. L'operatore `In` viene usato per identificare la raccolta nella query.  
  
 **ID errore:** BC36607  
  
### Per correggere l'errore  
  
1.  Aggiungere l'operatore `In` e i campi chiave alla clausola `From` o `Aggregate`. Di seguito è riportato un esempio:  
  
    ```vb#  
    Dim names = From pers In people Select pers.FirstName, pers.LastName  
    ```  
  
## Vedere anche  
 [From Clause](../Topic/From%20Clause%20\(Visual%20Basic\).md)   
 [Aggregate Clause](../Topic/Aggregate%20Clause%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)