---
title: 'Oggetti dati e origini dati: modifica'
ms.date: 11/04/2016
helpviewer_keywords:
- data objects [MFC], manipulating
- data sources [MFC], data operations
- data sources [MFC], inserting data
- Clipboard [MFC], determining available formats
- OLE [MFC], data objects
- Clipboard [MFC], passing format information
- data sources [MFC], determining available formats
- delayed rendering [MFC]
- OLE [MFC], data sources
ms.assetid: f7f27e77-bb5d-4131-b819-d71bf929ebaf
ms.openlocfilehash: a08b6ff274c73d301c156d65aa56fbecca49128c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370544"
---
# <a name="data-objects-and-data-sources-manipulation"></a>Oggetti dati e origini dati: modifica

Dopo aver creato un oggetto dati o un'origine dati, è possibile eseguire una serie di operazioni comuni sui dati, ad esempio l'inserimento e la rimozione di dati, l'enumerazione dei formati in cui si trova il dati e altro ancora. In questo articolo vengono descritte le tecniche necessarie per completare le operazioni più comuni. Gli argomenti includono:

- [Inserimento di dati in un'origine datiInserting data into a data source](#_core_inserting_data_into_a_data_source)

- [Determinazione dei formati disponibili in un oggetto datiDetermining the formats available in a data object](#_core_determining_the_formats_available_in_a_data_object)

- [Recupero di dati da un oggetto datiRetrieving data from a data object](#_core_retrieving_data_from_a_data_object)

## <a name="inserting-data-into-a-data-source"></a><a name="_core_inserting_data_into_a_data_source"></a>Inserimento di dati in un'origine datiInserting Data into a Data Source

La modalità di inserimento dei dati in un'origine dati dipende dal fatto che i dati vengano forniti immediatamente o su richiesta e dal supporto in cui vengono forniti. Le possibilità sono le seguenti.

### <a name="supplying-data-immediately-immediate-rendering"></a>Fornitura immediata dei dati (rendering immediato)

- Chiamare `COleDataSource::CacheGlobalData` ripetutamente per ogni formato degli Appunti in cui si forniscono i dati. Passare il formato degli Appunti da utilizzare, un handle alla memoria contenente i dati e, facoltativamente, una struttura **FORMATETC** che descrive i dati.

     -oppure-

- Se si desidera lavorare direttamente con le `COleDataSource::CacheData` strutture `COleDataSource::CacheGlobalData` **STGMEDIUM,** chiamare anziché nell'opzione precedente.

### <a name="supplying-data-on-demand-delayed-rendering"></a>Fornitura di dati su richiesta (rendering ritardato)

Questo è un argomento avanzato.

- Chiamare `COleDataSource::DelayRenderData` ripetutamente per ogni formato degli Appunti in cui si forniscono i dati. Passare il formato degli Appunti da utilizzare e, facoltativamente, una struttura **FORMATETC** che descrive i dati. Quando vengono richiesti i dati, `COleDataSource::OnRenderData`il framework chiamerà , di cui è necessario eseguire l'override.

     -oppure-

- Se si `CFile` utilizza un oggetto per `COleDataSource::DelayRenderFileData` fornire `COleDataSource::DelayRenderData` i dati, chiamare anziché nell'opzione precedente. Quando vengono richiesti i dati, `COleDataSource::OnRenderFileData`il framework chiamerà , di cui è necessario eseguire l'override.

## <a name="determining-the-formats-available-in-a-data-object"></a><a name="_core_determining_the_formats_available_in_a_data_object"></a>Determinazione dei formati disponibili in un oggetto datiDetermining the Formats Available in a Data Object

Prima che un'applicazione consente all'utente di incollare i dati in esso, è necessario sapere se sono presenti formati negli Appunti che è possibile gestire. A tale scopo, l'applicazione deve eseguire le operazioni seguenti:To do this, your application should do the following:

1. Creare `COleDataObject` un oggetto e una struttura **FORMATETC.**

1. Chiamare la funzione `AttachClipboard` membro dell'oggetto dati per associare l'oggetto dati ai dati negli Appunti.

1. Eseguire una delle operazioni seguenti:

   - Chiamare la funzione `IsDataAvailable` membro dell'oggetto dati se sono necessari solo uno o due formati. Ciò consente di risparmiare tempo nei casi in cui i dati negli Appunti supportano molti più formati rispetto all'applicazione.

     \-oppure-

   - Chiamare la funzione `BeginEnumFormats` membro dell'oggetto dati per avviare l'enumerazione dei formati disponibili negli Appunti. Chiamare `GetNextFormat` quindi finché gli Appunti non restituiscono un formato supportato dall'applicazione o non sono presenti altri formati.

Se si utilizza **ON_UPDATE_COMMAND_UI**, è ora possibile attivare gli elementi Incolla ed eventualmente Incolla speciale dal menu Modifica . A tale scopo, `CMenu::EnableMenuItem` `CCmdUI::Enable`chiamare o . Per ulteriori informazioni sulle operazioni che le applicazioni contenitore devono eseguire con le voci di menu e quando, vedere [Menu e risorse: aggiunte contenitore](../mfc/menus-and-resources-container-additions.md).

## <a name="retrieving-data-from-a-data-object"></a><a name="_core_retrieving_data_from_a_data_object"></a>Recupero di dati da un oggetto datiRetrieving Data from a Data Object

Una volta deciso un formato dati, non resta che recuperare i dati dall'oggetto dati. A tale scopo, l'utente decide dove inserire i dati e l'applicazione chiama la funzione appropriata. I dati saranno disponibili in uno dei seguenti supporti:

|Media|Funzione da chiamare|
|------------|----------------------|
|Memoria globale`HGLOBAL`( )|`COleDataObject::GetGlobalData`|
|File`CFile`( )|`COleDataObject::GetFileData`|
|**Struttura STGMEDIUM** (`IStorage`)|`COleDataObject::GetData`|

In genere, il supporto verrà specificato insieme al relativo formato degli Appunti. Ad esempio, un **oggetto** CF_EMBEDDEDSTRUCT `IStorage` è sempre in un supporto che richiede una struttura **STGMEDIUM.** Pertanto, è `GetData` necessario utilizzare perché è l'unica di queste funzioni che può accettare una struttura **STGMEDIUM.**

Per i casi in cui `IStream` `HGLOBAL` il formato degli Appunti `CFile` è in un o medio, il framework può fornire un puntatore che fa riferimento ai dati. L'applicazione può quindi utilizzare la lettura file per ottenere i dati in modo molto simile a come potrebbe importare i dati da un file. Essenzialmente, si tratta dell'interfaccia `OnRenderData` lato client delle routine e nell'origine `OnRenderFileData` dati.

L'utente può ora inserire dati nel documento come per qualsiasi altro dato nello stesso formato.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Trascinamento della selezione](../mfc/drag-and-drop-ole.md)

- [Appunti](../mfc/clipboard.md)

## <a name="see-also"></a>Vedere anche

[Oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md)<br/>
[Classe COleDataObject](../mfc/reference/coledataobject-class.md)<br/>
[Classe COleDataSource](../mfc/reference/coledatasource-class.md)
