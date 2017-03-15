---
title: "Controlli (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli comuni di Windows [C++]"
  - "controlli comuni [C++]"
  - "controlli [MFC]"
ms.assetid: b2842884-6435-4b8f-933b-21671bf8af95
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Controlli (MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli sono oggetti con cui gli utenti possono interagire per immettere o modificare i dati. In genere vengono visualizzati nelle finestre di dialogo o nelle barre degli strumenti. In questo gruppo di argomenti vengono illustrati tre tipi principali di controlli:  
  
-   Controlli comuni di Windows, inclusi quelli creati dal proprietario  
  
-   Controlli ActiveX  
  
-   Altre classi di controlli fornite dalla libreria Microsoft Foundation Class \(MFC\)  
  
## Controlli comuni di Windows  
 Il sistema operativo Windows ha sempre fornito un numero di controlli comuni di Windows. Questi oggetti controllo sono programmabili e l'editor finestre di Visual C\+\+ ne supporta l'aggiunta alle finestre di dialogo. La libreria Microsoft Foundation Class \(MFC\) fornisce classi che incapsulano ognuno di questi controlli, come illustrato nella tabella [Controlli comuni di Windows e classi MFC](#_core_windows_common_controls_and_mfc_classes). \(Per alcuni elementi nella tabella sono previsti argomenti correlati che li descrivono in maggiore dettaglio. Per i controlli che non dispongono di argomenti, vedere la documentazione per la classe MFC\).  
  
 La classe [CWnd](../mfc/reference/cwnd-class.md) è la classe base di tutte le classi di finestra, incluse tutte le classi di controlli. I controlli comuni di Windows sono supportati negli ambienti seguenti:  
  
-   Windows 95, Windows 98 e Windows 2000  
  
-   Windows NT, versione 3.51 e successive  
  
-   Win32s, versione 1.3 \(Visual C\+\+ versioni 4.2 e successive non supportano Win32s\)  
  
 I controlli comuni precedenti, tra cui caselle di controllo, caselle combinate, caselle di modifica, caselle di riepilogo, pulsanti di opzione, pulsanti di comando, controlli della barra di scorrimento e controlli statici, erano disponibili anche nelle versioni precedenti di Windows.  
  
## Controlli ActiveX  
 I controlli ActiveX, precedentemente noti come controlli OLE, possono essere usati nelle finestre di dialogo delle applicazioni per Windows o nelle pagine HTML sul World Wide Web. Per altre informazioni, vedere [MFC ActiveX Controls](../mfc/mfc-activex-controls.md) \(Controlli ActiveX MFC\).  
  
## Altre classi di controlli MFC  
 Oltre alle classi che incapsulano tutti i controlli comuni di Windows e che supportano la programmazione dei propri controlli ActiveX \(o l'uso di controlli ActiveX forniti da altri utenti\), MFC prevede proprie classi di controlli riportate di seguito:  
  
-   [CBitmapButton](../mfc/reference/cbitmapbutton-class.md)  
  
-   [CCheckListBox](../mfc/reference/cchecklistbox-class.md)  
  
-   [CDragListBox](../mfc/reference/cdraglistbox-class.md)  
  
##  <a name="_core_finding_information_about_windows_common_controls"></a> Ricerca di informazioni sui controlli comuni di Windows  
 Nella tabella seguente viene brevemente descritto ogni controllo comune di Windows, tra cui la classe wrapper MFC del controllo.  
  
### Controlli comuni di Windows e classi MFC  
  
|Controllo|Classe MFC|Descrizione|Novità in Windows 95|  
|---------------|----------------|-----------------|--------------------------|  
|[animazione](../mfc/using-canimatectrl.md)|[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)|Visualizza frame successivi di un videoclip AVI|Sì|  
|button|[CButton](../mfc/reference/cbutton-class.md)|Pulsanti di comando che determinano un'azione, usati anche per caselle di controllo, pulsanti di opzione e caselle di gruppo|No|  
|casella combinata|[CComboBox](../mfc/reference/ccombobox-class.md)|Combinazione di una casella di modifica e una casella di riepilogo|No|  
|[selezione data e ora](../mfc/using-cdatetimectrl.md)|[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)|Consente all'utente di scegliere un valore di data o di ora specifico|Sì|  
|casella di modifica|[CEdit](../mfc/reference/cedit-class.md)|Caselle per l'immissione di testo|No|  
|[casella combinata estesa](../mfc/using-ccomboboxex.md)|[CComboBoxEx](../mfc/reference/ccomboboxex-class.md)|Controllo di una casella combinata con la possibilità di visualizzare immagini|Sì|  
|[intestazione](../mfc/using-cheaderctrl.md)|[CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)|Pulsante visualizzato sopra una colonna di testo; controlla la larghezza del testo visualizzato|Sì|  
|[hotkey](../mfc/using-chotkeyctrl.md)|[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)|Finestra che consente all'utente di creare un "tasto di scelta rapida" per eseguire velocemente un'azione|Sì|  
|[elenco di immagini](../mfc/using-cimagelist.md)|[CImageList](../mfc/reference/cimagelist-class.md)|Raccolta di immagini usata per gestire grandi set di icone o bitmap \(l'elenco di immagini non è realmente un controllo e supporta gli elenchi usati da altri controlli\)|Sì|  
|[list](../mfc/using-clistctrl.md)|[CListCtrl](../mfc/reference/clistctrl-class.md)|Finestra che visualizza un elenco di stringhe di testo con icone|Sì|  
|casella di riepilogo|[CListBox](../mfc/reference/clistbox-class.md)|Casella contenente un elenco di stringhe|No|  
|[calendario mensile](../mfc/using-cmonthcalctrl.md)|[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)|Controllo che visualizza informazioni sulla data|Sì|  
|[avanzamento](../mfc/using-cprogressctrl.md)|[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)|Finestra che indica lo stato di avanzamento di un'operazione di lunga durata|Sì|  
|[rebar](../mfc/using-crebarctrl.md)|[CRebarCtrl](../mfc/reference/crebarctrl-class.md)|Barra degli strumenti che può contenere altre finestre figlio sotto forma di controlli|Sì|  
|[rich edit](../mfc/using-cricheditctrl.md)|[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)|Finestra in cui è possibile modificare la formattazione di carattere e paragrafo \(vedere [Classes Related to Rich Edit Controls](../mfc/classes-related-to-rich-edit-controls.md) \(Classi correlate ai controlli Rich Edit\)\)|Sì|  
|barra di scorrimento|[CScrollBar](../mfc/reference/cscrollbar-class.md)|Barra di scorrimento usata come un controllo all'interno di una finestra di dialogo \(non una finestra\)|No|  
|[cursore](../mfc/using-csliderctrl.md)|[CSliderCtrl](../mfc/reference/csliderctrl-class.md)|Finestra contenente un controllo dispositivo di scorrimento con segni di graduazione facoltativi|Sì|  
|[casella di selezione](../mfc/using-cspinbuttonctrl.md)|[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)|Coppia di pulsanti freccia selezionabili per aumentare o diminuire un valore|Sì|  
|testo statico|[CStatic](../mfc/reference/cstatic-class.md)|Testo per le etichette di altri controlli|No|  
|[barra di stato](../mfc/using-cstatusbarctrl.md)|[CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)|Finestra per la visualizzazione di informazioni sullo stato, simile alla classe MFC `CStatusBar`|Sì|  
|[scheda](../mfc/using-ctabctrl.md)|[CTabCtrl](../mfc/reference/ctabctrl-class.md)|Simile ai separatori in un blocco per appunti, è usato in "finestre di dialogo a schede" o nelle finestre delle proprietà|Sì|  
|[barra degli strumenti](../mfc/using-ctoolbarctrl.md)|[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)|Finestra con pulsanti di generazione comandi, simile alla classe MFC `CToolBar`|Sì|  
|[descrizione comando](../mfc/using-ctooltipctrl.md)|[CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)|Piccola finestra popup che descrive lo scopo di un pulsante della barra degli strumenti o un altro strumento|Sì|  
|[struttura ad albero](../mfc/using-ctreectrl.md)|[CTreeCtrl](../mfc/reference/ctreectrl-class.md)|Finestra che visualizza un elenco gerarchico di elementi|Sì|  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   Un controllo individuale: vedere la tabella [Controlli comuni di Windows e classi MFC](#_core_windows_common_controls_and_mfc_classes) in questo argomento per collegamenti a tutti i controlli  
  
-   [Making and using controls \(Creazione e uso di controlli\)](../mfc/making-and-using-controls.md)  
  
-   [Using the dialog editor to add controls \(Uso dell'editor finestre per aggiungere controlli\)](../mfc/using-the-dialog-editor-to-add-controls.md)  
  
-   [Adding controls to a dialog box by hand \(Aggiunta manuale di controlli a una finestra di dialogo\)](../mfc/adding-controls-by-hand.md)  
  
-   [Deriving control classes from the MFC control classes \(Derivazione di classi di controlli da classi di controlli MFC\)](../mfc/deriving-controls-from-a-standard-control.md)  
  
-   [Using common controls as child windows \(Uso di controlli comuni come finestre figlio\)](../mfc/using-a-common-control-as-a-child-window.md)  
  
-   [Notifications from common controls \(Notifiche da controlli comuni\)](../mfc/receiving-notification-from-common-controls.md)  
  
-   [Add common controls to a dialog box](../mfc/using-common-controls-in-a-dialog-box.md) \(Aggiungere controlli comuni a una finestra di dialogo\).  
  
-   [Derive a control from a standard Windows control \(Derivare un controllo da un controllo Windows standard\)](../mfc/deriving-controls-from-a-standard-control.md)  
  
-   [Access dialog\-box controls with type safety \(Accedere ai controlli della finestra di dialogo con indipendenza dai tipi\)](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)  
  
-   [Receive notification messages from common controls \(Ricevere messaggi di notifica da controlli comuni\)](../mfc/receiving-notification-from-common-controls.md)  
  
-   [Esempi](../mfc/common-control-sample-list.md)  
  
 Per informazioni sui controlli comuni di Windows nel [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)], vedere [Common Controls](http://msdn.microsoft.com/library/windows/desktop/bb775493) \(Controlli comuni\).  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Dialog Editor](../mfc/dialog-editor.md)