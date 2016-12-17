---
title: "Oggetti dati e origini dati: modifica | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Appunti [C++], determinazione dei formati disponibili"
  - "Appunti [C++], passaggio di informazioni sul formato"
  - "oggetti dati [C++], modifica"
  - "origini dati [C++], operazioni sui dati"
  - "origini dati [C++], determinazione dei formati disponibili"
  - "origini dati [C++], inserimento di dati"
  - "rendering ritardati [C++]"
  - "OLE [C++], oggetti dati"
  - "OLE [C++], origini dati"
ms.assetid: f7f27e77-bb5d-4131-b819-d71bf929ebaf
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Oggetti dati e origini dati: modifica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo un oggetto dati o un'origine dati è stato creato, è possibile eseguire una serie di operazioni comuni sui dati, ad esempio inserimento e i dati, rimuovere enumeranti i formati dati disponibili in e così via.  In questo articolo vengono descritte le tecniche necessarie per completare le operazioni più comuni.  Gli argomenti trattati includono  
  
-   [Inserimento di dati in un'origine dati](#_core_inserting_data_into_a_data_source)  
  
-   [Determinazione dei formati disponibili in un oggetto dati](#_core_determining_the_formats_available_in_a_data_object)  
  
-   [Recupero di dati da un oggetto dati](#_core_retrieving_data_from_a_data_object)  
  
##  <a name="_core_inserting_data_into_a_data_source"></a> Inserimento di dati in un'origine dati  
 Come i dati vengono inseriti in un'origine dati dipende dai dati vengono forniti immediatamente o su richiesta e in quale media è fornito.  I valori possibili sono indicati di seguito.  
  
### Specifica dei dati immediatamente rendering \(esecuzione immediata\)  
  
-   Richiedere ripetutamente `COleDataSource::CacheGlobalData` ogni formato degli Appunti in cui si specifica dei dati.  Passare il formato degli Appunti da utilizzare, un handle alla memoria che contengono dati e, facoltativamente, una struttura di **FORMATETC** descriventi i dati.  
  
     \- oppure \-  
  
-   Se si desidera utilizzare direttamente le strutture di **STGMEDIUM**, chiamare `COleDataSource::CacheData` anziché `COleDataSource::CacheGlobalData` nell'opzione sopra riportata.  
  
### Specifica dei dati su richiesta \(rendering ritardato\)  
 Si tratta di un argomento avanzato.  
  
-   Richiedere ripetutamente `COleDataSource::DelayRenderData` ogni formato degli Appunti in cui si specifica dei dati.  Passare il formato degli Appunti da utilizzare e, facoltativamente, una struttura di **FORMATETC** in cui sono descritti i dati.  Quando i dati richiesti, il framework chiamerà `COleDataSource::OnRenderData`, che è necessario eseguire l'override.  
  
     \- oppure \-  
  
-   Se si utilizza un oggetto di `CFile` per fornire dati, chiamare `COleDataSource::DelayRenderFileData` anziché `COleDataSource::DelayRenderData` nell'opzione precedente.  Quando i dati richiesti, il framework chiamerà `COleDataSource::OnRenderFileData`, che è necessario eseguire l'override.  
  
##  <a name="_core_determining_the_formats_available_in_a_data_object"></a> Determinazione dei formati disponibili in un oggetto dati  
 Affinché un'applicazione consentire all'utente ai dati di inserimento in, deve sapere se esistono formati gli Appunti in grado di gestire.  A questo scopo, l'applicazione deve eseguire le operazioni seguenti:  
  
1.  Creare un oggetto di `COleDataObject` e una struttura di **FORMATETC**.  
  
2.  Chiamare la funzione membro di `AttachClipboard` oggetto dati per associare l'oggetto dati con i dati negli Appunti.  
  
3.  Effettuare una delle seguenti operazioni:  
  
    -   Chiamare la funzione membro di `IsDataAvailable` oggetto dati se esistono solo uno o due formato necessarie.  Ciò consente di risparmiare tempo nei casi in cui i dati negli Appunti supportano necessarie molte più formati che l'applicazione.  
  
         \- oppure \-  
  
    -   Chiamare la funzione membro di `BeginEnumFormats` oggetto dati per avviare l'enumerazione dei formati disponibili negli Appunti.  Chiamare `GetNextFormat` agli Appunti non restituiscono un formato supportate da l o non vi siano più formati.  
  
 Se si utilizza `ON_UPDATE_COMMAND_UI`, è ora possibile attivare gli elementi edit paste special, eventualmente, e incolla del menu Modifica.  A tale scopo, chiamare `CMenu::EnableMenuItem` o `CCmdUI::Enable`.  Per ulteriori informazioni sulle applicazioni contenitori devono utilizzare le voci di menu e quando, vedere [Menu e risorse: Aggiunta del contenitore](../mfc/menus-and-resources-container-additions.md).  
  
##  <a name="_core_retrieving_data_from_a_data_object"></a> Recupero di dati da un oggetto dati  
 Una volta scelte di un formato dati, ogni elemento rimanente è di recuperare i dati dall'oggetto dati.  A tale scopo, l'utente decide in cui inserire dati e le chiamate di l la funzione appropriata.  I dati saranno disponibili in uno dei supporti:  
  
|Medium|Funzione da chiamare|  
|------------|--------------------------|  
|Memoria globale \(`HGLOBAL`\)|`COleDataObject::GetGlobalData`|  
|File \(`CFile`\)|`COleDataObject::GetFileData`|  
|Struttura di**STGMEDIUM** \(`IStorage`\)|`COleDataObject::GetData`|  
  
 In genere, medium viene specificato con il formato degli Appunti.  Ad esempio, un oggetto **CF\_EMBEDDEDSTRUCT** è sempre in un supporto di `IStorage` che richiede una struttura di **STGMEDIUM**.  Pertanto, si utilizzerebbe `GetData` perché è l'unico di queste funzioni che possono accettare una struttura di **STGMEDIUM**.  
  
 Per i casi in cui il formato degli Appunti in un supporto di `HGLOBAL` o di `IStream`, il framework può fornire un puntatore di `CFile` che fa riferimento ai dati.  L'applicazione può quindi utilizzare il file di lettura per ottenere i dati quali potrebbe includere i dati da un file.  Essenzialmente, si tratta dell'interfaccia lato client alle routine di `OnRenderFileData` e di `OnRenderData` nell'origine dati.  
  
 L'utente può ora inserire i dati nel documento come per gli altri dati nello stesso formato.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Trascinare la selezione](../mfc/drag-and-drop-ole.md)  
  
-   [Appunti](../mfc/clipboard.md)  
  
## Vedere anche  
 [Oggetti dati e origini dati \(OLE\)](../mfc/data-objects-and-data-sources-ole.md)   
 [COleDataObject Class](../mfc/reference/coledataobject-class.md)   
 [COleDataSource Class](../mfc/reference/coledatasource-class.md)