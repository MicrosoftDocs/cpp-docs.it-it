---
description: 'Altre informazioni su: controlli (MFC)'
title: Controlli (MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- Windows common controls [MFC]
- common controls [MFC]
- controls [MFC]
ms.assetid: b2842884-6435-4b8f-933b-21671bf8af95
ms.openlocfilehash: 94406928741eecd00794dbde230effe4d89ab3f6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310135"
---
# <a name="controls-mfc"></a>Controlli (MFC)

I controlli sono oggetti con cui gli utenti possono interagire per immettere o modificare i dati. In genere vengono visualizzati nelle finestre di dialogo o nelle barre degli strumenti. In questo gruppo di argomenti vengono illustrati tre tipi principali di controlli:

- Controlli comuni di Windows, inclusi quelli creati dal proprietario

- Controlli ActiveX

- Altre classi di controlli fornite dalla libreria Microsoft Foundation Class (MFC)

## <a name="windows-common-controls"></a>Controlli comuni di Windows

Il sistema operativo Windows ha sempre fornito un numero di controlli comuni di Windows. Questi oggetti controllo sono programmabili e l'editor finestre di Visual C++ ne supporta l'aggiunta alle finestre di dialogo. La libreria Microsoft Foundation Class (MFC) fornisce classi che incapsulano ognuno di questi controlli, come illustrato nella tabella [Controlli comuni di Windows e classi MFC](#_core_windows_common_controls_and_mfc_classes). (Per alcuni elementi nella tabella sono previsti argomenti correlati che li descrivono in maggiore dettaglio. Per i controlli che non dispongono di argomenti, vedere la documentazione per la classe MFC).

La classe [CWnd](reference/cwnd-class.md) è la classe base di tutte le classi di finestra, incluse tutte le classi di controlli.

## <a name="activex-controls"></a>Controlli ActiveX

I controlli ActiveX, precedentemente noti come controlli OLE, possono essere usati nelle finestre di dialogo delle applicazioni per Windows o nelle pagine HTML sul World Wide Web. Per ulteriori informazioni, vedere [controlli ActiveX MFC](mfc-activex-controls.md).

## <a name="other-mfc-control-classes"></a>Altre classi di controlli MFC

Oltre alle classi che incapsulano tutti i controlli comuni di Windows e che supportano la programmazione dei propri controlli ActiveX (o l'uso di controlli ActiveX forniti da altri utenti), MFC prevede proprie classi di controlli riportate di seguito:

- [CBitmapButton](reference/cbitmapbutton-class.md)

- [CCheckListBox](reference/cchecklistbox-class.md)

- [CDragListBox](reference/cdraglistbox-class.md)

## <a name="finding-information-about-windows-common-controls"></a><a name="_core_finding_information_about_windows_common_controls"></a> Ricerca di informazioni sui controlli comuni di Windows

Nella tabella seguente viene brevemente descritto ogni controllo comune di Windows, tra cui la classe wrapper MFC del controllo.

### <a name="windows-common-controls-and-mfc-classes"></a><a name="_core_windows_common_controls_and_mfc_classes"></a> Controlli comuni di Windows e classi MFC

|Controllo|Classe MFC|Description|Novità di Windows 95|
|-------------|---------------|-----------------|------------------------|
|[animazione](using-canimatectrl.md)|[CAnimateCtrl](reference/canimatectrl-class.md)|Visualizza frame successivi di un videoclip AVI|Sì|
|.|[CButton](reference/cbutton-class.md)|Pulsanti di comando che determinano un'azione, usati anche per caselle di controllo, pulsanti di opzione e caselle di gruppo|No|
|casella combinata|[CComboBox](reference/ccombobox-class.md)|Combinazione di una casella di modifica e una casella di riepilogo|No|
|[selezione data e ora](using-cdatetimectrl.md)|[CDateTimeCtrl](reference/cdatetimectrl-class.md)|Consente all'utente di scegliere un valore di data o di ora specifico|Sì|
|casella di modifica|[CEdit](reference/cedit-class.md)|Caselle per l'immissione di testo|No|
|[casella combinata estesa](using-ccomboboxex.md)|[CComboBoxEx](reference/ccomboboxex-class.md)|Controllo di una casella combinata con la possibilità di visualizzare immagini|Sì|
|[intestazione](using-cheaderctrl.md)|[CHeaderCtrl](reference/cheaderctrl-class.md)|Pulsante visualizzato sopra una colonna di testo; controlla la larghezza del testo visualizzato|Sì|
|[Hotkey](using-chotkeyctrl.md)|[CHotKeyCtrl](reference/chotkeyctrl-class.md)|Finestra che consente all'utente di creare un "tasto di scelta rapida" per eseguire velocemente un'azione|Sì|
|[elenco di immagini](using-cimagelist.md)|[CImageList](reference/cimagelist-class.md)|Raccolta di immagini usata per gestire grandi set di icone o bitmap (l'elenco di immagini non è realmente un controllo e supporta gli elenchi usati da altri controlli)|Sì|
|[list](using-clistctrl.md)|[CListCtrl](reference/clistctrl-class.md)|Finestra che visualizza un elenco di stringhe di testo con icone|Sì|
|casella di riepilogo|[CListBox](reference/clistbox-class.md)|Casella contenente un elenco di stringhe|No|
|[calendario mensile](using-cmonthcalctrl.md)|[CMonthCalCtrl](reference/cmonthcalctrl-class.md)|Controllo che visualizza informazioni sulla data|Sì|
|[corso](using-cprogressctrl.md)|[CProgressCtrl](reference/cprogressctrl-class.md)|Finestra che indica lo stato di avanzamento di un'operazione di lunga durata|Sì|
|[rebar](using-crebarctrl.md)|[CRebarCtrl](reference/crebarctrl-class.md)|Barra degli strumenti che può contenere altre finestre figlio sotto forma di controlli|Sì|
|[rich edit](using-cricheditctrl.md)|[CRichEditCtrl](reference/cricheditctrl-class.md)|Finestra in cui è possibile modificare la formattazione di carattere e paragrafo (vedere [Classes Related to Rich Edit Controls](classes-related-to-rich-edit-controls.md)(Classi correlate ai controlli Rich Edit))|Sì|
|barra di scorrimento|[CScrollBar](reference/cscrollbar-class.md)|Barra di scorrimento usata come un controllo all'interno di una finestra di dialogo (non una finestra)|No|
|[cursore](using-csliderctrl.md)|[CSliderCtrl](reference/csliderctrl-class.md)|Finestra contenente un controllo dispositivo di scorrimento con segni di graduazione facoltativi|Sì|
|[casella di selezione](using-cspinbuttonctrl.md)|[CSpinButtonCtrl](reference/cspinbuttonctrl-class.md)|Coppia di pulsanti freccia selezionabili per aumentare o diminuire un valore|Sì|
|testo statico|[CStatic](reference/cstatic-class.md)|Testo per le etichette di altri controlli|No|
|[barra di stato](using-cstatusbarctrl.md)|[CStatusBarCtrl](reference/cstatusbarctrl-class.md)|Finestra per la visualizzazione di informazioni sullo stato, simile alla classe MFC `CStatusBar`|Sì|
|[scheda](using-ctabctrl.md)|[CTabCtrl](reference/ctabctrl-class.md)|Simile ai separatori in un blocco per appunti, è usato in "finestre di dialogo a schede" o nelle finestre delle proprietà|Sì|
|[barra degli strumenti](using-ctoolbarctrl.md)|[CToolBarCtrl](reference/ctoolbarctrl-class.md)|Finestra con pulsanti di generazione comandi, simile alla classe MFC `CToolBar`|Sì|
|[Descrizione comando](using-ctooltipctrl.md)|[CToolTipCtrl](reference/ctooltipctrl-class.md)|Piccola finestra popup che descrive lo scopo di un pulsante della barra degli strumenti o un altro strumento|Sì|
|[tree](using-ctreectrl.md)|[CTreeCtrl](reference/ctreectrl-class.md)|Finestra che visualizza un elenco gerarchico di elementi|Sì|

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- Un controllo individuale: vedere la tabella [Controlli comuni di Windows e classi MFC](#_core_windows_common_controls_and_mfc_classes) in questo argomento per collegamenti a tutti i controlli

- [Making and using controls (Creazione e uso di controlli)](making-and-using-controls.md)

- [Utilizzo dell'editor finestre per aggiungere controlli](using-the-dialog-editor-to-add-controls.md)

- [Adding controls to a dialog box by hand (Aggiunta manuale di controlli a una finestra di dialogo)](adding-controls-by-hand.md)

- [Deriving control classes from the MFC control classes (Derivazione di classi di controlli da classi di controlli MFC)](deriving-controls-from-a-standard-control.md)

- [Using common controls as child windows (Uso di controlli comuni come finestre figlio)](using-a-common-control-as-a-child-window.md)

- [Notifications from common controls (Notifiche da controlli comuni)](receiving-notification-from-common-controls.md)

- [Add common controls to a dialog box](using-common-controls-in-a-dialog-box.md)(Aggiungere controlli comuni a una finestra di dialogo).

- [Derive a control from a standard Windows control (Derivare un controllo da un controllo Windows standard)](deriving-controls-from-a-standard-control.md)

- [Access dialog-box controls with type safety (Accedere ai controlli della finestra di dialogo con indipendenza dai tipi)](type-safe-access-to-controls-in-a-dialog-box.md)

- [Receive notification messages from common controls (Ricevere messaggi di notifica da controlli comuni)](receiving-notification-from-common-controls.md)

- [Esempi](common-control-sample-list.md)

Per informazioni sui controlli comuni di Windows nell'Windows SDK, vedere [controlli comuni](/windows/win32/Controls/common-controls-intro).

## <a name="see-also"></a>Vedi anche

[Elementi dell'interfaccia utente](user-interface-elements-mfc.md)<br/>
[Editor finestre](../windows/dialog-editor.md)
