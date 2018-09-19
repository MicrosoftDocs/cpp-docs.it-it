---
title: I consumer OLE DB e provider | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, OLE DB data architecture
- OLE DB providers
- OLE DB consumers, OLE DB data architecture
- OLE DB consumers
- OLE DB, data model
ms.assetid: 886cb39d-652b-4557-93f0-4b1b0754d8bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b37a06ec89f0e2e21c4332a480e58c605f0d161f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46110718"
---
# <a name="ole-db-consumers-and-providers"></a>Consumer e provider OLE DB

L'architettura OLE DB Usa il modello di consumer e provider. Un consumer effettua le richieste di dati. Un provider di risponde alle richieste seguenti inserendo i dati in un formato tabulare e restituirlo al consumer. Qualsiasi chiamata che può rendere il consumer deve essere implementata nel provider.  
  
In termini tecnici, un consumer è un sistema o applicazione codice (non necessariamente un componente di OLE DB) che accede ai dati tramite le interfacce OLE DB. Le interfacce vengono implementate in un provider. Di conseguenza, un provider è qualsiasi componente software che implementa le interfacce OLE DB per incapsulare l'accesso ai dati e come esporlo ad altri oggetti (ovvero, i consumer).  
  
In termini di ruoli, un consumer chiama metodi su interfacce OLE DB. un provider OLE DB implementa le interfacce OLE DB necessarie.  
  
OLE DB consente di evitare condizioni client e server poiché questi ruoli non sempre hanno senso, soprattutto in una situazione a più livelli. Poiché un consumer può essere un componente in un livello che viene usato un altro componente, per la chiamata di un client componente potrebbe creare confusione. Inoltre, un provider talvolta funge più da un driver di database rispetto a un server.  
  
## <a name="see-also"></a>Vedere anche  

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)