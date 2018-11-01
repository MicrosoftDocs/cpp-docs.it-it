---
title: 'Controlli ActiveX MFC: ottimizzazione'
ms.date: 09/12/2018
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
ms.openlocfilehash: cc4d210abe0bca5ba8d3a442796173111f45f6e6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50588565"
---
# <a name="mfc-activex-controls-optimization"></a>Controlli ActiveX MFC: ottimizzazione

Questo articolo illustra le tecniche che è possibile usare per ottimizzare i controlli ActiveX per ottenere prestazioni migliori.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Gli argomenti [attivazione Off l'opzione attivo quando visibile](../mfc/turning-off-the-activate-when-visible-option.md) e [Providing Mouse interazione mentre Inactive](../mfc/providing-mouse-interaction-while-inactive.md) illustrati i controlli che non creano una finestra fino a quando non attivato. L'argomento [attivazione senza finestra](../mfc/providing-windowless-activation.md) vengono illustrati i controlli che mai creano una finestra, anche quando vengono attivati.

Windows hanno due svantaggi principali per gli oggetti OLE: cui impedire gli oggetti non rettangolari quando è attivo o trasparente e aggiungono un notevole overhead per la creazione di un'istanza e la visualizzazione dei controlli. Creazione di una finestra richiede in genere, il 60% del tempo di creazione di un controllo. Con una singola finestra condivisa (in genere del contenitore) e un codice di invio, un controllo riceve gli stessi servizi di finestra, in genere senza un calo delle prestazioni. Disporre di una finestra è principalmente un sovraccarico non necessario per l'oggetto.

Alcune ottimizzazioni non necessariamente migliorare le prestazioni quando il controllo viene usato in certi contenitori. Contenitori rilasciati antecedenti al 1996, ad esempio, non supporta l'attivazione senza finestra, in modo che l'implementazione di questa funzionalità non offre un vantaggio nei contenitori meno recenti. Tuttavia, quasi ogni contenitore supporta la persistenza, in modo da ottimizzare il codice di salvataggio permanente del controllo in genere può migliorare le prestazioni in qualsiasi contenitore. Se il controllo in modo specifico deve essere usato con un particolare tipo di contenitore, è possibile eseguire la ricerca quali di queste ottimizzazioni è supportato da quel contenitore. In generale, tuttavia, è consigliabile implementare poiché molte di queste tecniche sono applicabili a un controllo particolare per garantire che il controllo esegue, nonché è probabilmente possibile in un'ampia gamma di contenitori.

È possibile implementare molte di queste ottimizzazioni tramite il [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md)via le [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina.

### <a name="mfc-activex-control-wizard-ole-optimization-options"></a>Opzioni di ottimizzazione OLE Creazione guidata controllo ActiveX MFC

|Impostazione di controllo nella creazione guidata controllo ActiveX MFC|Operazione|Altre informazioni|
|-------------------------------------------------------|------------|----------------------|
|**Attiva al momento visibile** casella di controllo|Cancella|[La disattivazione di attivazione quando opzione visibile](../mfc/turning-off-the-activate-when-visible-option.md)|
|**Attivazione senza finestra** casella di controllo|Seleziona|[Attivazione senza finestra](../mfc/providing-windowless-activation.md)|
|**Contesto di dispositivo integro** casella di controllo|Seleziona|[Uso di un contesto di dispositivo integro](../mfc/using-an-unclipped-device-context.md)|
|**Attivazione senza sfarfallio** casella di controllo|Seleziona|[Offrire l'attivazione senza sfarfallio](../mfc/providing-flicker-free-activation.md)|
|**Passare il mouse quando inattivo le notifiche del puntatore** casella di controllo|Seleziona|[Inserimento di interazione del mouse in stato di inattività](../mfc/providing-mouse-interaction-while-inactive.md)|
|**Codice di disegno ottimizzato** casella di controllo|Seleziona|[Ottimizzazione del disegno dei controlli](../mfc/optimizing-control-drawing.md)|

Per informazioni dettagliate sulle funzioni membro che implementano queste ottimizzazioni, vedere [COleControl](../mfc/reference/colecontrol-class.md).

Per altre informazioni, vedere:

- [Ottimizzazione di persistenza e inizializzazione](../mfc/optimizing-persistence-and-initialization.md)

- [Attivazione senza finestra](../mfc/providing-windowless-activation.md)

- [La disattivazione di attivazione quando opzione visibile](../mfc/turning-off-the-activate-when-visible-option.md)

- [Inserimento di interazione del mouse in stato di inattività](../mfc/providing-mouse-interaction-while-inactive.md)

- [Offrire l'attivazione senza sfarfallio](../mfc/providing-flicker-free-activation.md)

- [Uso di un contesto di dispositivo integro](../mfc/using-an-unclipped-device-context.md)

- [Ottimizzazione del disegno dei controlli](../mfc/optimizing-control-drawing.md)

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

