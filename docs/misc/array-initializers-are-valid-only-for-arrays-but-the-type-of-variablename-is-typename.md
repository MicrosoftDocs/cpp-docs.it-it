---
title: "Gli inizializzatori di matrice sono validi solo per le matrici, ma il tipo di &#39;&lt;nomevariabile&gt;&#39; &#232; &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
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
  - "bc30679"
  - "vbc30679"
helpviewer_keywords: 
  - "BC30679"
ms.assetid: 3cf34882-7a58-4074-8ebb-52e58199a506
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli inizializzatori di matrice sono validi solo per le matrici, ma il tipo di &#39;&lt;nomevariabile&gt;&#39; &#232; &#39;&lt;nometipo&gt;&#39;
Si è provato a inizializzare una variabile non di matrice con un elenco di valori.  
  
 **ID errore:** BC30679  
  
### Per correggere l'errore  
  
-   Dichiarare e inizializzare la variabile come una matrice, ad esempio:  
  
     `Dim intarray As Integer() = {1, 5, 9}`  
  
-   Inizializzare la variabile come un singolo valore, ad esempio:  
  
     `Dim intvalue As Integer = 1`  
  
## Vedere anche  
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [Dichiarazione di variabili](../Topic/Variable%20Declaration%20in%20Visual%20Basic.md)   
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)