---
description: 'Altre informazioni su: OLE DB consumer e provider'
title: Consumer e provider OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- OLE DB providers, OLE DB data architecture
- OLE DB providers
- OLE DB consumers, OLE DB data architecture
- OLE DB consumers
- OLE DB, data model
ms.assetid: 886cb39d-652b-4557-93f0-4b1b0754d8bc
ms.openlocfilehash: dedcbe7837cf7fad5bc9db8832e34edd3859a02b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317142"
---
# <a name="ole-db-consumers-and-providers"></a>Consumer e provider OLE DB

L'architettura OLE DB utilizza il modello di consumer e provider. Un consumer effettua richieste di dati. Un provider risponde a queste richieste inserendo i dati in formato tabulare e restituendo il valore al consumer. Qualsiasi chiamata che il consumer può effettuare deve essere implementata nel provider.

Tecnicamente definito, un consumatore è un codice di sistema o di applicazione (non necessariamente un componente OLE DB) che accede ai dati tramite OLE DB interfacce. Le interfacce sono implementate in un provider. Un provider è quindi un componente software che implementa interfacce di OLE DB per incapsulare l'accesso ai dati ed esporlo ad altri oggetti, ovvero ai consumer.

Per i ruoli, un consumer chiama i metodi sulle interfacce OLE DB; un provider OLE DB implementa le interfacce OLE DB necessarie.

OLE DB evita i termini client e server perché questi ruoli non hanno sempre senso, soprattutto in una situazione a più livelli. Poiché un consumer può essere un componente di un livello che funge da altro componente, per chiamarlo un componente client potrebbe creare confusione. Inoltre, un provider a volte agisce in modo più simile a un driver di database rispetto a un server.

## <a name="see-also"></a>Vedi anche

[Programmazione OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione OLE DB](../../data/oledb/ole-db-programming-overview.md)
