---
title: Cenni preliminari sulla programmazione con OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- Universal Data Access
- OLE DB, about OLE DB
ms.assetid: a5a69730-2793-4277-a67d-6f3c8edab6df
ms.openlocfilehash: d19e98d7c5743207dba224214b0d9a0e9f308e81
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50608930"
---
# <a name="ole-db-programming-overview"></a>Cenni preliminari sulla programmazione con OLE DB

OLE DB è una tecnologia di database a prestazioni elevate, basato su COM. Fornisce un modo comune per accedere ai dati indipendentemente dal formato in cui viene archiviato. In una situazione aziendale tipico, una grande quantità di informazioni non vengono archiviate nel database aziendali. Queste informazioni sono state trovate nel file System (ad esempio System FAT che NTFS), file sequenziali-indicizzate, il database persona (ad esempio l'accesso), fogli di calcolo (ad esempio Excel), applicazioni per la pianificazione di progetto (ad esempio progetto) e tramite posta elettronica (ad esempio Outlook). OLE DB consente di accedere a qualsiasi tipo di archivio dati nello stesso modo, purché l'archivio dati dispone di un provider OLE DB.

OLE DB consente di sviluppare applicazioni che accedono a diverse origini dati, sia che si DBMS o No. OLE DB rende possibile l'accesso universale tramite interfacce COM che supportano la funzionalità DBMS appropriata per una determinata origine dati. COM consente di ridurre la duplicazione non necessaria dei servizi e ottimizzando l'interoperabilità non solo tra le origini dati, ma anche tra le altre applicazioni.

## <a name="benefits-of-com"></a>Vantaggi di COM

Si tratta di COM entra in gioco. OLE DB è un set di interfacce COM. Per l'accesso ai dati tramite un set uniforme di interfacce, è possibile organizzare un database in una matrice dei componenti interoperativi.

Basati sulla specifica COM, OLE DB definisce un insieme di estendibile e facile da gestire delle interfacce che forniscono e includono parti riutilizzabili di funzionalità DBMS. Queste interfacce definiscono i limiti dei componenti DBMS, ad esempio i contenitori di riga, processori di query e i coordinatori della transazione, che consentono accesso transazionale uniforme per diverse origini di informazioni.

## <a name="see-also"></a>Vedere anche

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Modelli OLE DB](../../data/oledb/ole-db-templates.md)