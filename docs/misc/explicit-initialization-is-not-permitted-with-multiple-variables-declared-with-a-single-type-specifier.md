---
title: "Inizializzazione esplicita non consentita con pi&#249; variabili dichiarate con un singolo identificatore di tipo | Microsoft Docs"
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
  - "bc30671"
  - "vbc30671"
helpviewer_keywords: 
  - "BC30671"
ms.assetid: 57bbdd58-b58d-4144-8fa6-366a7167df27
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Inizializzazione esplicita non consentita con pi&#249; variabili dichiarate con un singolo identificatore di tipo
L'inizializzazione non è consentita quando vengono dichiarate più variabili nella stessa riga.  
  
 **ID errore:** BC30671  
  
### Per correggere l'errore  
  
1.  Dichiarare e inizializzare ogni elemento separatamente.  
  
2.  Dichiarare insieme più elementi e quindi inizializzare ogni elemento, ad esempio:  
  
    ```  
    Dim x, b, i As Integer x = 9 : b = 9 : i = 9 ' ":" is the same as a new line.  
    ```  
  
## Vedere anche  
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [Dichiarazione di variabili](../Topic/Variable%20Declaration%20in%20Visual%20Basic.md)