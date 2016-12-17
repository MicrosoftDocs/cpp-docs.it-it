---
title: "&#39;End Set&#39; deve essere preceduto da un &#39;Set&#39; corrispondente | Microsoft Docs"
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
  - "bc30632"
  - "vbc30632"
helpviewer_keywords: 
  - "BC30632"
ms.assetid: 0c3dd065-566b-485c-9996-6177eb0fde39
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Set&#39; deve essere preceduto da un &#39;Set&#39; corrispondente
`End Set` viene usato per terminare le routine della proprietà `Set`. Il costrutto `End Set` è stato rilevato all'esterno di una routine della proprietà `Set`.  
  
 **ID errore:** BC30632  
  
### Per correggere l'errore  
  
1.  Verificare che la routine della proprietà `Set` venga dichiarata dopo una parola chiave `Property` e prima del costrutto `End Property`.  
  
2.  Verificare che la routine della proprietà `Set` inizi dopo una parola chiave `Set` e termini con un costrutto `End Set`.  
  
## Vedere anche  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Property Changes in Visual Basic](http://msdn.microsoft.com/it-it/1c138efa-9bc2-44d7-80a0-f3a7c2510264)