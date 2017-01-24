---
title: "&#200; possibile tipizzare le variabili &#39;WithEvents&#39; solo come classi, interfacce o parametri di tipo con vincoli di classe | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30413"
  - "bc30413"
helpviewer_keywords: 
  - "BC30413"
ms.assetid: 11ddf207-2760-425f-b4c2-bb9fe6da36ea
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; possibile tipizzare le variabili &#39;WithEvents&#39; solo come classi, interfacce o parametri di tipo con vincoli di classe
È stata dichiarata una variabile tipizzata come una struttura in combinazione con `WithEvents` e questa operazione non costituisce un uso valido del modificatore `WithEvents`.  
  
 **ID errore:** BC30413  
  
### Per correggere l'errore  
  
1.  Usare `AddHandler` per gestire gli eventi definiti in una struttura.  
  
## Vedere anche  
 [NOT IN BUILD: WithEvents e clausola Handles](http://msdn.microsoft.com/it-it/072b9cf6-6298-46f1-849e-4edc1631564c)   
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [AddHandler Statement](../Topic/AddHandler%20Statement.md)