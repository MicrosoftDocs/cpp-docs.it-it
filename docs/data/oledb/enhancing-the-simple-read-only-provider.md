---
title: "Miglioramento di un provider semplice in sola lettura | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetLocate (classe)"
  - "IRowsetLocate (classe), aggiunta a provider di modelli OLE DB"
  - "provider in sola lettura [C++]"
  - "provider in sola lettura semplici [C++]"
ms.assetid: cba0e09f-44c1-41c1-9456-332aa13dc158
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Miglioramento di un provider semplice in sola lettura
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questa sezione viene illustrato come migliorare il [provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) creato nella sezione precedente.  L'interfaccia `IRowsetLocateImpl` crea un'implementazione per l'interfaccia `IRowsetLocate` e aggiunge il supporto dei segnalibri.  
  
 Quando si dispone di un provider funzionante, è possibile migliorarne le funzionalità per eseguire aggiornamenti, migliorare le prestazioni dell'algoritmo per il recupero delle righe o gestire transazioni.  La maggior parte dei miglioramenti apportati ai provider comporta l'aggiunta di un'interfaccia a un oggetto COM esistente.  
  
 Nell'esempio illustrato negli argomenti che seguono viene migliorato il meccanismo di recupero delle righe tramite l'aggiunta dell'interfaccia `IRowsetLocate` a `CAgentRowset`.  Negli argomenti trattati è illustrato come eseguire le seguenti operazioni:  
  
-   [Modifica dell'ereditarietà di RMyProviderRowset](../../data/oledb/modifying-the-inheritance-of-rmyproviderrowset.md)  
  
-   [Determinazione dinamica delle colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md)  
  
## Vedere anche  
 [Creazione di un provider semplice in sola lettura](../../data/oledb/creating-a-simple-read-only-provider.md)