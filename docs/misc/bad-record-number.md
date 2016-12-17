---
title: "Numero di record non valido | Microsoft Docs"
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
  - "vbrID63"
ms.assetid: 1fcc33f8-822a-4de9-a6e3-228ddb5824a6
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Numero di record non valido
Il numero di record nell'istruzione `a FileGet`, `FilePut`, `FileGetObject` o `FilePutObject` è minore o uguale a zero.  
  
### Per correggere l'errore  
  
1.  Controllare i calcoli usati per generare il numero di record. Controllare l'ortografia delle variabili che contengono il numero di record o usati per calcolare i numeri di record. Un nome di variabile contenente errori di ortografia è dichiarato in modo implicito e inizializzato su zero, a meno che non sia stato usato `Option Explicit On` nel modulo.  
  
## Vedere anche  
 [Option Explicit Statement](../Topic/Option%20Explicit%20Statement%20\(Visual%20Basic\).md)