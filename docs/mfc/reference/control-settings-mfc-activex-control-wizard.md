---
description: 'Ulteriori informazioni su: impostazioni di controllo, creazione guidata controllo ActiveX MFC'
title: Impostazioni controllo, Creazione guidata controllo ActiveX MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.ctl.settings
helpviewer_keywords:
- MFC ActiveX Control Wizard, control settings
ms.assetid: 2ccaa4fc-0d52-413e-afa3-ecd474c3f6f0
ms.openlocfilehash: 31e8c5fd257128e17017d3d0fa801fc812f99397
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301594"
---
# <a name="control-settings-mfc-activex-control-wizard"></a>Impostazioni controllo, Creazione guidata controllo ActiveX MFC

Utilizzare questa pagina della procedura guidata per specificare come si desidera che il controllo si comporti. È possibile, ad esempio, basare il controllo sui tipi di controllo Windows standard, ottimizzarne il comportamento e l'aspetto oppure indicare che il controllo può fungere da contenitore per altri controlli.

Per ulteriori informazioni su come selezionare le opzioni in questa pagina per ottimizzare l'efficienza del controllo, vedere [controlli ActiveX MFC: ottimizzazione](../../mfc/mfc-activex-controls-optimization.md).

## <a name="uielement-list"></a>Elenco degli elementi di interfaccia

- **Crea controllo basato su**

   In questo elenco è possibile selezionare il tipo di controllo da cui il controllo deve ereditare. L'elenco è un subset delle classi di controlli disponibili per `CreateWindowEx` e altri controlli comuni specificati in commctrl. h. La selezione determina lo stile del controllo nella `PreCreateWindow` funzione nel file *ProjName* CTRL. cpp. Per ulteriori informazioni, vedere [controlli ActiveX MFC: sottoclasse di un controllo Windows](../../mfc/mfc-activex-controls-subclassing-a-windows-control.md).

   |Controllo|Description|
   |-------------|-----------------|
   |**PULSANTE**|Controllo pulsante di Windows|
   |**COMBOBOX**|Controllo casella combinata di Windows|
   |**MODIFICA**|Controllo casella di modifica di Windows|
   |**LISTBOX**|Controllo casella di riepilogo Windows|
   |**SCROLLBAR**|Controllo barra di scorrimento di Windows|
   |**STATICO**|Controllo statico di Windows|
   |**msctls_hotkey32**|Controllo comune del tasto di scelta|
   |**msctls_progress32**|Controllo comune indicatore di stato|
   |**msctls_statusbar32**|Controllo comune della barra di stato|
   |**msctls_trackbar32**|Controllo comune di un indicatore di avanzamento|
   |**msctls_updown32**|Controllo comune (o di scorrimento) di un pulsante di selezione|
   |**SysAnimate32**|Controllo comune di animazione|
   |**SysHeader32**|Controllo comune di intestazione|
   |**SysListView32**|Controllo comune visualizzazione elenco|
   |**SysTabControl32**|Controllo comune di tabulazione|
   |**SysTreeView32**|Controllo comune di visualizzazione struttura ad albero|

- **Viene attivato quando visibile**

   Specifica che una finestra viene creata per il controllo quando vi si accede. Per impostazione predefinita, l'opzione **attiva quando visibile** è selezionata. Se si desidera rinviare l'attivazione del controllo finché il contenitore non lo richiede, ad esempio quando un utente fa clic sul mouse, deselezionare questa opzione. Quando questa funzionalità è disattivata, il controllo non comporta il costo della creazione della finestra finché non è necessario. Per ulteriori informazioni, vedere la pagina relativa alla disattivazione [dell'opzione attiva quando visibile](../../mfc/turning-off-the-activate-when-visible-option.md).

- **Invisibile in fase di esecuzione**

   Specifica che il controllo non dispone di un'interfaccia utente in fase di esecuzione. Un timer è un tipo di controllo che potrebbe essere necessario essere invisibile.

- **Con finestra informazioni su**

   Specifica che il controllo ha la finestra di dialogo standard **di Windows about** , che Visualizza il numero di versione e le informazioni sul copyright.

   > [!NOTE]
   > Il modo in cui l'utente accede alla guida per il controllo dipende dal modo in cui è stata implementata la guida e dal fatto che sia stata integrata la guida del controllo per la guida del contenitore.

   Quando si seleziona questa opzione, il `AboutBox` metodo di controllo viene inserito nella classe del controllo del progetto (C *ProjName* CTRL. cpp) e viene aggiunto AboutBox alla mappa di invio del progetto. Questa opzione è selezionata per impostazione predefinita.

- **Codice di disegno ottimizzato**

   Specifica che il contenitore ripristina automaticamente gli oggetti GDI originali dopo che sono stati disegnati tutti i controlli contenitore, che vengono disegnati nello stesso contesto di dispositivo. Per ulteriori informazioni su questa funzionalità, vedere [ottimizzazione del disegno del controllo](../../mfc/optimizing-control-drawing.md).

- **Attivazione senza finestra**

   Specifica che il controllo non produce una finestra quando viene attivata. L'attivazione senza finestra consente controlli non rettangolari o trasparenti e un controllo privo di finestra richiede un sovraccarico di sistema inferiore rispetto a un controllo che ha una finestra. Un controllo senza finestra non consente un contesto di dispositivo non ritagliato o un'attivazione senza sfarfallio. I contenitori creati prima del 1996 non supportano l'attivazione senza finestra. Per ulteriori informazioni sull'utilizzo di questa opzione, vedere [fornire l'attivazione senza finestra](../../mfc/providing-windowless-activation.md).

- **Contesto di dispositivo non ritagliato**

   Esegue l'override di [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags) nell'intestazione del controllo (*ProjName* CTRL. h) per disabilitare la chiamata a `IntersectClipRect` effettuata da `COleControl` . Quando si seleziona questa opzione, viene fornito un vantaggio di piccola velocità. Se si seleziona **attivazione senza finestra**, questa funzionalità non è disponibile. Per ulteriori informazioni, vedere [utilizzo di un contesto di dispositivo non ritagliato](../../mfc/using-an-unclipped-device-context.md).

- **Attivazione senza sfarfallio**

   Elimina le operazioni di disegno e lo sfarfallio visivo associato che si verificano tra gli stati attivo e inattivo del controllo. Se si seleziona **attivazione senza finestra**, questa funzionalità non è disponibile. Quando si imposta questa opzione, il `noFlickerActivate` flag è uno dei flag restituiti da [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags). Per ulteriori informazioni, vedere la pagina relativa alla [fornitura di Flicker-Free Activation](../../mfc/providing-flicker-free-activation.md).

- **Disponibile nella finestra di dialogo Inserisci oggetto**

   Specifica che il controllo sarà disponibile nella finestra di dialogo **Inserisci oggetto** per i contenitori abilitati. Quando si seleziona questa opzione, il `afxRegInsertable` flag è uno dei flag restituiti da `AfxOleRegisterControlClass` . Utilizzando la finestra di dialogo **Inserisci oggetto** , un utente può inserire oggetti appena creati o esistenti in un documento composto.

- **Notifiche del puntatore del mouse quando inattivo**

   Consente al controllo di elaborare le notifiche del puntatore del mouse, indipendentemente dal fatto che il controllo sia attivo o meno. Quando si seleziona questa opzione, il `pointerInactive` flag è uno dei flag restituiti da [COleControl:: GetControlFlags](../../mfc/reference/colecontrol-class.md#getcontrolflags). Per ulteriori informazioni sull'utilizzo di questa opzione, vedere [fornire l'interazione del mouse mentre è inattiva](../../mfc/providing-mouse-interaction-while-inactive.md).

- **Funge da controllo frame semplice**

   Specifica che il controllo è un contenitore per altri controlli impostando il bit OLEMISC_SIMPLEFRAME per il controllo. Per ulteriori informazioni, vedere [Simple Frame Site Containment](/windows/win32/com/simple-frame-site-containment).

- **Carica le proprietà in modo asincrono**

   Consente di reimpostare i dati asincroni precedenti e di avviare un nuovo carico della proprietà asincrona del controllo.

## <a name="see-also"></a>Vedi anche

[Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)<br/>
[Impostazioni applicazione, creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)<br/>
[Nomi dei controlli, creazione guidata controllo ActiveX MFC](../../mfc/reference/control-names-mfc-activex-control-wizard.md)
