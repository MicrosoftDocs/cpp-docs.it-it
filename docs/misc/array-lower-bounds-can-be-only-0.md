---
title: "I limiti inferiori della matrice possono essere solo &#39;0&#39; | Microsoft Docs"
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
  - "bc32059"
  - "vbc32059"
helpviewer_keywords: 
  - "BC32059"
ms.assetid: 273b69df-910e-45d2-acac-632005d24c5a
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I limiti inferiori della matrice possono essere solo &#39;0&#39;
Un'istruzione di dichiarazione o una clausola `New` specifica una matrice con un limite inferiore diverso da 0.  
  
 Quando si crea o si inizializza una variabile di matrice, è possibile specificare facoltativamente il limite superiore di ciascuna dimensione. In questo caso, la lunghezza di quella dimensione diventa il limite superiore maggiorato di uno, perché il limite inferiore è sempre zero. Facoltativamente è possibile indicare anche il limite inferiore, ma è necessario specificare 0. Il vantaggio, in questo caso, risiede in una più agevole lettura del codice.  
  
 **ID errore:** BC32059  
  
### Per correggere l'errore  
  
-   Modificare l'impostazione del limite inferiore su 0 o rimuoverla completamente.  
  
## Vedere anche  
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)   
 [NOTINBUILD Procedura: Specificare un limite inferiore pari a zero in una matrice](http://msdn.microsoft.com/it-it/20ffd49a-64f7-4634-8ed0-46ba1049d935)