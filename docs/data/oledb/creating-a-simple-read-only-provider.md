---
title: "Creazione di un provider semplice in sola lettura | Microsoft Docs"
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
  - "modelli del provider OLE DB, creazione di provider"
  - "provider OLE DB, creazione"
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Creazione di un provider semplice in sola lettura
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Dopo aver creato un provider OLE DB mediante la Creazione guidata progetto ATL e la Creazione guidata provider OLE DB ATL, è possibile aggiungere ulteriori funzionalità che si desidera supportare.  Come prima operazione per la progettazione del provider, determinare quale tipo di dati saranno inviati al consumer e a quali condizioni.  È particolarmente importante determinare se sia necessario supportare comandi, transazioni e altri oggetti facoltativi.  Un'accurata fase di progettazione iniziale renderà più rapide le fasi di implementazione e test.  
  
 L'esempio è presentato in due parti:  
  
-   Nella prima parte è illustrato come [creare un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) per la lettura di una coppia di stringhe.  
  
-   Nella seconda parte è illustrato come [migliorare il provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md) tramite l'aggiunta dell'interfaccia `IRowsetLocate`.  
  
## Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)