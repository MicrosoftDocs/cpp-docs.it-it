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
ms.openlocfilehash: b4e12889ca1bb5f4bb423a1f1ede1c396f8d60b5
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84615394"
---
# <a name="mfc-activex-controls-optimization"></a>Controlli ActiveX MFC: ottimizzazione

Questo articolo illustra le tecniche che è possibile usare per ottimizzare i controlli ActiveX per ottenere prestazioni migliori.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Gli argomenti che [spengono l'opzione attiva se visibile](turning-off-the-activate-when-visible-option.md) e [forniscono interazione con il mouse mentre inattivo](providing-mouse-interaction-while-inactive.md) discutono i controlli che non creano una finestra fino a quando non vengono attivati. L'argomento che [fornisce l'attivazione senza finestra](providing-windowless-activation.md) illustra i controlli che non creano mai una finestra, anche quando vengono attivati.

Windows presenta due svantaggi principali per gli oggetti OLE: impedisce che gli oggetti siano trasparenti o non rettangolari quando sono attivi e aggiungono un sovraccarico elevato per la creazione di istanze e la visualizzazione di controlli. In genere, la creazione di una finestra richiede il 60% del tempo di creazione di un controllo. Con una singola finestra condivisa (in genere il contenitore) e un codice di invio, un controllo riceve gli stessi servizi della finestra, in genere senza perdita di prestazioni. La presenza di una finestra è principalmente un sovraccarico superfluo per l'oggetto.

Alcune ottimizzazioni non migliorano necessariamente le prestazioni quando il controllo viene usato in alcuni contenitori. Ad esempio, i contenitori rilasciati prima del 1996 non supportano l'attivazione senza finestra, quindi l'implementazione di questa funzionalità non fornirà un vantaggio nei contenitori precedenti. Tuttavia, quasi ogni contenitore supporta la persistenza, quindi l'ottimizzazione del codice di persistenza del controllo può migliorare le prestazioni in qualsiasi contenitore. Se il controllo viene progettato in modo specifico per essere usato con un determinato tipo di contenitore, è possibile cercare quali ottimizzazioni sono supportate da tale contenitore. In generale, tuttavia, è consigliabile provare a implementare il maggior numero di queste tecniche applicabili al controllo specifico, in modo da garantire che il controllo possa essere eseguito e possibilmente in un'ampia gamma di contenitori.

È possibile implementare molte di queste ottimizzazioni tramite la [creazione guidata controllo ActiveX MFC](reference/mfc-activex-control-wizard.md), nella pagina [Impostazioni controllo](reference/control-settings-mfc-activex-control-wizard.md) .

### <a name="mfc-activex-control-wizard-ole-optimization-options"></a>Opzioni di ottimizzazione OLE della creazione guidata controllo ActiveX MFC

|Impostazione del controllo nella creazione guidata controllo ActiveX MFC|Azione|Altre informazioni|
|-------------------------------------------------------|------------|----------------------|
|Casella di controllo **attiva quando visibile**|Clear|[Disattivazione dell'opzione attiva se visibile](turning-off-the-activate-when-visible-option.md)|
|Casella di controllo **attivazione senza finestra**|Select|[Attivazione senza finestra](providing-windowless-activation.md)|
|Casella di controllo **contesto dispositivo non ritagliato**|Select|[Uso di un contesto di dispositivo integro](using-an-unclipped-device-context.md)|
|Casella **di controllo attivazione senza sfarfallio**|Select|[Offrire l'attivazione senza sfarfallio](providing-flicker-free-activation.md)|
|Casella di controllo **notifiche puntatore del mouse quando inattivo**|Select|[Inserimento di interazione del mouse in stato di inattività](providing-mouse-interaction-while-inactive.md)|
|Casella di controllo **codice di disegno ottimizzato**|Select|[Ottimizzazione del disegno dei controlli](optimizing-control-drawing.md)|

Per informazioni dettagliate sulle funzioni membro che implementano queste ottimizzazioni, vedere [COleControl](reference/colecontrol-class.md).

Per altre informazioni, vedere:

- [Ottimizzazione di persistenza e inizializzazione](optimizing-persistence-and-initialization.md)

- [Attivazione senza finestra](providing-windowless-activation.md)

- [Disattivazione dell'opzione attiva se visibile](turning-off-the-activate-when-visible-option.md)

- [Inserimento di interazione del mouse in stato di inattività](providing-mouse-interaction-while-inactive.md)

- [Offrire l'attivazione senza sfarfallio](providing-flicker-free-activation.md)

- [Uso di un contesto di dispositivo integro](using-an-unclipped-device-context.md)

- [Ottimizzazione del disegno dei controlli](optimizing-control-drawing.md)

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
