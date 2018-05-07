---
title: Impostazioni controllo, creazione guidata controllo ActiveX MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfc.ctl.settings
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX Control Wizard, control settings
ms.assetid: 2ccaa4fc-0d52-413e-afa3-ecd474c3f6f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2161cea739d918bc0f5772a6cb08c29082a6e670
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="control-settings-mfc-activex-control-wizard"></a>Impostazioni controllo, Creazione guidata controllo ActiveX MFC
Utilizzare questa pagina della procedura guidata per specificare la modalità di controllo per il comportamento. Ad esempio, è possibile basare il controllo sui tipi di controllo di Windows standard, ottimizzare il comportamento e l'aspetto o indicare che il controllo può fungere da contenitore per altri controlli.  
  
 Per ulteriori informazioni su come selezionare le opzioni in questa pagina per ottimizzare l'efficienza del controllo, vedere [controlli ActiveX MFC: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Creare un controllo basato su**  
 In questo elenco, è possibile selezionare il tipo di controllo da cui deve ereditare al controllo. L'elenco è un subset delle classi di controlli che sono disponibili per `CreateWindowEx` e altri controlli comuni che vengono specificati in commctrl. La selezione determina lo stile del controllo nel `PreCreateWindow` funzionare nel *ProjName*file CTRL. Per ulteriori informazioni, vedere [controlli ActiveX MFC: creazione di sottoclassi di un controllo Windows](../../mfc/mfc-activex-controls-subclassing-a-windows-control.md).  
  
|Control|Descrizione|  
|-------------|-----------------|  
|**PULSANTE**|Un controllo pulsante di Windows|  
|**CONTROLLO COMBOBOX**|Un controllo casella combinata di Windows|  
|**MODIFICA**|Un controllo casella di modifica di Windows|  
|**CASELLA DI RIEPILOGO**|Un controllo casella di riepilogo di Windows|  
|**BARRA DI SCORRIMENTO**|Un controllo barra di scorrimento di Windows|  
|**STATICO**|Un controllo statico di Windows|  
|**msctls_hotkey32**|Un controllo di comune tasto di scelta|  
|**msctls_progress32**|Un indicatore di stato controllo comune|  
|**msctls_statusbar32**|Un controllo comune barra di stato|  
|**msctls_trackbar32**|Una traccia di controllo comune barra|  
|**msctls_updown32**|Un pulsante di selezione (o di scorrimento) controllo comune|  
|**SysAnimate32**|Un controllo comune di animazione|  
|**SysHeader32**|Un controllo di intestazione comune|  
|**SysListView32**|Un controllo comune di visualizzazione elenco|  
|**SysTabControl32**|Un controllo comune di scheda|  
|**SysTreeView32**|Un controllo comune di visualizzazione albero|  
  
 **Attivo quando visibile**  
 Specifica che viene creata una finestra per il controllo quando vi si accede. Per impostazione predefinita, il **attivo quando visibile** opzione è selezionata. Se si desidera rinviare l'attivazione del controllo fino a quando il contenitore è necessario (ad esempio, quando un utente fa clic con il mouse), deselezionare questa opzione. Quando questa funzionalità è disattivata, il controllo richiede la creazione di una finestra fino a quando non è obbligatorio. Per ulteriori informazioni, vedere [la disattivazione dell'opzione attivo quando visibile](../../mfc/turning-off-the-activate-when-visible-option.md).  
  
 **Invisibili in fase di esecuzione**  
 Specifica che il controllo non dispone di alcuna interfaccia utente in fase di esecuzione. Un timer è un tipo di controllo che è possibile sia invisibile.  
  
 **È una finestra di dialogo informazioni su**  
 Specifica che il controllo ha lo standard di Windows **su** nella finestra di dialogo che visualizza il numero di versione e informazioni sul copyright.  
  
> [!NOTE]
>  Come l'utente accede alla Guida per il controllo dipende dalla modalità implementazione della Guida e se è stata integrata la Guida di controllo con il contenitore. Per ulteriori informazioni sull'integrazione della Guida, nel [MSDN Library](http://go.microsoft.com/fwlink/p/?linkid=150542) sito Web, cercare "Aggiunta sensibile al contesto della Guida per un controllo ActiveX MFC".  
  
 Quando si seleziona questa opzione, inserisce il `AboutBox` metodo nella classe del controllo di progetto di controllo (C*ProjName*CTRL) e AboutBox viene aggiunto alla mappa di invio del progetto. Questa opzione è selezionata per impostazione predefinita.  
  
 **Codice di disegno ottimizzato**  
 Specifica che il contenitore ripristina automaticamente gli oggetti GDI originali dopo che tutti i controlli contenitore, che sono stati disegnati, allo stesso contesto di dispositivo. Per ulteriori informazioni su questa funzionalità, vedere [ottimizzazione disegno dei controlli](../../mfc/optimizing-control-drawing.md).  
  
 **Attivazione senza finestra**  
 Specifica che il controllo non produce una finestra quando è attiva. Consente l'attivazione senza finestra per i controlli non rettangolari o trasparenti, e un controllo senza finestra richiede richiede meno overhead di sistema rispetto a un controllo con una finestra. Per un contesto di dispositivo integro o l'attivazione senza sfarfallio non consente un controllo senza finestra. I contenitori creati prima 1996 non supportano l'attivazione senza finestra. Per ulteriori informazioni su come usare questa opzione, vedere [attivazione senza finestra](../../mfc/providing-windowless-activation.md).  
  
 **Contesto di dispositivo integro**  
 Esegue l'override [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags) nell'intestazione del controllo (*projname*CTRL. h) per disabilitare la chiamata a `IntersectClipRect` effettuate da `COleControl`. Quando si seleziona questa opzione, viene fornita una maggiore velocità. Se si seleziona **attivazione senza finestra**, questa funzionalità non è disponibile. Per ulteriori informazioni, vedere [utilizzando un contesto di dispositivo integro](../../mfc/using-an-unclipped-device-context.md).  
  
 **Attivazione senza sfarfallio**  
 Elimina le operazioni di disegno e lo sfarfallio visivo che si verificano tra gli stati attivo e inattivi del controllo. Se si seleziona **attivazione senza finestra**, questa funzionalità non è disponibile. Quando si imposta questa opzione, il `noFlickerActivate` flag è uno dei flag restituiti da [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags). Per ulteriori informazioni, vedere [fornendo attivazione senza sfarfallio](../../mfc/providing-flicker-free-activation.md).  
  
 **Disponibile nella finestra di dialogo Inserisci oggetto**  
 Specifica che il controllo sarà disponibile nel **Inserisci oggetto** la finestra di dialogo per i contenitori attivati. Quando si seleziona questa opzione, il `afxRegInsertable` flag è uno dei flag restituiti da `AfxOleRegisterControlClass`. Tramite il **Inserisci oggetto** la finestra di dialogo, un utente può inserire appena creato o gli oggetti esistenti in un documento composito.  
  
 **Notifiche del puntatore del mouse quando inattivo**  
 Consente al controllo di elaborare le notifiche del puntatore del mouse, se il controllo è attivo o meno. Quando si seleziona questa opzione, il `pointerInactive` flag è uno dei flag restituiti da [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags). Per ulteriori informazioni su come usare questa opzione, vedere [fornendo Mouse Interaction While Inactive](../../mfc/providing-mouse-interaction-while-inactive.md).  
  
 **Si comporta come un semplice controllo frame**  
 Specifica che il controllo è un contenitore per altri controlli impostando il `OLEMISC_SIMPLEFRAME` bit per il controllo. Per ulteriori informazioni sul [MSDN Library](http://go.microsoft.com/fwlink/p/?linkid=150542) sito Web, cercare "Simple Frame Site Containment".  
  
 **Carica le proprietà in modo asincrono**  
 Consente il ripristino dei dati asincroni precedenti e avvia un nuovo caricamento della proprietà asincrona del controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)   
 [Impostazioni applicazione, creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)   
 [Nomi controllo, Creazione guidata controllo ActiveX MFC](../../mfc/reference/control-names-mfc-activex-control-wizard.md)

