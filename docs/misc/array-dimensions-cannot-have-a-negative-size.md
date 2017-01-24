---
title: "Le dimensioni di una matrice non possono essere negative | Microsoft Docs"
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
  - "bc30611"
  - "vbc30611"
helpviewer_keywords: 
  - "BC30611"
ms.assetid: e310bd0d-f221-4b02-87f3-02124f4de87c
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le dimensioni di una matrice non possono essere negative
Uno o più limiti della matrice specificati corrispondono a un numero negativo. È possibile specificare un indice negativo solo quando si usa un limite superiore di \-1 per dichiarare una matrice vuota. Una matrice di questo tipo ha zero elementi, ma non è `Nothing`.  
  
 **ID errore:** BC30611  
  
### Per correggere l'errore  
  
-   Sostituire il limite di matrice negativo con un numero positivo.  
  
## Vedere anche  
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)