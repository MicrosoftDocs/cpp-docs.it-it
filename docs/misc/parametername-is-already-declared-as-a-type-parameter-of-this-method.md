---
title: "&#39;&lt;nomeparametro&gt;&#39; &#232; gi&#224; dichiarato come parametro di tipo di questo metodo | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32089"
  - "vbc32089"
helpviewer_keywords: 
  - "BC32089"
ms.assetid: 5e440b4b-f62b-4ff5-9148-2372d4752bf6
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeparametro&gt;&#39; &#232; gi&#224; dichiarato come parametro di tipo di questo metodo
Una routine generica definisce un parametro normale o una variabile locale con lo stesso nome di un parametro di tipo.  
  
 Ogni parametro di una routine, inclusi tutti i parametri di tipo di una routine generica, deve avere un nome diverso da quello di tutti gli altri parametri. Poiché i parametri di routine vengono usati come variabili locali, qualsiasi variabile locale dichiarata all'interno della routine deve avere anch'essa un nome diverso da quello di tutti i parametri e parametri di tipo.  
  
 **ID errore:** BC32089  
  
### Per correggere l'errore  
  
-   Cambiare il nome del parametro normale o della variabile locale.  
  
## Vedere anche  
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Parameter List](../Topic/Parameter%20List%20\(Visual%20Basic\).md)