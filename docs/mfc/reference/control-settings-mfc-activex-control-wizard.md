---
title: "Impostazioni controllo, Creazione guidata controllo ActiveX MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.ctl.settings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata controllo ActiveX MFC, impostazioni controllo"
ms.assetid: 2ccaa4fc-0d52-413e-afa3-ecd474c3f6f0
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Impostazioni controllo, Creazione guidata controllo ActiveX MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa pagina della procedura guidata per specificare il comportamento del controllo.  È possibile, ad esempio, basare il controllo su tipi di controllo standard di Windows, ottimizzarne l'aspetto e il comportamento o impostarne il funzionamento come contenitore per altri controlli.  
  
 Per ulteriori informazioni sulla selezione delle opzioni riportate in questa pagina allo scopo di incrementare l'efficienza del controllo, vedere [Controlli ActiveX MFC: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).  
  
## Elenco UIElement  
 **Crea controllo basato su**  
 È possibile selezionare nell'elenco il tipo di controllo da cui il controllo creato deve ereditare.  L'elenco è un subset delle classi di controlli disponibili per `CreateWindowEx` e controlli comuni aggiuntivi che sono specificati in commctrl.h.  La selezione determina lo stile del controllo nella funzione `PreCreateWindow` nel file *ProjName*Ctrl.cpp.  Per ulteriori informazioni, vedere [Controlli ActiveX MFC: creazione di una sottoclasse per un controllo Windows](../../mfc/mfc-activex-controls-subclassing-a-windows-control.md).  
  
|Controllo|Descrizione|  
|---------------|-----------------|  
|**BUTTON**|Controllo del pulsante di Windows|  
|**COMBOBOX**|Controllo di una casella combinata di Windows.|  
|**EDIT**|Controllo di una casella di testo di Windows.|  
|**LISTBOX**|Controllo di una casella di riepilogo di Windows.|  
|**SCROLLBAR**|Controllo della barra di scorrimento di Windows|  
|**STATICO**|Controllo statico Windows|  
|**msctls\_hotkey32**|Controllo comune del tasto di scelta|  
|**msctls\_progress32**|Controllo comune indicatore di stato.|  
|**msctls\_statusbar32**|Controllo comune barra di stato|  
|**msctls\_trackbar32**|Controllo comune indicatore di avanzamento|  
|**msctls\_updown32**|Controllo comune \(o di scorrimento\) del pulsante di selezione|  
|**SysAnimate32**|Un controllo comune di animazione|  
|**SysHeader32**|Controllo comune intestazione|  
|**SysListView32**|Controllo comune visualizzazione elenco|  
|**SysTabControl32**|Controllo comune struttura a schede|  
|**SysTreeView32**|Controllo comune visualizzazione struttura ad albero.|  
  
 **Attivo quando visibile**  
 Specifica che una finestra viene creata per il controllo quando vi viene fatto accesso.  Per impostazione predefinita, viene selezionata l'opzione **Attivo quando visibile**.  Se si desidera posticipare l'attivazione del controllo finché il contenitore lo richiede \(ad esempio, quando un utente fa clic con il mouse\), deselezionare questa opzione.  Quando questa funzionalità è disattivata, il controllo non richiede la creazione di una finestra fino a quando non è necessaria.  Per ulteriori informazioni, vedere [Disattivazione dell'opzione Attivo quando visibile](../../mfc/turning-off-the-activate-when-visible-option.md).  
  
 **Invisibile in fase di esecuzione**  
 Specifica che il controllo è privo di interfaccia utente in fase di esecuzione.  Un timer è un tipo di controllo che viene in genere impostato come invisibile.  
  
 **Con finestra di dialogo Informazioni su**  
 Specifica che il controllo dispone della finestra di dialogo standard di Windows CE **Informazioni su** contenente il numero di versione e le informazioni sul copyright.  
  
> [!NOTE]
>  Il modo in cui si accede alla Guida del controllo dipende dall'implementazione della Guida e dall'eventuale integrazione della Guida del controllo con quella del contenitore.  Per ulteriori informazioni su come integrare una guida, nel sito web [Libreria MSDN](http://go.microsoft.com/fwlink/?linkID=150542) , cercare "Aggiungere una guida sensibile al contesto a un controllo ActiveX MFC."  
  
 Quando si seleziona questa opzione, il metodo del controllo `AboutBox` viene inserito nella classe del controllo del progetto \(C*ProjName*Ctrl.cpp\) e AboutBox viene aggiunto alla mappa di invio del progetto.  Questa opzione è selezionata per impostazione predefinita.  
  
 **Codice di disegno ottimizzato**  
 Specifica che il contenitore ripristina automaticamente gli oggetti GDI originali dopo che tutti i controlli del contenitore sono stati disegnati, nell'ambito dello stesso contesto di periferica.  Per ulteriori informazioni su questa funzionalità, vedere [Ottimizzazione del disegno dei controlli](../../mfc/optimizing-control-drawing.md).  
  
 **Attivazione senza finestra**  
 Specifica che il controllo non crea una finestra quando viene attivato.  L'attivazione senza finestra consente la creazione di controlli non rettangolari o trasparenti. I controlli senza finestra, inoltre, causano un minor sovraccarico del sistema rispetto ai controlli dotati di finestre.  I controlli di questo tipo non supportano l'attivazione senza sfarfallio né un contesto di periferica integro.  I contenitori creati prima del 1996 non supportano l'attivazione senza finestra.  Per ulteriori informazioni sull'utilizzo di questa opzione, vedere [Attivazione senza finestra](../../mfc/providing-windowless-activation.md).  
  
 **Contesto di periferica integro**  
 Sottopone a override [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md) nell'intestazione del controllo \(*projname*ctrl.h\) che disattiva la chiamata `IntersectClipRect` effettuata da `COleControl`.  Quando viene selezionata questa opzione, si verifica un lieve miglioramento della velocità.  Questa opzione non è disponibile se si seleziona **Attivazione senza finestra**.  Per ulteriori informazioni, vedere [Utilizzo di un contesto di dispositivo integro](../../mfc/using-an-unclipped-device-context.md).  
  
 **Attivazione senza sfarfallio**  
 Elimina le operazioni di disegno e lo sfarfallio visivo che si verifica durante la transizione dallo stato attivo allo stato inattivo del controllo.  Questa opzione non è disponibile se si seleziona **Attivazione senza finestra**.  Quando si imposta questa opzione, il flag `noFlickerActivate` diventa uno dei flag restituiti da [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md).  Per ulteriori informazioni, vedere [Fornitura di attivazione senza sfarfallio](../../mfc/providing-flicker-free-activation.md).  
  
 **Disponibile nella finestra di dialogo Inserisci oggetto**  
 Specifica che il controllo sarà disponibile nella finestra di dialogo **Inserisci oggetto** per i contenitori attivati.  Quando si seleziona questa opzione, il flag `afxRegInsertable` diventa uno dei flag restituiti da `AfxOleRegisterControlClass`.  La finestra di dialogo **Inserisci oggetto** consente a un utente di inserire in un documento composito oggetti esistenti o nuovi.  
  
 **Notifiche del puntatore del mouse quando inattivo**  
 Consente al controllo di elaborare le notifiche del puntatore del mouse, indipendentemente dal fatto che il controllo sia attivo o meno.  Quando si seleziona questa opzione, il flag `pointerInactive` diventa uno dei flag restituiti da [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md).  Per ulteriori informazioni sull'utilizzo di questa opzione, vedere [Inserimento di interazione del mouse in stato di inattività](../../mfc/providing-mouse-interaction-while-inactive.md).  
  
 **Funzione di semplice controllo frame**  
 Specifica che il controllo è un contenitore per altri controlli impostando il bit `OLEMISC_SIMPLEFRAME` per il controllo.  Per ulteriori informazioni, sul sito web [Libreria MSDN](http://go.microsoft.com/fwlink/?linkID=150542), cercare "Simple Frame Site Containment".  
  
 **Carica in modo asincrono le proprietà**  
 Consente il ripristino dei dati asincroni precedenti e avvia un nuovo caricamento della proprietà asincrona del controllo.  
  
## Vedere anche  
 [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)   
 [Impostazioni applicazione, Creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)   
 [Nomi controllo, Creazione guidata controllo ActiveX MFC](../../mfc/reference/control-names-mfc-activex-control-wizard.md)