---
title: Controllare le impostazioni, creazione guidata controllo ActiveX MFC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.ctl.settings
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX Control Wizard, control settings
ms.assetid: 2ccaa4fc-0d52-413e-afa3-ecd474c3f6f0
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 35ec579e6f777a3dffd87adc5a86af2ea38b30f4
ms.lasthandoff: 02/24/2017

---
# <a name="control-settings-mfc-activex-control-wizard"></a>Impostazioni controllo, Creazione guidata controllo ActiveX MFC
Utilizzare questa pagina della procedura guidata per specificare come si desidera che il controllo si comporta. Ad esempio, si può basare il controllo sui tipi di controllo di Windows standard, ottimizzare il comportamento e l'aspetto o indicare che il controllo può fungere da contenitore per altri controlli.  
  
 Per ulteriori informazioni su come selezionare le opzioni in questa pagina per ottimizzare l'efficienza del controllo, vedere [controlli ActiveX MFC: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Creare un controllo basato su**  
 In questo elenco, è possibile selezionare il tipo di controllo dalla quale debba ereditare il controllo. L'elenco è un subset delle classi di controlli disponibili per `CreateWindowEx` e i controlli comuni aggiuntivi che vengono specificati in commctrl. h. La selezione determina lo stile del controllo nel `PreCreateWindow` in funzione il *ProjName*CTRL. cpp file. Per ulteriori informazioni, vedere [controlli ActiveX MFC: creazione di sottoclassi di un controllo Windows](../../mfc/mfc-activex-controls-subclassing-a-windows-control.md).  
  
|Controllo|Descrizione|  
|-------------|-----------------|  
|**PULSANTE**|Un controllo button Windows|  
|**CASELLA COMBINATA**|Un controllo casella combinata di Windows|  
|**MODIFICA**|Controllo della casella di testo di Windows.|  
|**CASELLA DI RIEPILOGO**|Un controllo casella di riepilogo di Windows|  
|**BARRA DI SCORRIMENTO**|Un controllo barra di scorrimento di Windows|  
|**STATICO**|Un controllo statico di Windows|  
|**msctls_hotkey32**|Un controllo di comune tasto di scelta|  
|**msctls_progress32**|Un controllo comune barra di stato|  
|**msctls_statusbar32**|Un controllo comune barra di stato|  
|**msctls_trackbar32**|Una traccia di controllo comune barra|  
|**msctls_updown32**|Un pulsante di selezione (o di scorrimento) controllo comune|  
|**SysAnimate32**|Un controllo comune di animazione|  
|**SysHeader32**|Un controllo comune intestazione|  
|**SysListView32**|Un controllo comune visualizzazione elenco|  
|**SysTabControl32**|Un controllo comune|  
|**SysTreeView32**|Un controllo comune visualizzazione struttura ad albero|  
  
 **Attivo quando visibile**  
 Specifica che viene creata una finestra per il controllo quando vi si accede. Per impostazione predefinita, il **attivo quando visibile** opzione è selezionata. Se si desidera rinviare l'attivazione del controllo fino a quando il contenitore è necessario (ad esempio, quando un utente fa clic con il mouse), deselezionare questa opzione. Quando questa funzionalità è disattivata, il controllo richiede la creazione di una finestra fino a quando non è richiesto. Per ulteriori informazioni, vedere [la disattivazione dell'opzione attivo quando visibile](../../mfc/turning-off-the-activate-when-visible-option.md).  
  
 **Invisibile in fase di esecuzione**  
 Specifica che il controllo non dispone di alcuna interfaccia utente in fase di esecuzione. Un timer è un tipo di controllo che si desidera essere invisibile.  
  
 **È una finestra di dialogo informazioni su**  
 Specifica che il controllo dispone di Windows standard **su** nella finestra di dialogo che visualizza il numero di versione e informazioni sul copyright.  
  
> [!NOTE]
>  Come l'utente accede alla Guida per il controllo dipende da come è stata implementata la Guida in linea e se è stata integrata la Guida di controllo con l'aiuto di contenitore. Per ulteriori informazioni su come integrare la Guida, nel [MSDN Library](http://go.microsoft.com/fwlink/linkid=150542) sito Web, cercare "Aggiunta sensibile al contesto della Guida per un controllo ActiveX MFC".  
  
 Quando si seleziona questa opzione, viene inserito il `AboutBox` controllare metodo nella classe del controllo di progetto (C*ProjName*CTRL. cpp) e AboutBox viene aggiunto alla mappa di invio del progetto. Questa opzione è selezionata per impostazione predefinita.  
  
 **Codice di disegno ottimizzato**  
 Specifica che il contenitore ripristina automaticamente gli oggetti GDI originali dopo che tutti i controlli contenitore, che sono stati disegnati, allo stesso contesto di dispositivo. Per ulteriori informazioni su questa funzionalità, vedere [Optimizing Control Drawing](../../mfc/optimizing-control-drawing.md).  
  
 **Attivazione senza finestra**  
 Specifica che il controllo non produce una finestra quando viene attivata. Consente l'attivazione per i controlli non rettangolari o trasparenti e richiede un controllo senza finestra richiede meno overhead di sistema rispetto a un controllo che dispone di una finestra. Un controllo senza finestra non di un contesto di periferica integro o l'attivazione senza sfarfallio. Contenitori creati prima del 1996 non supportano l'attivazione senza finestra. Per ulteriori informazioni su come utilizzare questa opzione, vedere [attivazione senza finestra](../../mfc/providing-windowless-activation.md).  
  
 **Contesto di periferica integro**  
 Esegue l'override di [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags) nell'intestazione del controllo (*projname*CTRL. h) per disabilitare la chiamata a `IntersectClipRect` effettuate da `COleControl`. Quando si seleziona questa opzione, viene fornita una maggiore velocità. Se si seleziona **attivazione senza finestra**, questa funzionalità non è disponibile. Per ulteriori informazioni, vedere [utilizzando un contesto di periferica integro](../../mfc/using-an-unclipped-device-context.md).  
  
 **Attivazione senza sfarfallio**  
 Elimina le operazioni di disegno e lo sfarfallio che si verificano tra gli stati attivi e inattivi del controllo. Se si seleziona **attivazione senza finestra**, questa funzionalità non è disponibile. Quando si imposta questa opzione, il `noFlickerActivate` flag è uno dei flag restituiti da [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags). Per ulteriori informazioni, vedere [fornendo attivazione senza sfarfallio](../../mfc/providing-flicker-free-activation.md).  
  
 **Disponibile nella finestra di dialogo Inserisci oggetto**  
 Specifica che il controllo sarà disponibile nel **Inserisci oggetto** la finestra di dialogo per i contenitori attivati. Quando si seleziona questa opzione, il `afxRegInsertable` flag è uno dei flag restituiti da `AfxOleRegisterControlClass`. Tramite il **Inserisci oggetto** la finestra di dialogo, un utente può inserire appena creato o gli oggetti esistenti in un documento composito.  
  
 **Notifiche del puntatore del mouse quando è inattivo**  
 Consente di elaborare le notifiche del puntatore del mouse, il controllo se il controllo è attivo o meno. Quando si seleziona questa opzione, il `pointerInactive` flag è uno dei flag restituiti da [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags). Per ulteriori informazioni su come utilizzare questa opzione, vedere [fornendo Mouse Interaction While Inactive](../../mfc/providing-mouse-interaction-while-inactive.md).  
  
 **Si comporta come un semplice controllo frame**  
 Specifica che il controllo è un contenitore per altri controlli impostando la `OLEMISC_SIMPLEFRAME` bit per il controllo. Per ulteriori informazioni sui [MSDN Library](http://go.microsoft.com/fwlink/linkid=150542) sito Web, cercare "Simple Frame Site Containment".  
  
 **Carica le proprietà in modo asincrono**  
 Consente il ripristino dei dati asincroni precedenti e avvia un nuovo caricamento della proprietà asincrona del controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)   
 [Impostazioni dell'applicazione, creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)   
 [Nomi controllo, creazione guidata controllo ActiveX MFC](../../mfc/reference/control-names-mfc-activex-control-wizard.md)


