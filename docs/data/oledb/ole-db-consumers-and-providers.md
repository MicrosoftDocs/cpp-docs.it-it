---
title: I consumer OLE DB e provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OLE DB providers, OLE DB data architecture
- OLE DB providers
- OLE DB consumers, OLE DB data architecture
- OLE DB consumers
- OLE DB, data model
ms.assetid: 886cb39d-652b-4557-93f0-4b1b0754d8bc
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4f0a0ee77b13d6e5231d002cb444ac5a7847f3d6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ole-db-consumers-and-providers"></a>Consumer e provider OLE DB
L'architettura OLE DB utilizza il modello di consumer e provider. Un consumer effettua le richieste di dati. Un provider risponde alle richieste seguenti, inserire i dati in un formato tabulare e restituirlo al consumer. Qualsiasi chiamata che rendono il consumer deve essere implementata nel provider.  
  
 Tecnicamente, un consumer è qualsiasi applicazione o del sistema codice (non necessariamente un componente di OLE DB) che accede ai dati tramite interfacce OLE DB. Le interfacce vengono implementate in un provider. Di conseguenza, un provider è un componente software che implementa le interfacce OLE DB per incapsulare l'accesso ai dati e come esporlo ad altri oggetti (vale a dire privati).  
  
 In termini di ruoli, un consumer chiama i metodi su interfacce OLE DB. un provider OLE DB implementa le interfacce OLE DB necessarie.  
  
 OLE DB consente di evitare condizioni client e server perché questi ruoli non sempre superflua, in particolare in una situazione a più livelli. Poiché un consumer può essere un componente in un livello che viene utilizzato da un altro componente, per chiamare un client componente potrebbe essere poco chiare. Inoltre, un provider talvolta funge da più driver di database rispetto a un server.  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)   
 [Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)