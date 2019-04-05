---
title: Consumer e provider OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- OLE DB providers, OLE DB data architecture
- OLE DB providers
- OLE DB consumers, OLE DB data architecture
- OLE DB consumers
- OLE DB, data model
ms.assetid: 886cb39d-652b-4557-93f0-4b1b0754d8bc
ms.openlocfilehash: f5940ca65e42787c3156a9537cb3f3f6694339c0
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031313"
---
# <a name="ole-db-consumers-and-providers"></a>Consumer e provider OLE DB

L'architettura OLE DB Usa il modello di consumer e provider. Un consumer effettua le richieste di dati. Un provider di risponde alle richieste seguenti inserendo i dati in un formato tabulare e restituirlo al consumer. Qualsiasi chiamata che può rendere il consumer deve essere implementata nel provider.

In termini tecnici, un consumer è un sistema o applicazione codice (non necessariamente un componente di OLE DB) che accede ai dati tramite le interfacce OLE DB. Le interfacce vengono implementate in un provider. Pertanto, un provider è qualsiasi componente software che implementa le interfacce OLE DB per incapsulare l'accesso ai dati e come esporlo ad altri oggetti (ovvero, i consumer).

Per i ruoli, un consumer chiama metodi su interfacce OLE DB. un provider OLE DB implementa le interfacce OLE DB necessarie.

OLE DB consente di evitare condizioni client e server poiché questi ruoli non sono sempre utili, soprattutto in una situazione a più livelli. Poiché un consumer può essere un componente in un livello che viene usato un altro componente, per la chiamata di un client componente potrebbe creare confusione. Inoltre, un provider talvolta funge più da un driver di database rispetto a un server.

## <a name="see-also"></a>Vedere anche

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Cenni preliminari sulla programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)