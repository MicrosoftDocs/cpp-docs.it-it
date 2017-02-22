---
title: "Conversione di dati non supportati dal provider | Microsoft Docs"
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
  - "modelli del provider OLE DB, tipi di dati non supportati"
ms.assetid: f495e50f-530a-4fab-ab54-e0c359785845
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Conversione di dati non supportati dal provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando il consumer richiede un tipo di dati non supportato dal provider, all'interno del codice del modello provider OLE DB di `IRowsetImpl::GetData` viene chiamato Msdadc.dll per convertire il tipo di dati.  
  
 Se si implementa un'interfaccia come `IRowsetChange` che richiede la conversione dei dati, sarà possibile chiamare Msdaenum.dll per operare la conversione.  Come esempio utilizzare `GetData`, definito in Atldb.h.  
  
## Vedere anche  
 [Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)