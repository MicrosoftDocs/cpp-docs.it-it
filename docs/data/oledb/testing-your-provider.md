---
description: 'Altre informazioni su: test del provider'
title: Test del provider
ms.date: 10/29/2018
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- OLE DB providers, testing
ms.assetid: bf824fe4-81af-4ffb-beb3-4fa2928dc450
ms.openlocfilehash: de9ba1b6cb66df8041cc6a94f357d52fc2194553
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272656"
---
# <a name="testing-your-provider"></a>Test del provider

Prima di rilasciare un provider, è necessario eseguire i test seguenti nell'ordine indicato. Questi test indicano che il provider funziona correttamente per la maggior parte dei potenziali utenti.

1. Testare il provider usando un'applicazione [consumer](../../data/oledb/creating-an-ole-db-consumer.md) scritta con i modelli di consumer OLE DB. Il consumer di test deve coprire tutte le aree funzionali del provider (tutto il codice aggiunto o modificato).

1. Testare il provider utilizzando un'applicazione consumer scritta con ADO. La maggior parte degli sviluppatori (soprattutto Microsoft Visual Basic e sviluppatori Microsoft C#) USA ADO o ADO.NET per le applicazioni consumer. Il consumer di test dovrebbe coprire tutte le aree funzionali del provider. Per un esempio di applicazione ADO consumer, vedere [esempi di codice ADO in Microsoft Visual Basic](/previous-versions/ms807514(v=msdn.10)).

1. Eseguire i test di conformità OLE DB (inclusi i test di conformità ADO) per indicare che il provider soddisfa lo standard di livello 0 per i provider di OLE DB. Per una spiegazione del livello 0, cercare **OLE DB test di conformità di livello 0** in [OLE DB Guida per i programmatori](/sql/connect/oledb/ole-db/oledb-driver-for-sql-server-programming). Questi test e la documentazione associata sono inclusi con Visual C++ in Data Access SDK. Questi test consentono inoltre di dimostrare che il provider viene eseguito correttamente quando viene aggregato da altri [provider di servizi](../../data/oledb/ole-db-resource-pooling-and-services.md) e risulta particolarmente utile se si modificano o si aggiungono le proprietà. Per ulteriori informazioni sui test di conformità, vedere il file Leggimi relativo a Data Access SDK, disponibile su uno dei CD di Visual Studio.

## <a name="see-also"></a>Vedi anche

[Uso dei modelli di provider di OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
