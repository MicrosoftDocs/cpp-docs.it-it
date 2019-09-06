---
title: Test del provider
ms.date: 10/29/2018
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- OLE DB providers, testing
ms.assetid: bf824fe4-81af-4ffb-beb3-4fa2928dc450
ms.openlocfilehash: 722757b93d3423b02340c382b16e08a31626bc01
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "70311906"
---
# <a name="testing-your-provider"></a>Test del provider

Prima di rilasciare un provider, è necessario eseguire i test seguenti nell'ordine indicato. Questi test indicano che il provider funziona correttamente per la maggior parte dei potenziali utenti.

1. Testare il provider usando un'applicazione [consumer](../../data/oledb/creating-an-ole-db-consumer.md) scritta con i modelli di consumer OLE DB. Il consumer di test deve coprire tutte le aree funzionali del provider (tutto il codice aggiunto o modificato).

1. Testare il provider utilizzando un'applicazione consumer scritta con ADO. La maggior parte degli sviluppatori (soprattutto Microsoft C# Visual Basic e sviluppatori Microsoft) USA ADO o ADO.NET per le applicazioni consumer. Il consumer di test dovrebbe coprire tutte le aree funzionali del provider. Per un esempio di applicazione ADO consumer, vedere [esempi di codice ADO in Microsoft Visual Basic](/previous-versions/ms807514(v=msdn.10)).

1. Eseguire i test di conformità OLE DB (inclusi i test di conformità ADO) per indicare che il provider soddisfa lo standard di livello 0 per i provider di OLE DB. Per una spiegazione del livello 0, cercare **OLE DB test di conformità di livello 0** in [OLE DB Guida per i programmatori](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming). Questi test e la documentazione associata sono inclusi con C++ Visual nell'SDK di accesso ai dati. Questi test consentono inoltre di dimostrare che il provider viene eseguito correttamente quando viene aggregato da altri [provider di servizi](../../data/oledb/ole-db-resource-pooling-and-services.md) e risulta particolarmente utile se si modificano o si aggiungono le proprietà. Per ulteriori informazioni sui test di conformità, vedere il file Leggimi relativo a Data Access SDK, disponibile su uno dei CD di Visual Studio.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)