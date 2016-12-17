---
title: "Risoluzione dei problemi relativi alle eccezioni: Microsoft.VisualBasic.ApplicationServices.CantStartSingleInstanceException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "CantStartSingleInstanceException (eccezione)"
  - "Microsoft.VisualBasic.ApplicationServices.CantStartSingleInstanceException (eccezione)"
ms.assetid: 3639f15d-9547-43da-8145-60da34782991
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: Microsoft.VisualBasic.ApplicationServices.CantStartSingleInstanceException
Eccezione generata quando la seconda istanza di un'applicazione a istanza singola non riesce a connettersi all'istanza originale.  
  
## Note  
 Alcune possibili cause di questo problema sono:  
  
-   L'istanza originale attualmente non risponde.  
  
-   L'applicazione non dispone di autorizzazioni per la creazione di oggetti del kernel.  
  
     Il nome base degli oggetti del kernel deriva dalla concatenazione del GUID dell'assembly, del numero di versione principale e del numero di versione secondario. Ad esempio, il nome base può essere 3639f15d\-9547\-43da\-8145\-60da347829915.1.  
  
## Vedere anche  
 <xref:Microsoft.VisualBasic.ApplicationServices.CantStartSingleInstanceException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)