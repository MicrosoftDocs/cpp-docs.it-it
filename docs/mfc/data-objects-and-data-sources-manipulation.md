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
ms.openlocfilehash: adbe2a77fb0069e9874ab20a51b3ab08aabbe1f6
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446995"
---
# <a name="data-objects-and-data-sources-manipulation"></a>Oggetti dati e origini dati: modifica

Dopo la creazione di un oggetto dati o di un'origine dati, è possibile eseguire una serie di operazioni comuni sui dati, ad esempio l'inserimento e la rimozione di dati, l'enumerazione dei formati in cui si trovano i dati e altro ancora. Questo articolo descrive le tecniche necessarie per completare le operazioni più comuni. Gli argomenti includono:

- [Inserimento di dati in un'origine dati](#_core_inserting_data_into_a_data_source)

- [Determinazione dei formati disponibili in un oggetto dati](#_core_determining_the_formats_available_in_a_data_object)

- [Recupero di dati da un oggetto dati](#_core_retrieving_data_from_a_data_object)

##  <a name="_core_inserting_data_into_a_data_source"></a>Inserimento di dati in un'origine dati

Il modo in cui i dati vengono inseriti in un'origine dati varia a seconda che i dati vengano forniti immediatamente o su richiesta e in quale supporto viene fornito. Di seguito sono riportate le possibilità.

### <a name="supplying-data-immediately-immediate-rendering"></a>Fornire immediatamente dati (rendering immediato)

- Chiamare ripetutamente `COleDataSource::CacheGlobalData` per ogni formato degli Appunti in cui vengono forniti i dati. Passare il formato degli Appunti da usare, un handle per la memoria che contiene i dati e, facoltativamente, una struttura **FORMATETC** che descrive i dati.

     -oppure-

- Se si desidera utilizzare direttamente le strutture **STGMEDIUM** , chiamare `COleDataSource::CacheData` anziché `COleDataSource::CacheGlobalData` nell'opzione precedente.

### <a name="supplying-data-on-demand-delayed-rendering"></a>Fornire dati su richiesta (rendering ritardato)

Si tratta di un argomento avanzato.

- Chiamare ripetutamente `COleDataSource::DelayRenderData` per ogni formato degli Appunti in cui vengono forniti i dati. Passare il formato degli Appunti da usare e, facoltativamente, una struttura **FORMATETC** che descrive i dati. Quando i dati vengono richiesti, il Framework chiamerà `COleDataSource::OnRenderData`, di cui è necessario eseguire l'override.

     -oppure-

- Se si utilizza un oggetto `CFile` per fornire i dati, chiamare `COleDataSource::DelayRenderFileData` anziché `COleDataSource::DelayRenderData` nell'opzione precedente. Quando i dati vengono richiesti, il Framework chiamerà `COleDataSource::OnRenderFileData`, di cui è necessario eseguire l'override.

##  <a name="_core_determining_the_formats_available_in_a_data_object"></a>Determinazione dei formati disponibili in un oggetto dati

Prima che un'applicazione consenta all'utente di incollare i dati, è necessario stabilire se sono presenti formati negli Appunti che è in grado di gestire. A tale scopo, l'applicazione deve eseguire le operazioni seguenti:

1. Creare un oggetto `COleDataObject` e una struttura **FORMATETC** .

1. Chiamare la funzione membro `AttachClipboard` dell'oggetto dati per associare l'oggetto dati ai dati negli Appunti.

1. Eseguire una delle operazioni seguenti:

   - Chiamare la funzione membro dell'oggetto dati `IsDataAvailable` se sono presenti solo uno o due formati necessari. In questo modo si risparmia tempo nei casi in cui i dati negli Appunti supportano un numero significativamente maggiore di formati rispetto all'applicazione.

     \-oppure-

   - Chiamare la funzione membro `BeginEnumFormats` dell'oggetto dati per iniziare a enumerare i formati disponibili negli Appunti. Chiamare quindi `GetNextFormat` finché gli Appunti non restituiscono un formato supportato dall'applicazione o non ci sono altri formati.

Se si usa **ON_UPDATE_COMMAND_UI**, è ora possibile abilitare l'operazione Incolla e, possibilmente, incollare elementi speciali nel menu Modifica. A tale scopo, chiamare `CMenu::EnableMenuItem` o `CCmdUI::Enable`. Per ulteriori informazioni sulle applicazioni contenitore che devono essere eseguite con le voci di menu e quando, vedere [menu e risorse: aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md).

##  <a name="_core_retrieving_data_from_a_data_object"></a>Recupero di dati da un oggetto dati

Una volta scelto un formato dati, tutto ciò che rimane è quello di recuperare i dati dall'oggetto dati. A tale scopo, l'utente decide dove inserire i dati e l'applicazione chiama la funzione appropriata. I dati saranno disponibili in uno dei seguenti supporti:

|Media|Funzione da chiamare|
|------------|----------------------|
|Memoria globale (`HGLOBAL`)|`COleDataObject::GetGlobalData`|
|File (`CFile`)|`COleDataObject::GetFileData`|
|Struttura **STGMEDIUM** (`IStorage`)|`COleDataObject::GetData`|

In genere, il supporto viene specificato insieme al formato degli Appunti. Ad esempio, un oggetto **CF_EMBEDDEDSTRUCT** è sempre in un supporto `IStorage` che richiede una struttura **STGMEDIUM** . Pertanto, si utilizzerà `GetData` perché è l'unica funzione che può accettare una struttura **STGMEDIUM** .

Per i casi in cui il formato degli appunti si trova in un `IStream` o `HGLOBAL` supporto, il Framework può fornire un puntatore `CFile` che fa riferimento ai dati. L'applicazione può quindi usare il file Read per ottenere i dati nello stesso modo in cui potrebbe importare dati da un file. In sostanza, si tratta dell'interfaccia lato client per la `OnRenderData` e `OnRenderFileData` routine nell'origine dati.

L'utente può ora inserire i dati nel documento come per tutti gli altri dati nello stesso formato.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Trascinamento della selezione](../mfc/drag-and-drop-ole.md)

- [Appunti](../mfc/clipboard.md)

## <a name="see-also"></a>Vedere anche

[Oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md)<br/>
[Classe COleDataObject](../mfc/reference/coledataobject-class.md)<br/>
[Classe COleDataSource](../mfc/reference/coledatasource-class.md)
