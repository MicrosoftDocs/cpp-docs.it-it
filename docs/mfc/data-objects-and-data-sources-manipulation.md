---
title: 'Oggetti dati e origini dati: modifica | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f276e85be33f3042b19ab7dc6158a4e9f856fb2e
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929861"
---
# <a name="data-objects-and-data-sources-manipulation"></a>Oggetti dati e origini dati: modifica
Dopo aver creata un'origine dati o un oggetto dati, è possibile eseguire un numero di operazioni frequenti nei dati, ad esempio l'inserimento e rimozione dei dati, l'enumerazione i formati che di dati sono in e altro ancora. In questo articolo vengono descritte le tecniche necessarie per completare le operazioni più comuni. Gli argomenti trattati includono:  
  
-   [Inserimento di dati in un'origine dati](#_core_inserting_data_into_a_data_source)  
  
-   [Determinazione dei formati disponibili in un oggetto dati](#_core_determining_the_formats_available_in_a_data_object)  
  
-   [Il recupero dei dati da un oggetto dati](#_core_retrieving_data_from_a_data_object)  
  
##  <a name="_core_inserting_data_into_a_data_source"></a> Inserimento di dati in un'origine dati  
 Modo in cui i dati vengono inseriti da un'origine dati varia a seconda se i dati vengono forniti immediatamente o su richiesta in cui supporto è stato fornito. I valori possibili sono i seguenti.  
  
### <a name="supplying-data-immediately-immediate-rendering"></a>Fornisce dati immediatamente (Rendering immediato)  
  
-   Chiamare `COleDataSource::CacheGlobalData` più volte per ogni formato degli Appunti in cui vengono forniti i dati. Il formato degli Appunti da usare, passare un handle per la memoria che contiene i dati e, facoltativamente, un **FORMATETC** struttura che descrive i dati.  
  
     oppure  
  
-   Se si desidera lavorare direttamente con **STGMEDIUM** strutture, chiamare `COleDataSource::CacheData` anziché `COleDataSource::CacheGlobalData` nell'opzione precedente.  
  
### <a name="supplying-data-on-demand-delayed-rendering"></a>Fornisce dati su richiesta (Rendering ritardato)  
 Si tratta di un argomento avanzato.  
  
-   Chiamare `COleDataSource::DelayRenderData` più volte per ogni formato degli Appunti in cui vengono forniti i dati. Passare il formato degli Appunti da utilizzare e, facoltativamente, un **FORMATETC** struttura che descrive i dati. Quando vengono richiesti i dati, il framework chiamerà `COleDataSource::OnRenderData`, che è necessario eseguire l'override.  
  
     oppure  
  
-   Se si usa un `CFile` oggetto per fornire i dati, chiamare `COleDataSource::DelayRenderFileData` anziché `COleDataSource::DelayRenderData` nell'opzione precedente. Quando vengono richiesti i dati, il framework chiamerà `COleDataSource::OnRenderFileData`, che è necessario eseguire l'override.  
  
##  <a name="_core_determining_the_formats_available_in_a_data_object"></a> Determinazione dei formati disponibili in un oggetto dati  
 Prima di un'applicazione consente all'utente di incollare i dati, è necessario sapere se sono presenti formati degli Appunti in grado di gestire. A tale scopo, l'applicazione deve eseguire le operazioni seguenti:  
  
1.  Creare una `COleDataObject` oggetto e una **FORMATETC** struttura.  
  
2.  Chiamare l'oggetto dati `AttachClipboard` funzione membro per associare l'oggetto dati con i dati negli Appunti.  
  
3.  Eseguire una delle operazioni seguenti:  
  
    -   Chiamare l'oggetto dati `IsDataAvailable` funzione membro se sono presenti solo una o due formati che è necessario. Questo sarà possibile risparmiare tempo nei casi in cui i dati negli Appunti supportano formati significativamente maggiore rispetto all'applicazione.  
  
         oppure  
  
    -   Chiamare l'oggetto dati `BeginEnumFormats` funzione membro per l'enumerazione dei formati disponibili negli Appunti. Chiamare quindi `GetNextFormat` fino a quando non Appunti restituisce un formato di applicazione supporta o non può avere più formati.  
  
 Se si utilizza **ON_UPDATE_COMMAND_UI**, è ora possibile abilitare l'Incolla e, possibilmente, Incolla speciale voci del menu Modifica. A tale scopo, chiamare `CMenu::EnableMenuItem` o `CCmdUI::Enable`. Per ulteriori informazioni su quali contenitore applicazioni devono eseguire operazioni con voci di menu e, vedere [menu e risorse: aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md).  
  
##  <a name="_core_retrieving_data_from_a_data_object"></a> Il recupero dei dati da un oggetto dati  
 Dopo avere scelto il formato dei dati, è comunque per recuperare i dati dall'oggetto dati. A tale scopo, l'utente decide in cui inserire i dati e l'applicazione chiama la funzione appropriata. I dati saranno disponibili in uno dei seguenti supporti:  
  
|Medio|Funzione da chiamare|  
|------------|----------------------|  
|Memoria globale (`HGLOBAL`)|`COleDataObject::GetGlobalData`|  
|File (`CFile`)|`COleDataObject::GetFileData`|  
|**STGMEDIUM** struttura (`IStorage`)|`COleDataObject::GetData`|  
  
 In genere, il supporto viene specificato con il formato degli Appunti. Ad esempio, un **CF_EMBEDDEDSTRUCT** oggetto è sempre in un `IStorage` medio che richiede un **STGMEDIUM** struttura. Pertanto, si utilizzerebbe `GetData` perché è l'unica di queste funzioni in grado di accettare una **STGMEDIUM** struttura.  
  
 Nei casi in cui il formato degli Appunti è in un `IStream` oppure `HGLOBAL` medio, il framework può fornire un `CFile` puntatore che fa riferimento ai dati. L'applicazione può quindi utilizzare file leggere per ottenere i dati nello stesso modo come è possibile importare i dati da un file. In pratica, si tratta dell'interfaccia lato client per il `OnRenderData` e `OnRenderFileData` routine nell'origine dati.  
  
 L'utente può ora inserimento dei dati nel documento come per qualsiasi altro dato lo stesso formato.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Trascinamento della selezione](../mfc/drag-and-drop-ole.md)  
  
-   [Appunti](../mfc/clipboard.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md)   
 [Classe COleDataObject](../mfc/reference/coledataobject-class.md)   
 [Classe COleDataSource](../mfc/reference/coledatasource-class.md)
