---
title: "&#39;End Get&#39; deve essere preceduto da un oggetto &#39;Get&#39; corrispondente | Microsoft Docs"
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
  - "bc30630"
  - "vbc30630"
helpviewer_keywords: 
  - "BC30630"
ms.assetid: d858076a-9088-4ad0-9766-95029476bf9b
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Get&#39; deve essere preceduto da un oggetto &#39;Get&#39; corrispondente
`End Get` viene usato per terminare le routine della proprietà `Get`. Il costrutto `End Get` è stato rilevato all'esterno di una routine della proprietà `Get`.  
  
 **ID errore:** BC30630  
  
### Per correggere l'errore  
  
1.  Verificare che la routine della proprietà `Get` venga dichiarata dopo una parola chiave `Property` e prima del costrutto `End Property`.  
  
2.  Verificare che la routine della proprietà `Get` inizi dopo una parola chiave `Get` e termini con il costrutto `End Get`.  
  
## Vedere anche  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Property Changes in Visual Basic](http://msdn.microsoft.com/it-it/1c138efa-9bc2-44d7-80a0-f3a7c2510264)