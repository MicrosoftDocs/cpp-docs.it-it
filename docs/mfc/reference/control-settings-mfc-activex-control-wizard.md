---
title: Impostazioni controllo, Creazione guidata controllo ActiveX MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.ctl.settings
helpviewer_keywords:
- MFC ActiveX Control Wizard, control settings
ms.assetid: 2ccaa4fc-0d52-413e-afa3-ecd474c3f6f0
ms.openlocfilehash: 34cc49fff88399a6c3cf5f7db71410c88e5c9bab
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57289637"
---
# <a name="control-settings-mfc-activex-control-wizard"></a>Impostazioni controllo, Creazione guidata controllo ActiveX MFC

Utilizzare questa pagina della procedura guidata per specificare come si vuole il controllo a un comportamento. Ad esempio, è possibile basare il controllo sui tipi di controllo di Windows standard, ottimizzare il comportamento e l'aspetto o indicare che il controllo può fungere da contenitore per altri controlli.

Per altre informazioni su come selezionare le opzioni in questa pagina per migliorare l'efficienza del controllo, vedere [controlli ActiveX MFC: Ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).

## <a name="uielement-list"></a>Elenco UIElement

- **Creare un controllo basato su**

   In questo elenco, è possibile selezionare il tipo di controllo da cui debba ereditare il controllo. L'elenco è un subset delle classi di controlli disponibili per `CreateWindowEx` e altri controlli comuni che vengono specificati in commctrl. h. La selezione determina lo stile del controllo nel `PreCreateWindow` funzionare nel *ProjName*file cpp. Per altre informazioni, vedere [controlli ActiveX MFC: Crea una sottoclasse di un controllo Windows](../../mfc/mfc-activex-controls-subclassing-a-windows-control.md).

   |Control|Descrizione|
   |-------------|-----------------|
   |**PULSANTE**|Un controllo pulsante di Windows|
   |**COMBOBOX**|Un controllo casella combinata di Windows|
   |**EDIT**|Un controllo casella di modifica di Windows|
   |**LISTBOX**|Un controllo casella di riepilogo di Windows|
   |**SCROLLBAR**|Un controllo barra di scorrimento di Windows|
   |**STATIC**|Un controllo statico di Windows|
   |**msctls_hotkey32**|Un controllo di comune tasto di scelta|
   |**msctls_progress32**|Un indicatore di stato controllo comune|
   |**msctls_statusbar32**|Un controllo comune barra di stato|
   |**msctls_trackbar32**|Una traccia di controllo comune barra|
   |**msctls_updown32**|Un pulsante di selezione (o giù) controllo comune|
   |**SysAnimate32**|Controllo animazione comune|
   |**SysHeader32**|Un controllo comune di intestazione|
   |**SysListView32**|Un controllo comune visualizzazione elenco|
   |**SysTabControl32**|Un controllo comune di scheda|
   |**SysTreeView32**|Un controllo comune visualizzazione struttura ad albero|

- **Attivo quando visibile**

   Specifica che viene creata una finestra del controllo quando vi si accede. Per impostazione predefinita, il **attivo quando visibile** opzione è selezionata. Se si desidera rinviare l'attivazione del controllo fino a quando non lo richiede il contenitore (ad esempio, quando un utente fa clic con il mouse), deselezionare questa opzione. Quando questa funzionalità è disattivata, il controllo non devono sostenere i costi per la creazione della finestra fino a quando non è necessario. Per altre informazioni, vedere [la disattivazione dell'opzione attivo quando visibile](../../mfc/turning-off-the-activate-when-visible-option.md).

- **Invisibili in fase di esecuzione**

   Specifica che il controllo non dispone di alcuna interfaccia utente in fase di esecuzione. Un timer è un tipo di controllo che è possibile sia invisibile.

- **Dispone di una finestra di dialogo About**

   Specifica che il controllo dispone di Windows standard **sulle** della finestra di dialogo che visualizza le informazioni sul copyright e il numero di versione.

   > [!NOTE]
   > Modo in cui l'utente accede alla Guida per il controllo dipende dal modo in cui è stata implementata la Guida in linea e indica se è stata integrata la Guida di controllo con l'aiuto di contenitore. Per altre informazioni sull'integrazione della Guida, nella [MSDN Library](http://go.microsoft.com/fwlink/p/?linkid=150542) sito Web, cercare "Aggiunta sensibili al contesto della Guida per un controllo ActiveX MFC".

   Quando si seleziona questa opzione, inserisce il `AboutBox` del controllo di metodo nella classe del controllo di progetto (C*ProjName*CTRL. cpp) e AboutBox viene aggiunto alla mappa di invio del progetto. Questa opzione è selezionata per impostazione predefinita.

- **Con ottimizzazione per la creazione di codice**

   Specifica che il contenitore consente di ripristinare gli oggetti GDI originali automaticamente dopo che tutti i controlli contenitore, che sono stati disegnati, dello stesso contesto di dispositivo. Per altre informazioni su questa funzionalità, vedere [ottimizzazione di disegno dei controlli](../../mfc/optimizing-control-drawing.md).

- **Attivazione senza finestra**

   Specifica che il controllo non produce una finestra quando viene attivato. Consente l'attivazione senza finestra per i controlli non rettangolari o trasparenti e richiede un controllo senza finestra richiede meno overhead di sistema rispetto a un controllo dotato di una finestra. Non consente un controllo senza finestra per un contesto di dispositivo integro o l'attivazione senza sfarfallio. I contenitori creati prima 1996 non supportano l'attivazione senza finestra. Per altre informazioni su come usare questa opzione, vedere [attivazione senza finestra](../../mfc/providing-windowless-activation.md).

- **Contesto di dispositivo integro**

   Esegue l'override [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags) nell'intestazione del controllo (*projname*CTRL. h) per disabilitare la chiamata a `IntersectClipRect` effettuate da `COleControl`. Quando si seleziona questa opzione, offre una maggiore velocità. Se si seleziona **attivazione senza finestra**, questa funzionalità non è disponibile. Per altre informazioni, vedere [utilizzando un contesto di dispositivo integro](../../mfc/using-an-unclipped-device-context.md).

- **Attivazione senza sfarfallio**

   Elimina le operazioni di disegno e lo sfarfallio che si verificano tra gli stati attivi e inattivi del controllo. Se si seleziona **attivazione senza finestra**, questa funzionalità non è disponibile. Quando si imposta questa opzione, il `noFlickerActivate` flag è uno dei flag restituiti da [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags). Per altre informazioni, vedere [fornendo attivazione senza sfarfallio](../../mfc/providing-flicker-free-activation.md).

- **Disponibile nella finestra di dialogo Inserisci oggetto**

   Specifica che il controllo sarà disponibile nel **Inserisci oggetto** finestra di dialogo per i contenitori abilitati. Quando si seleziona questa opzione, il `afxRegInsertable` flag è uno dei flag restituiti da `AfxOleRegisterControlClass`. Tramite il **Inserisci oggetto** finestra di dialogo, un utente può inserire appena creato o gli oggetti esistenti in un documento composito.

- **Notifiche del puntatore del mouse quando inattivo**

   Abilita il controllo per elaborare le notifiche del puntatore del mouse, se il controllo è attivo o meno. Quando si seleziona questa opzione, il `pointerInactive` flag è uno dei flag restituiti da [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags). Per altre informazioni su come usare questa opzione, vedere [Providing Mouse interazione mentre Inactive](../../mfc/providing-mouse-interaction-while-inactive.md).

- **Si comporta come un semplice controllo frame**

   Specifica che il controllo è un contenitore per altri controlli, impostando il bit per il controllo OLEMISC_SIMPLEFRAME. Per altre informazioni, nella [MSDN Library](http://go.microsoft.com/fwlink/p/?linkid=150542) sito Web, ricerca di "Contenimento del sito Frame semplice".

- **Carica le proprietà in modo asincrono**

   Consente il ripristino dei dati asincroni precedenti e avvia un nuovo caricamento della proprietà asincrona del controllo.

## <a name="see-also"></a>Vedere anche

[Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)<br/>
[Impostazioni applicazione, Creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)<br/>
[Nomi controllo, Creazione guidata controllo ActiveX MFC](../../mfc/reference/control-names-mfc-activex-control-wizard.md)
