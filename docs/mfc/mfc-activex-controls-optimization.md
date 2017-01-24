---
title: "Controlli ActiveX MFC: ottimizzazione | Microsoft Docs"
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
  - "contesti di dispositivo, integri per i controlli ActiveX MFC"
  - "controlli ActiveX senza sfarfallio"
  - "MFC (controlli ActiveX), stato attivo/interattivo"
  - "MFC (controlli ActiveX), senza sfarfallio"
  - "MFC (controlli ActiveX), interazione del mouse"
  - "MFC (controlli ActiveX), ottimizzazione"
  - "MFC (controlli ActiveX), senza finestra"
  - "ottimizzazione, controlli ActiveX"
  - "ottimizzazione delle prestazioni, controlli ActiveX"
  - "prestazioni, controlli ActiveX"
  - "controlli ActiveX MFC senza finestra"
ms.assetid: 8b11f26a-190d-469b-b594-5336094a0109
caps.latest.revision: 8
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: ottimizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono illustrate le tecniche che consentono di ottimizzare i controlli ActiveX per ottenere prestazioni migliori.  
  
 Gli argomenti [Disabilitare l'attivazione quando l'opzione visibile](../mfc/turning-off-the-activate-when-visible-option.md) e [Creazione di interazione con il mouse mentre inattivo](../mfc/providing-mouse-interaction-while-inactive.md) vengono descritti i comandi che non creano una finestra fino a enabled su.  L'argomento [Creazione di attivazione senza finestra](../mfc/providing-windowless-activation.md) vengono descritti i controlli che non creano una finestra, anche quando vengono attivati.  
  
 Le finestre sono due svantaggi importanti per gli oggetti OLE: impediscono agli oggetti da essere trasparenti o assume quando l'opzione attiva e verranno aggiunti un grande sovraccarico per la creazione di istanze e la visualizzazione dei controlli.  In genere, creare una finestra richiede 60 percento della creazione di un controllo.  Con una singola finestra condivisa \(in genere il contenitore\) e il codice, inviando un controllo riceve gli stessi servizi della finestra, in genere senza una riduzione delle prestazioni.  Associata una finestra è principalmente sovraccarico non necessario per l'oggetto.  
  
 Alcune ottimizzazioni necessariamente non migliorano le prestazioni quando il controllo viene utilizzato in alcuni contenitori.  Ad esempio, i contenitori rilasciare prima di 1996 non è supportato l'attivazione senza finestra, in modo da implementare questa funzionalità non sarà disponibile un vantaggio nei contenitori precedenti.  Tuttavia, quasi ogni contenitore supporta la persistenza, in modo da ottimizzare il codice della persistenza del controllo probabilmente è possibile migliorare le prestazioni nel contenitore.  Se il controllo è specificamente progettato per essere utilizzato con un particolare tipo di contenitore, potrebbe essere necessario verificare che di queste ottimizzazioni è supportato da tale contenitore.  Generalmente tuttavia, è necessario tentare di implementare un numero qualsiasi di queste tecniche quali sono applicabili al controllo particolare proteggere il controllo esegue anche come probabilmente in una vasta gamma di contenitori.  
  
 È possibile implementare molte di queste ottimizzazioni con [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md), nella pagina di [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md).  
  
### OLE opzioni di ottimizzazione della Creazione guidata controllo ActiveX MFC  
  
|Verificare l'impostazione in Creazione guidata controllo ActiveX MFC|Azione|Ulteriori informazioni|  
|--------------------------------------------------------------------------|------------|----------------------------|  
|casella di controllo**Attiva quando visibile**|Clear|[Disabilitare l'attivazione quando l'opzione visibile](../mfc/turning-off-the-activate-when-visible-option.md)|  
|casella di controllo**Attivazione senza finestra**|Select|[Creazione di attivazione senza finestra](../mfc/providing-windowless-activation.md)|  
|casella di controllo**Contesto di dispositivo integro**|Select|[Utilizzando un contesto di dispositivo Unclipped](../mfc/using-an-unclipped-device-context.md)|  
|casella di controllo**Attivazione senza sfarfallio**|Select|[Creazione di attivazione senza sfarfallio](../mfc/providing-flicker-free-activation.md)|  
|casella di controllo**Notifiche del puntatore del mouse quando inattivo**|Select|[Creazione di interazione con il mouse mentre inattivo](../mfc/providing-mouse-interaction-while-inactive.md)|  
|casella di controllo**Codice ottimizzato**|Select|[Disegno del controllo di ottimizzazione](../mfc/optimizing-control-drawing.md)|  
  
 Per informazioni dettagliate sulle funzioni membro che implementano queste ottimizzazioni, vedere [COleControl](../mfc/reference/colecontrol-class.md).  Le funzioni membro vengono elencate da utilizzare, come [Operazioni senza finestra](http://msdn.microsoft.com/it-it/e9e28f79-9a70-4ae4-a5aa-b3e92f1904df) e [Funzioni di inattività di gestione del puntatore](http://msdn.microsoft.com/it-it/e9e28f79-9a70-4ae4-a5aa-b3e92f1904df).  
  
 Per ulteriori informazioni, vedere:  
  
-   [Persistenza e inizializzazione di ottimizzazione](../mfc/optimizing-persistence-and-initialization.md)  
  
-   [Creazione di attivazione senza finestra](../mfc/providing-windowless-activation.md)  
  
-   [Disabilitare l'attivazione quando l'opzione visibile](../mfc/turning-off-the-activate-when-visible-option.md)  
  
-   [Creazione di interazione con il mouse mentre inattivo](../mfc/providing-mouse-interaction-while-inactive.md)  
  
-   [Creazione di attivazione senza sfarfallio](../mfc/providing-flicker-free-activation.md)  
  
-   [Utilizzando un contesto di dispositivo Unclipped](../mfc/using-an-unclipped-device-context.md)  
  
-   [Disegno del controllo di ottimizzazione](../mfc/optimizing-control-drawing.md)  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)