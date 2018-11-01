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
ms.openlocfilehash: ee5cb320cb07a656675bd6735d6761cb69573d0f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636150"
---
# <a name="data-objects-and-data-sources-manipulation"></a>Oggetti dati e origini dati: modifica

Dopo aver creata un oggetto dati o origine dati, è possibile eseguire un numero di operazioni comuni su dati, ad esempio inserimento e rimozione dei dati, l'enumerazione dei formati che di dati sono in e così via. Questo articolo descrive le tecniche necessarie per completare le operazioni più comuni. Gli argomenti trattati includono:

- [Inserimento di dati in un'origine dati](#_core_inserting_data_into_a_data_source)

- [Determinazione dei formati disponibili in un oggetto dati](#_core_determining_the_formats_available_in_a_data_object)

- [Il recupero dei dati da un oggetto dati](#_core_retrieving_data_from_a_data_object)

##  <a name="_core_inserting_data_into_a_data_source"></a> Inserimento di dati in un'origine dati

Inserimento dei dati in un'origine dati dipende dal fatto che i dati vengono forniti immediatamente o su richiesta e quali supporto è specificato. I valori possibili sono i seguenti.

### <a name="supplying-data-immediately-immediate-rendering"></a>Fornisce dati immediatamente (per il Rendering immediato)

- Chiamare `COleDataSource::CacheGlobalData` ripetutamente per tutti i formati degli Appunti in cui vengono forniti i dati. Il formato degli Appunti da usare, passare un handle per la memoria che contiene i dati e, facoltativamente, un **FORMATETC** struttura che descrive i dati.

     oppure

- Se si desidera usare direttamente **STGMEDIUM** strutture, si chiama `COleDataSource::CacheData` invece di `COleDataSource::CacheGlobalData` nell'opzione precedente.

### <a name="supplying-data-on-demand-delayed-rendering"></a>Fornisce dati su richiesta (Rendering ritardato)

Si tratta di un argomento avanzato.

- Chiamare `COleDataSource::DelayRenderData` ripetutamente per tutti i formati degli Appunti in cui vengono forniti i dati. Passare il formato degli Appunti da usare e, facoltativamente, un **FORMATETC** struttura che descrive i dati. Quando vengono richiesti i dati, il framework chiamerà `COleDataSource::OnRenderData`, che è necessario eseguire l'override.

     oppure

- Se si usa un' `CFile` oggetto da fornire i dati, chiamare `COleDataSource::DelayRenderFileData` invece di `COleDataSource::DelayRenderData` nell'opzione precedente. Quando vengono richiesti i dati, il framework chiamerà `COleDataSource::OnRenderFileData`, che è necessario eseguire l'override.

##  <a name="_core_determining_the_formats_available_in_a_data_object"></a> Determinazione dei formati disponibili in un oggetto dati

Prima di un'applicazione consente all'utente di incollare i dati al suo interno, è necessario sapere se sono disponibili formati degli Appunti che è possibile gestire. A tale scopo, l'applicazione deve eseguire le operazioni seguenti:

1. Creare un `COleDataObject` oggetto e una **FORMATETC** struttura.

1. Chiamare il metodo dell'oggetto dati `AttachClipboard` funzione membro da associare all'oggetto dati i dati negli Appunti.

1. Eseguire una delle operazioni seguenti:

   - Chiamare il metodo dell'oggetto dati `IsDataAvailable` funzione membro se sono presenti solo uno o due formati che è necessario. Questo consente di risparmiare tempo nei casi in cui i dati negli Appunti supportano formati significativamente maggiore rispetto all'applicazione.

         -or-

   - Chiamare il metodo dell'oggetto dati `BeginEnumFormats` funzione membro per l'enumerazione dei formati disponibili negli Appunti. Chiamare quindi `GetNextFormat` fino a quando gli Appunti restituisce un formato di applicazione supporta o non sono non altri formati.

Se si usa **ON_UPDATE_COMMAND_UI**, è ora possibile abilitare l'Incolla e, possibilmente, elementi Incolla speciale dal menu Modifica. A tale scopo, chiamare `CMenu::EnableMenuItem` o `CCmdUI::Enable`. Per altre informazioni su quali contenitore le applicazioni devono eseguire con le voci di menu ed, vedere [menu e risorse: aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md).

##  <a name="_core_retrieving_data_from_a_data_object"></a> Il recupero dei dati da un oggetto dati

Dopo avere scelto il formato dei dati, che rimane è per recuperare i dati dall'oggetto dati. A tale scopo, l'utente decide dove inserire i dati e l'applicazione chiama la funzione appropriata. I dati saranno disponibili in uno dei seguenti supporti:

|Medio|Funzione da chiamare|
|------------|----------------------|
|Memoria globale (`HGLOBAL`)|`COleDataObject::GetGlobalData`|
|File (`CFile`)|`COleDataObject::GetFileData`|
|**STGMEDIUM** struttura (`IStorage`)|`COleDataObject::GetData`|

In genere, il supporto verrà specificato insieme a un formato degli Appunti. Ad esempio, un **CF_EMBEDDEDSTRUCT** oggetto è sempre in un `IStorage` medio che richiede un **STGMEDIUM** struttura. Pertanto, utilizzerebbe `GetData` perché è la sola tra queste funzioni che può accettare un' **STGMEDIUM** struttura.

Per i casi in cui il formato degli Appunti è in un `IStream` oppure `HGLOBAL` Media, il framework può fornire un `CFile` puntatore che fa riferimento ai dati. L'applicazione può quindi usare file di lettura per ottenere i dati nello stesso modo analogo all'importazione di dati da un file. In pratica, questo è l'interfaccia lato client per il `OnRenderData` e `OnRenderFileData` routine nell'origine dati.

L'utente può ora inserimento dei dati nel documento come per qualsiasi altro dato lo stesso formato.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Trascinare e rilasciare](../mfc/drag-and-drop-ole.md)

- [Appunti](../mfc/clipboard.md)

## <a name="see-also"></a>Vedere anche

[Oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md)<br/>
[Classe COleDataObject](../mfc/reference/coledataobject-class.md)<br/>
[Classe COleDataSource](../mfc/reference/coledatasource-class.md)
