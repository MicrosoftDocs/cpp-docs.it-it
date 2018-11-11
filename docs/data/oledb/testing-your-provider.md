---
title: Test del provider
ms.date: 10/29/2018
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- OLE DB providers, testing
ms.assetid: bf824fe4-81af-4ffb-beb3-4fa2928dc450
ms.openlocfilehash: 42186d789c1b85c359b9e3e30883929a6c71ab33
ms.sourcegitcommit: 943c792fdabf01c98c31465f23949a829eab9aad
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/07/2018
ms.locfileid: "51265113"
---
# <a name="testing-your-provider"></a>Test del provider

Prima di rilasciare un provider, è necessario eseguire i test seguenti, nell'ordine indicato. Questi test mostrano che le funzioni di provider correttamente per la maggior parte degli utenti potenziali.

1. Testare il provider usando un [consumatore](../../data/oledb/creating-an-ole-db-consumer.md) applicazione scritta con i modelli consumer OLE DB. Il consumer di test dovrebbe coprire tutte le aree funzionali del provider (tutto il codice che è stato aggiunto o modificato).

1. Testare il provider usando un'applicazione consumer scritta con ADO. La maggior parte degli sviluppatori (soprattutto agli sviluppatori di Microsoft Visual Basic e c# Microsoft) utilizzano ADO o ADO.NET per le applicazioni consumer. Il consumer di test dovrebbe coprire tutte le aree funzionali del provider. Per un esempio di un'applicazione consumer di ADO, vedere [esempi di codice ADO in Microsoft Visual Basic](https://msdn.microsoft.com/library/ms807514.aspx).

1. Eseguire i test di conformità OLE DB (inclusi i test della conformità ADO) per mostrare che il provider soddisfi il livello 0 standard per i provider OLE DB. (Per una spiegazione del livello 0, cercare **test di conformità OLE DB a livello 0** alla [Guida per programmatori OLE DB](/previous-versions/windows/desktop/ms713643). Questi test e la relativa documentazione sono inclusi in Visual C++ in Data Access SDK. Questi test è utile anche per mostrare che il provider venga eseguito anche quando sono aggregati da altre [provider di servizi](../../data/oledb/ole-db-resource-pooling-and-services.md) e sono particolarmente utili se si modificano o si aggiungono le proprietà. Per altre informazioni sui test di conformità, vedere il file Leggimi per il Data Access SDK, che si trova in uno dei CD di Visual Studio.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)