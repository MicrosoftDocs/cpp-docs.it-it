---
title: Contenitori documenti attivi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- active documents [MFC], containers
- active document containers [MFC]
- containers [MFC], active document
- MFC COM, active document containment
ms.assetid: ba20183a-8b4c-440f-9031-e5fcc41d391b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3c912b6c703ef7e05825e070d09f0a1b3cd73003
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932159"
---
# <a name="active-document-containers"></a>Contenitore documenti attivi
Un contenitore di documenti attivi, ad esempio il Raccoglitore Microsoft Office o Internet Explorer, consente di lavorare con più documenti di diversi tipi di applicazioni all'interno di un singolo frame (anziché dover creare e usare più frame di applicazioni per ogni tipo di documento).  
  
 MFC fornisce supporto completo per contenitori documenti attivi nel `COleDocObjectItem` classe. È possibile utilizzare la creazione guidata applicazione MFC per creare un contenitore di documenti attivi selezionando la **contenitore di documenti attivi** casella di controllo il **supporto documenti compositi** pagina della creazione guidata applicazione MFC. Per altre informazioni, vedere [creazione di un'applicazione contenitore documenti attivi](../mfc/creating-an-active-document-container-application.md).  
  
 Per ulteriori informazioni sui contenitori documenti attivi, vedere:  
  
-   [Requisiti dei contenitori](#container_requirements)  
  
-   [Oggetti del sito di documento](#document_site_objects)  
  
-   [Oggetti di visualizzazione del sito](#view_site_objects)  
  
-   [Oggetto frame](#frame_object)  
  
-   [Unione di menu della Guida](../mfc/help-menu-merging.md)  
  
-   [Stampa a livello di codice](../mfc/programmatic-printing.md)  
  
-   [Destinazioni comandi](../mfc/message-handling-and-command-targets.md)  
  
##  <a name="container_requirements"></a> Requisiti dei contenitori  
 Supporto documento attivo in un contenitore di documenti attivi implica molto più implementazioni di interfaccia: è necessaria inoltre la conoscenza di usare le interfacce di un oggetto contenuto. Lo stesso vale per le estensioni del documento attivo, in cui il contenitore deve inoltre conoscere come usare tali interfacce dell'estensione su documenti attivi.  
  
 Un contenitore di documenti attivi che integra i documenti attivi deve:  
  
-   Essere in grado di gestire l'archiviazione di oggetti tramite il `IPersistStorage` interfaccia, vale a dire, è necessario fornire un `IStorage` istanza per ogni documento attivo.  
  
-   Supporta la funzionalità di incorporamento di base dei documenti OLE, necessitando gli oggetti "del sito" (uno per ogni documento o incorporamento) che implementano `IOleClientSite` e `IAdviseSink`.  
  
-   Supporta l'attivazione sul posto di oggetti incorporati o documenti attivi. Gli oggetti del sito del contenitore devono implementare `IOleInPlaceSite` e oggetto frame del contenitore deve fornire `IOleInPlaceFrame`.  
  
-   Supportano le estensioni dei documenti attivi implementando `IOleDocumentSite` per fornire il meccanismo per il contenitore comunicare con il documento. Facoltativamente, il contenitore può implementare le interfacce documento attivo `IOleCommandTarget` e `IContinueCallback` prelevati comandi semplici, ad esempio la stampa o il salvataggio.  
  
 L'oggetto frame, gli oggetti di visualizzazione e l'oggetto contenitore può implementare facoltativamente `IOleCommandTarget` per supportare l'invio di alcuni comandi, come descritto in [destinazioni comandi](../mfc/message-handling-and-command-targets.md). Gli oggetti di visualizzazione e contenitore possono anche implementare `IPrint` e `IContinueCallback`, per supportare la stampa a livello di codice, come descritto in [stampa a livello di codice](../mfc/programmatic-printing.md).  
  
 Nella figura seguente mostra le relazioni concettuale tra un contenitore e i relativi componenti (a sinistra) e il documento attivo e le relative visualizzazioni (a destra). Il documento attivo gestisce dati e archiviazione e la vista consente di visualizzare o, facoltativamente, visualizza tali dati. Le interfacce in grassetto sono quelle necessarie riferito alla partecipazione di documenti attivi; tali grassetto e corsivo sono facoltativi. Tutte le altre interfacce sono necessari.  
  
 ![Interfacce di contenitore documenti attivi](../mfc/media/vc37gj1.gif "vc37gj1")  
  
 Un documento che supporta solo una singola visualizzazione può implementare sia al documento e visualizzazione dei componenti (vale a dire, le interfacce corrispondenti) in un'unica classe concreta. Inoltre, un sito contenitore che supporta solo una vista in un momento possibile combinare i siti di documento e la visualizzazione in una sola classe concreta. Oggetto frame del contenitore, tuttavia, deve rimanere distinto e componente documenti del contenitore è semplicemente elencato qui per fornire una panoramica completa dell'architettura; non è influenzata dall'architettura di contenimento di documenti attivi.  
  
##  <a name="document_site_objects"></a> Oggetti del sito di documento  
 Nell'architettura active document containment, un sito di documento è uguale a un client del sito dei documenti OLE con l'aggiunta del `IOleDocument` interfaccia:  
  
 `interface IOleDocumentSite : IUnknown`  
  
 `{`  
  
 `HRESULT ActivateMe(IOleDocumentView *pViewToActivate);`  
  
 `}`  
  
 Il sito dei documenti a livello concettuale è il contenitore per uno o più oggetti "Visualizza sito". Ogni oggetto sito visualizzazione è associata a oggetti di visualizzazione del documento gestito dal sito di documento. Se il contenitore supporta solo una singola visualizzazione per ogni sito di documento, è possibile implementare i siti di documento e la visualizzazione con un'unica classe concreta.  
  
##  <a name="view_site_objects"></a> Oggetti di visualizzazione del sito  
 Oggetto del sito di visualizzazione del contenitore gestisce lo spazio di visualizzazione per una visualizzazione specifica di un documento. Oltre a supportare lo standard `IOleInPlaceSite` interfaccia, una vista sito inoltre in genere vengono implementate `IContinueCallback` per il controllo di stampa a livello di codice. (Si noti che l'oggetto visualizzazione di una query mai per `IContinueCallback` effettivamente può essere implementato in qualsiasi altro oggetto scelto dal contenitore.)  
  
 Un contenitore che supporta più viste deve essere in grado di creare MultipleView gli oggetti del sito all'interno del sito di documento. In questo modo ogni visualizzazione con servizi di attivazione e disattivazione separati come avviene tramite `IOleInPlaceSite`.  
  
##  <a name="frame_object"></a> Oggetto frame  
 Oggetto frame del contenitore è, nella maggior parte, stesso frame utilizzato per l'attivazione sul posto dei documenti OLE, vale a dire, quella che gestisce la negoziazione del menu e barra degli strumenti. Un oggetto visualizzazione con accesso a questo oggetto frame tramite `IOleInPlaceSite::GetWindowContext`, che fornisce inoltre l'accesso all'oggetto contenitore che rappresenta il documento contenitore (che può gestire la negoziazione a livello di riquadro barra degli strumenti e enumerazione degli oggetti contenuti).  
  
 Un contenitore di documenti attivi possa aumentare il frame aggiungendo `IOleCommandTarget`. Consente di ricevere comandi che hanno origine nell'interfaccia utente del documento attivo nello stesso modo che questa interfaccia può consentire un contenitore inviare gli stessi comandi (ad esempio **File nuovo**, **Apri**,  **Salva con nome**, **stampa**; **Edit Copy**, **Incolla**, **Annulla**e altri) a un documento attivo. Per altre informazioni, vedere [destinazioni comandi](../mfc/message-handling-and-command-targets.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)

