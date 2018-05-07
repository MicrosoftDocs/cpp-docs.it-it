---
title: 'Controlli ActiveX MFC: Ottimizzazione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], windowless
- flicker-free ActiveX controls
- MFC ActiveX controls [MFC], mouse interaction
- device contexts, unclipped for MFC ActiveX controls
- MFC ActiveX controls [MFC], optimizing
- performance, ActiveX controls
- optimization, ActiveX controls
- MFC ActiveX controls [MFC], flicker-free
- windowless MFC ActiveX controls
- MFC ActiveX controls [MFC], active/inactive state
- optimizing performance, ActiveX controls
ms.assetid: 8b11f26a-190d-469b-b594-5336094a0109
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c91f147637b53250f8d373af9950d6205c82d3e3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-activex-controls-optimization"></a>Controlli ActiveX MFC: ottimizzazione
Questo articolo illustra le tecniche che è possibile utilizzare per ottimizzare i controlli ActiveX per ottenere prestazioni migliori.  
  
 Gli argomenti [attivazione disattivare l'opzione attivo quando visibile](../mfc/turning-off-the-activate-when-visible-option.md) e [fornendo Mouse Interaction While Inactive](../mfc/providing-mouse-interaction-while-inactive.md) illustrati i controlli che creano una finestra finché non attivata. L'argomento [attivazione senza finestra](../mfc/providing-windowless-activation.md) vengono descritti i controlli che non creano mai una finestra, anche quando vengono attivati.  
  
 Windows hanno due svantaggi principali per gli oggetti OLE: impediscono agli oggetti di essere trasparente o non rettangolari quando sono attive e aggiungono un notevole overhead per la creazione di un'istanza e la visualizzazione dei controlli. Creazione di una finestra richiede in genere, 60 percento della fase di creazione di un controllo. Con una sola finestra condivisa (in genere del contenitore) e codice di invio, un controllo riceve gli stessi servizi di finestra, in genere senza un calo delle prestazioni. Disporre di una finestra è principalmente un sovraccarico non necessario per l'oggetto.  
  
 Alcune ottimizzazioni non necessariamente migliorare le prestazioni quando il controllo viene utilizzato in alcuni contenitori. Contenitori delle versioni antecedenti al 1996, ad esempio, non supportano l'attivazione senza finestra, pertanto l'implementazione di questa funzionalità non fornirà un vantaggio nei contenitori meno recenti. Tuttavia, quasi ogni contenitore supporta la persistenza, in modo ottimizzazione del codice di persistenza del controllo in genere può migliorare le prestazioni in qualsiasi contenitore. Se il controllo è concepito appositamente per essere utilizzato con un particolare tipo di contenitore, può eseguire ricerche quali di queste ottimizzazioni è supportato da quel contenitore. In generale, tuttavia, è consigliabile per l'implementazione di molte di queste tecniche sono applicabili a un controllo particolare per garantire che il controllo esegue nonché è probabilmente possibile in un'ampia gamma di contenitori.  
  
 È possibile implementare molte di queste ottimizzazioni tramite il [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md)via di [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina.  
  
### <a name="mfc-activex-control-wizard-ole-optimization-options"></a>Opzioni di ottimizzazione OLE Creazione guidata controllo ActiveX MFC  
  
|Impostazione di controllo nella creazione guidata controllo ActiveX MFC|Operazione|Altre informazioni|  
|-------------------------------------------------------|------------|----------------------|  
|**Attivare quando visibile** casella di controllo|Cancella|[La disattivazione di attivo quando visibile (opzione)](../mfc/turning-off-the-activate-when-visible-option.md)|  
|**Attivazione senza finestra** casella di controllo|Seleziona|[Attivazione senza finestra](../mfc/providing-windowless-activation.md)|  
|**Contesto di dispositivo integro** casella di controllo|Seleziona|[Uso di un contesto di dispositivo integro](../mfc/using-an-unclipped-device-context.md)|  
|**Attivazione senza sfarfallio** casella di controllo|Seleziona|[Offrire l'attivazione senza sfarfallio](../mfc/providing-flicker-free-activation.md)|  
|**Passa il mouse notifiche del puntatore quando inattivo** casella di controllo|Seleziona|[Inserimento di interazione del mouse in stato di inattività](../mfc/providing-mouse-interaction-while-inactive.md)|  
|**Codice di disegno ottimizzato** casella di controllo|Seleziona|[Ottimizzazione del disegno dei controlli](../mfc/optimizing-control-drawing.md)|  
  
 Per informazioni dettagliate sulle funzioni membro che implementano queste ottimizzazioni, vedere [COleControl](../mfc/reference/colecontrol-class.md). Le funzioni membro sono elencate da utilizzare, ad esempio [privi di finestra operazioni](http://msdn.microsoft.com/en-us/e9e28f79-9a70-4ae4-a5aa-b3e92f1904df) e [funzioni di gestione con puntatore inattivo](http://msdn.microsoft.com/en-us/e9e28f79-9a70-4ae4-a5aa-b3e92f1904df).  
  
 Per altre informazioni, vedere:  
  
-   [Ottimizzazione di persistenza e inizializzazione](../mfc/optimizing-persistence-and-initialization.md)  
  
-   [Attivazione senza finestra](../mfc/providing-windowless-activation.md)  
  
-   [La disattivazione di attivo quando visibile (opzione)](../mfc/turning-off-the-activate-when-visible-option.md)  
  
-   [Inserimento di interazione del mouse in stato di inattività](../mfc/providing-mouse-interaction-while-inactive.md)  
  
-   [Offrire l'attivazione senza sfarfallio](../mfc/providing-flicker-free-activation.md)  
  
-   [Uso di un contesto di dispositivo integro](../mfc/using-an-unclipped-device-context.md)  
  
-   [Ottimizzazione del disegno dei controlli](../mfc/optimizing-control-drawing.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

