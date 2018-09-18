---
title: Contenitori documenti attivi | Microsoft Docs
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
ms.openlocfilehash: de03bc7b08a0fe5ae3b1c34fd1a7ec79c8fb0661
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017573"
---
# <a name="active-document-containers"></a>Contenitore documenti attivi
Un contenitore di documenti attivi, ad esempio il Raccoglitore Microsoft Office o Internet Explorer, consente di lavorare con più documenti di diversi tipi di applicazione all'interno di un singolo frame (invece di dover creare e usare più frame dell'applicazione per ogni tipo di documento).  
  
 MFC fornisce supporto completo per contenitori documenti attivi nel `COleDocObjectItem` classe. È possibile usare la creazione guidata applicazione MFC per creare un contenitore di documenti attivi selezionando la **contenitore di documenti attivi** casella di controllo la **supporto documenti compositi** pagina della creazione guidata applicazione MFC. Per altre informazioni, vedere [creazione di un'applicazione contenitore documenti attivi](../mfc/creating-an-active-document-container-application.md).  
  
 Per altre informazioni sui contenitori documenti attivi, vedere:  
  
-   [Requisiti dei contenitori](#container_requirements)  
  
-   [Oggetti del sito documento](#document_site_objects)  
  
-   [Visualizza gli oggetti del sito](#view_site_objects)  
  
-   [Oggetto frame](#frame_object)  
  
-   [Unione di menu della Guida](../mfc/help-menu-merging.md)  
  
-   [Stampa a livello di codice](../mfc/programmatic-printing.md)  
  
-   [Destinazioni comandi](../mfc/message-handling-and-command-targets.md)  
  
##  <a name="container_requirements"></a> Requisiti dei contenitori  
 Supporto documento attivo in un contenitore di documenti attivi implica più della semplice implementazioni di interfacce: richiede inoltre conoscenza dell'uso di interfacce di un oggetto indipendente. Lo stesso vale per le estensioni di documenti attivi, in cui il contenitore deve inoltre conoscere come usare tali interfacce dell'estensione in documenti attivi.  
  
 Un contenitore di documenti attivi che integra i documenti attivi deve:  
  
-   Essere in grado di gestire l'archiviazione di oggetti tramite il `IPersistStorage` interfaccia, vale a dire, è necessario fornire un `IStorage` istanza per ogni documento attivo.  
  
-   Supporta le funzionalità di incorporamento di documenti OLE, è necessario eseguire gli oggetti "sito" (uno per ogni documento o incorporamento) di base che implementano `IOleClientSite` e `IAdviseSink`.  
  
-   Supportare l'attivazione sul posto di oggetti incorporati o documenti attivi. Gli oggetti del sito del contenitore devono implementare `IOleInPlaceSite` e deve fornire l'oggetto cornice del contenitore `IOleInPlaceFrame`.  
  
-   Supportare le estensioni i documenti attivi implementando `IOleDocumentSite` per fornire il meccanismo per il contenitore comunicare con il documento. Facoltativamente, il contenitore può implementare le interfacce documento attivo `IOleCommandTarget` e `IContinueCallback` per prelevare semplici comandi, ad esempio la stampa o salvataggio.  
  
 L'oggetto cornice, gli oggetti di visualizzazione e l'oggetto contenitore può implementare facoltativamente `IOleCommandTarget` per supportare l'invio di determinati comandi, come illustrato nella [destinazioni comandi](../mfc/message-handling-and-command-targets.md). Gli oggetti di visualizzazione e contenitore possono anche implementare `IPrint` e `IContinueCallback`, per supportare la stampa a livello di codice, come descritto in [a livello di codice stampa](../mfc/programmatic-printing.md).  
  
 Nella figura seguente mostra le relazioni concettuale tra un contenitore e i relativi componenti (a sinistra) e il documento attivo e le relative visualizzazioni (a destra). Il documento attivo gestisce dati e archiviazione e la vista consente di visualizzare o, facoltativamente, visualizza tali dati. Le interfacce in grassetto sono quelle necessarie per la partecipazione di documenti attivi; tali grassetto e corsivo sono facoltativi. Sono necessarie tutte le altre interfacce.  
  
 ![Interfacce del contenitore documenti attivi](../mfc/media/vc37gj1.gif "vc37gj1")  
  
 Un documento che supporta solo una singola visualizzazione può implementare i componenti di visualizzazione sia il documento (ovvero interfacce corrispondenti) in un'unica classe concreta. Inoltre, un sito contenitore che supporta solo una vista in un momento possibile combinare i siti di documento e la visualizzazione in una singola classe concreta. Oggetto cornice del contenitore, è necessario comunque distinto e componente di documento del contenitore è semplicemente incluso qui per fornire una panoramica completa dell'architettura; quest'ultimo non è interessato dall'architettura di contenimento di documenti attivi.  
  
##  <a name="document_site_objects"></a> Oggetti del sito documento  
 Nell'architettura di contenimento di documenti attivi, un sito di documento è lo stesso come un oggetto del sito client dei documenti OLE con l'aggiunta del `IOleDocument` interfaccia:  

```cpp
interface IOleDocumentSite : IUnknown
{
    HRESULT ActivateMe(IOleDocumentView *pViewToActivate);
}
```  
  
 Il sito dei documenti è concettualmente il contenitore per uno o più oggetti "Visualizza sito". Ogni oggetto del sito di visualizzazione è associata a oggetti di visualizzazione del documento gestiti dal sito dei documenti. Se il contenitore supporta solo una singola visualizzazione per ogni sito del documento, è possibile implementare i siti di documento e la visualizzazione con una singola classe concreta.  
  
##  <a name="view_site_objects"></a> Visualizza gli oggetti del sito  
 Oggetto del sito di visualizzazione del contenitore gestisce lo spazio di visualizzazione per una visualizzazione specifica di un documento. Oltre al supporto standard `IOleInPlaceSite` interfaccia, un sito di visualizzazione anche in genere implementa `IContinueCallback` per il controllo di stampa a livello di codice. (Si noti che l'oggetto visualizzazione mai una query per `IContinueCallback` può effettivamente essere implementato in qualsiasi altro oggetto scelto dal contenitore.)  
  
 Un contenitore che supporta più visualizzazioni deve essere in grado di creare più Visualizza gli oggetti del sito all'interno del sito del documento. In questo modo ogni visualizzazione con servizi di attivazione e disattivazione separati come avviene tramite `IOleInPlaceSite`.  
  
##  <a name="frame_object"></a> Oggetto frame  
 Oggetto cornice del contenitore è, nella maggior parte, il frame stesso utilizzato per l'attivazione sul posto in documenti OLE, vale a dire, quella che gestisce la negoziazione del menu e barra degli strumenti. Un oggetto visualizzazione può accedere a questo oggetto frame attraverso `IOleInPlaceSite::GetWindowContext`, che fornisce inoltre l'accesso all'oggetto contenitore che rappresenta il documento contenitore (che può gestire la negoziazione della barra degli strumenti a livello di riquadro e enumerazione degli oggetti contenuti).  
  
 Un contenitore documento attivo può aumentare il frame aggiungendo `IOleCommandTarget`. Ciò consente di ricevere comandi che hanno origine nell'interfaccia utente del documento attivo nello stesso modo che questa interfaccia può consentire un contenitore inviare gli stessi comandi (ad esempio **nuovi File**, **Open**,  **Salva con nome**, **Print**; **Modifica copia**, **Incolla**, **annullare**e così via) a un documento attivo. Per altre informazioni, vedere [destinazioni comandi](../mfc/message-handling-and-command-targets.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)

