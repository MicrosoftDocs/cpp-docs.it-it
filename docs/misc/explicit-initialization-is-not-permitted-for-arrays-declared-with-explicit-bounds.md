---
title: "Inizializzazione esplicita non consentita per matrici dichiarate con limiti espliciti | Microsoft Docs"
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
  - "bc30672"
  - "vbc30672"
helpviewer_keywords: 
  - "BC30672"
ms.assetid: 4b525e8d-bde5-4408-8c10-7605ca039f0e
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Inizializzazione esplicita non consentita per matrici dichiarate con limiti espliciti
Non è possibile inizializzare le matrici se vengono dichiarate con dimensioni specifiche.  
  
 **ID errore:** BC30672  
  
### Per correggere l'errore  
  
-   Dichiarare la matrice e quindi inizializzarla separatamente.  
  
-   Dichiarare e inizializzare come matrice dinamica e usare `ReDim` se necessario, ad esempio:  
  
    ```  
    Dim A() As Integer = {0, 1, 2, 3} ReDim Preserve A(3)  
    ```  
  
## Vedere anche  
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)