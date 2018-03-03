---
title: Contenitori documenti attivi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- active documents [MFC], containers
- active document containers [MFC]
- containers [MFC], active document
- MFC COM, active document containment
ms.assetid: ba20183a-8b4c-440f-9031-e5fcc41d391b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 87546f3c02025438b3e60cd2038fdc885dfedf9f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="active-document-containers"></a>Contenitore documenti attivi
Un contenitore di documenti attivi, ad esempio il Raccoglitore Microsoft Office o Internet Explorer, consente di lavorare con più documenti di diversi tipi di applicazioni all'interno di un singolo frame (anziché dover creare e utilizzare più frame di applicazioni per ogni tipo di documento).  
  
 MFC fornisce supporto completo per contenitori documenti attivi nel `COleDocObjectItem` classe. È possibile utilizzare la creazione guidata applicazione MFC per creare un contenitore di documenti attivi selezionando la **contenitore documenti attivi** casella di controllo di **supporto documenti compositi** pagina della creazione guidata applicazione MFC. Per ulteriori informazioni, vedere [la creazione di un'applicazione contenitore documenti attivi](../mfc/creating-an-active-document-container-application.md).  
  
 Per ulteriori informazioni sui contenitori documenti attivi, vedere:  
  
-   [Requisiti dei contenitori](#container_requirements)  
  
-   [Oggetti del sito di documento](#document_site_objects)  
  
-   [Oggetti di visualizzazione del sito](#view_site_objects)  
  
-   [Oggetto frame](#frame_object)  
  
-   [Unione di menu della Guida](../mfc/help-menu-merging.md)  
  
-   [Stampa a livello di codice](../mfc/programmatic-printing.md)  
  
-   [Destinazioni comandi](../mfc/message-handling-and-command-targets.md)  
  
##  <a name="container_requirements"></a>Requisiti dei contenitori  
 Supporto documento attivo in un contenitore di documenti attivi implica più implementazioni di interfaccia: è necessaria inoltre la conoscenza di usare le interfacce di un oggetto contenuto. Lo stesso vale per le estensioni del documento attivo, in cui il contenitore deve anche imparare a utilizzare le interfacce di estensione in documenti attivi.  
  
 Un contenitore di documenti attivi che integra i documenti attivi deve:  
  
-   Essere in grado di gestire l'archiviazione di oggetti mediante il **IPersistStorage** interfaccia, ovvero, deve fornire un `IStorage` istanza per ogni documento attivo.  
  
-   Supportare le funzionalità di incorporamento di base dei documenti OLE, necessitando oggetti "sito" (uno per ogni documento o incorporamento) che implementano **IOleClientSite** e **IAdviseSink**.  
  
-   Supporta l'attivazione sul posto di oggetti incorporati o documenti attivi. Gli oggetti del sito del contenitore devono implementare `IOleInPlaceSite` e oggetto frame del contenitore deve fornire **IOleInPlaceFrame**.  
  
-   Supporta le estensioni dei documenti attivi implementando `IOleDocumentSite` per fornire il meccanismo per il contenitore comunicare con il documento. Facoltativamente, il contenitore può implementare interfacce dei documenti attivi `IOleCommandTarget` e `IContinueCallback` prelevati comandi semplici, ad esempio la stampa o il salvataggio.  
  
 L'oggetto frame, gli oggetti di visualizzazione e l'oggetto contenitore può implementare facoltativamente **IOleCommandTarget** per supportare l'invio di determinati comandi, come descritto in [destinazioni comandi](../mfc/message-handling-and-command-targets.md). Gli oggetti di visualizzazione e contenitore possono anche implementare `IPrint` e `IContinueCallback`, per supportare la stampa a livello di codice, come descritto in [stampa a livello di codice](../mfc/programmatic-printing.md).  
  
 Nella figura seguente mostra le relazioni concettuale tra un contenitore e i relativi componenti (a sinistra) e il documento attivo e relative visualizzazioni (a destra). Il documento attivo gestisce dati e archiviazione e la visualizzazione consente di visualizzare o stampa, facoltativamente, tali dati. Le interfacce in grassetto sono quelle necessarie per la partecipazione di documenti attivi; tali grassetto e corsivo sono facoltativi. Tutte le altre interfacce sono necessari.  
  
 ![Interfacce di contenitore documenti attivi](../mfc/media/vc37gj1.gif "vc37gj1")  
  
 Un documento che supporta solo una singola visualizzazione può implementare i componenti di visualizzazione sia il documento (ovvero, le interfacce corrispondenti) in un'unica classe concreta. Inoltre, un sito contenitore che supporta solo una visualizzazione in un momento possibile combinare i siti di documento e la visualizzazione in una sola classe concreta. Oggetto frame del contenitore, tuttavia, deve rimanere distinto e il componente di documento del contenitore è semplicemente elencato qui per fornire una panoramica completa dell'architettura; non è influenzata dall'architettura di contenimento di documenti attivi.  
  
##  <a name="document_site_objects"></a>Oggetti del sito di documento  
 Nell'architettura active document containment, un sito di documento è uguale a un client del sito dei documenti OLE con l'aggiunta del `IOleDocument` interfaccia:  
  
 `interface IOleDocumentSite : IUnknown`  
  
 `{`  
  
 `HRESULT ActivateMe(IOleDocumentView *pViewToActivate);`  
  
 `}`  
  
 Il sito di documento è concettualmente il contenitore per uno o più oggetti "Visualizza sito". Ogni oggetto sito visualizzazione è associata a oggetti di visualizzazione del documento gestito dal sito di documento. Se il contenitore supporta solo una singola visualizzazione per ogni sito di documento, è possibile implementare i siti di documento e la visualizzazione con un'unica classe concreta.  
  
##  <a name="view_site_objects"></a>Oggetti di visualizzazione del sito  
 Oggetto sito visualizzazione di un contenitore gestisce lo spazio di visualizzazione per una visualizzazione specifica di un documento. Oltre a supportare lo standard `IOleInPlaceSite` interfaccia, un sito di visualizzazione implementa generalmente anche `IContinueCallback` per il controllo di stampa a livello di codice. (Si noti che l'oggetto visualizzazione non query mai per `IContinueCallback` effettivamente può essere implementato in qualsiasi oggetto scelto dal contenitore.)  
  
 Un contenitore che supporta più visualizzazioni deve essere in grado di creare più Visualizza gli oggetti del sito all'interno del sito del documento. In questo modo ogni visualizzazione con servizi di attivazione e disattivazione separati, come avviene tramite `IOleInPlaceSite`.  
  
##  <a name="frame_object"></a>Oggetto frame  
 Oggetto frame del contenitore è, la maggior parte, il frame stesso utilizzato per l'attivazione sul posto dei documenti OLE, vale a dire, quella che gestisce la negoziazione del menu e barra degli strumenti. Un oggetto visualizzazione con accesso a questo oggetto frame tramite **IOleInPlaceSite::GetWindowContext**, che fornisce inoltre l'accesso all'oggetto contenitore che rappresenta il documento contenitore (che può gestire la negoziazione del riquadro livello sulla barra degli strumenti ed enumerazione degli oggetti contenuti).  
  
 Un contenitore di documenti attivi possa aumentare il frame aggiungendo `IOleCommandTarget`. Consente di ricevere comandi che hanno origine nell'interfaccia utente del documento attivo nello stesso modo che questa interfaccia può consentire un contenitore inviare gli stessi comandi (ad esempio **File nuovo**, **aprire**,  **Salva con nome**, **stampa**; **Edit Copy**, **Incolla**, **Annulla**e altri) a un documento attivo. Per ulteriori informazioni, vedere [destinazioni comandi](../mfc/message-handling-and-command-targets.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)

