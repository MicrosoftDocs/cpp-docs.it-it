---
title: "Conversioni da altri tipi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipo (cast), conversione"
  - "valori, conversione"
ms.assetid: 30fbd974-8f5a-4b70-ac44-d3937b96b702
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Conversioni da altri tipi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Poiché un valore `enum` è un valore `int` per definizione, le conversioni da e verso un valore `enum` corrispondono a quelle per il tipo `int`.  Per il compilatore C Microsoft, un numero intero è uguale a **long**.  
  
 **Sezione specifica Microsoft**  
  
 Non è consentita alcuna conversione tra la struttura o i tipi di unione.  
  
 Tutti i valori possono essere convertiti nel tipo `void`, ma il risultato di tale conversione può essere utilizzato solo in un contesto in cui un valore di espressione viene ignorato, come in un'istruzione di espressione.  
  
 Il tipo `void` non ha valore, per definizione.  Pertanto, non può essere convertirlo in qualsiasi altro tipo e altri tipi non possono essere convertiti in `void` per assegnazione.  Tuttavia, è possibile eseguire esplicitamente il cast di un valore nel tipo `void`, come illustrato in [Conversioni del cast di tipo](../c-language/type-cast-conversions.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Conversioni di assegnazione](../c-language/assignment-conversions.md)