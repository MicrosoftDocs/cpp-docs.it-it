---
title: "Get, Let e Set non sono pi&#249; supportati per le propriet&#224;. Utilizzare la nuova sintassi di dichiarazione delle propriet&#224; | Microsoft Docs"
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
  - "vbc30808"
  - "bc30808"
helpviewer_keywords: 
  - "BC30808"
ms.assetid: c8a803eb-316d-4f73-b6ef-27a2914409f3
caps.latest.revision: 10
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Get, Let e Set non sono pi&#249; supportati per le propriet&#224;. Utilizzare la nuova sintassi di dichiarazione delle propriet&#224;
`Property Get/Let/Set` non sono più supportati. Usare la nuova sintassi di dichiarazione `Property`.  
  
 La sintassi per la dichiarazione delle proprietà è stata modificata. Le proprietà ora vengono definite all'interno di blocchi.  
  
 **ID errore:** BC30808  
  
### Per correggere l'errore  
  
1.  Definire le proprietà in blocchi di codice che iniziano con la parola chiave `Property`. Terminare le proprietà con il costrutto `End Property`.  
  
2.  Definire le routine della proprietà `Get` all'interno di blocchi di proprietà con la parola chiave `Get`. Terminare le routine `Get` della proprietà con il costrutto `End Get`.  
  
3.  Definire le routine `Set` della proprietà all'interno di blocchi di proprietà con la parola chiave `Set`. Terminare le routine `Set` della proprietà con il costrutto `End Set`.  
  
4.  Usare le routine `Set` della proprietà per tutte le assegnazioni di proprietà. Le routine `Let` della proprietà non sono più necessarie né supportate.  
  
## Vedere anche  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Language Changes in Visual Basic](http://msdn.microsoft.com/it-it/a1be4461-a0e4-4a88-a32c-dcad41ed119a)