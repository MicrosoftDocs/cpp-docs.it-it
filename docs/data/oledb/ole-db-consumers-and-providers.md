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
ms.openlocfilehash: d57ded9d084971c3562fc7f22e6a1a12a4e3368d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210078"
---
# <a name="ole-db-consumers-and-providers"></a>Consumer e provider OLE DB

L'architettura OLE DB utilizza il modello di consumer e provider. Un consumer effettua richieste di dati. Un provider risponde a queste richieste inserendo i dati in formato tabulare e restituendo il valore al consumer. Qualsiasi chiamata che il consumer può effettuare deve essere implementata nel provider.

Tecnicamente definito, un consumatore è un codice di sistema o di applicazione (non necessariamente un componente OLE DB) che accede ai dati tramite OLE DB interfacce. Le interfacce sono implementate in un provider. Un provider è quindi un componente software che implementa interfacce di OLE DB per incapsulare l'accesso ai dati ed esporlo ad altri oggetti, ovvero ai consumer.

Per i ruoli, un consumer chiama i metodi sulle interfacce OLE DB; un provider OLE DB implementa le interfacce OLE DB necessarie.

OLE DB evita i termini client e server perché questi ruoli non hanno sempre senso, soprattutto in una situazione a più livelli. Poiché un consumer può essere un componente di un livello che funge da altro componente, per chiamarlo un componente client potrebbe creare confusione. Inoltre, un provider a volte agisce in modo più simile a un driver di database rispetto a un server.

## <a name="see-also"></a>Vedere anche

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)
