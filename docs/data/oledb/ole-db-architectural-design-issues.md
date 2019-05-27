---
title: Problemi di progettazione dell'architettura OLE DB
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB, application design considerations
ms.assetid: 8caa7d99-d2bb-42c9-8884-74f228bb6ecc
ms.openlocfilehash: ef2837ea80c61f074cf567ee1fe61fa2cfa0ae73
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65525311"
---
# <a name="ole-db-architectural-design-issues"></a>Problemi di progettazione dell'architettura OLE DB

> [!NOTE]
> La Creazione guidata consumer OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente. Per altre informazioni, vedere [Creazione di un consumer senza utilizzare una procedura guidata](creating-a-consumer-without-using-a-wizard.md).

Prendere in considerazione gli aspetti seguenti prima di iniziare a creare un'applicazione OLE DB:

## <a name="what-programming-implementation-will-you-use-to-write-your-ole-db-application"></a>Quale implementazione di programmazione si userà per scrivere l'applicazione OLE DB?

Microsoft offre diverse librerie per eseguire questa attività: una libreria di modelli OLE DB, attributi OLE DB e le interfacce OLE DB raw in OLE DB SDK. Sono inoltre disponibili procedure guidate che offrono supporto nella scrittura del programma. Queste implementazioni sono descritte in [Modelli, attributi e altre implementazioni OLE DB](../../data/oledb/ole-db-templates-attributes-and-other-implementations.md).

## <a name="do-you-need-to-write-your-own-provider"></a>È necessario scrivere un provider personalizzato?

Per la maggior parte degli sviluppatori non è necessario scrivere un provider personalizzato. Microsoft offre diversi provider. Quando si crea una connessione dati (ad esempio, quando si aggiunge un consumer al progetto usando la **Creazione guidata consumer OLE DB ATL**), nella finestra di dialogo **Proprietà di Data Link** sono elencati tutti i provider disponibili registrati nel sistema. Se uno dei provider è appropriato per l'applicazione di archivio dati e accesso ai dati, la cosa più facile è scegliere tra tali provider. Se tuttavia l'archivio dati non si rientra in queste categorie, è necessario creare un provider personalizzato. Per informazioni sulla creazione di provider, vedere [Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md).

## <a name="what-level-of-support-do-you-need-for-your-consumer"></a>Quale livello di supporto è necessario per il consumer?

Alcuni consumer possono essere più semplici e altri più complessi. La funzionalità degli oggetti OLE DB è specificata dalle proprietà. Quando si usa la **Creazione guidata consumer OLE DB ATL** per creare un consumer o la **Creazione guidata provider di database** per creare un provider, vengono impostate le proprietà degli oggetti appropriate per fornire un set standard di funzionalità. Se tuttavia le classi del provider o del consumer che la procedura guidata ha generato non supportano tutte le funzionalità richieste, è necessario fare riferimento alle interfacce per tali classi nella [libreria di modelli OLE DB](../../data/oledb/ole-db-templates.md). Queste interfacce eseguono il wrapping delle interfacce OLE DB raw, fornendo un'implementazione aggiuntiva per semplificarne l'uso.

Se, ad esempio, se vuole aggiornare i dati in un set di righe, ma si è dimenticato di specificarlo al momento della creazione del consumer con la procedura guidata, è possibile specificare le funzionalità successivamente impostando le proprietà `DBPROP_IRowsetChange` e `DBPROP_UPDATABILITY` nell'oggetto comando. Quando il set di righe viene creato, ha quindi l'interfaccia `IRowsetChange`.

## <a name="do-you-have-older-code-using-another-data-access-technology-ado-odbc-or-dao"></a>Si ha codice precedente in cui viene usata un'altra tecnologia di accesso ai dati (ADO, ODBC o DAO)?

Considerate tutte le possibili combinazioni di tecnologie (ad esempio l'uso di componenti ADO con componenti OLE DB e la migrazione di codice ODBC a OLE DB), l'esame di tutti gli scenari non rientra nell'ambito della documentazione di Visual C++. Nei siti Web Microsoft seguenti sono tuttavia disponibili numerosi articoli che trattano diversi scenari:

- [Guida e supporto tecnico Microsoft](https://support.microsoft.com/)

- [Microsoft Data Access Technical Articles Overview](https://msdn.microsoft.com/library/ms810811.aspx) (Panoramica di articoli tecnici su Microsoft Data Access Components)

## <a name="see-also"></a>Vedere anche

[Programmazione con OLE DB](../../data/oledb/ole-db-programming.md)<br/>
[Panoramica della programmazione con OLE DB](../../data/oledb/ole-db-programming-overview.md)
