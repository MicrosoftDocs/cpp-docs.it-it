---
title: Classi di controllo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.control
dev_langs:
- C++
helpviewer_keywords:
- static display controls [MFC]
- control classes [MFC]
- buttons, MFC control classes
- controls [MFC], MFC control classes
- controls [MFC]
- list boxes [MFC], MFC control classes
- control classes [MFC], MFC
- text, controls for input [MFC]
- user input [MFC], MFC control classes
ms.assetid: f9876606-9f5b-44cb-9135-213298d1df8f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ffd7b3b7d2eb9db68fd61ac693c65d87b2ee62d7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33358649"
---
# <a name="control-classes"></a>Classi dei controlli
Classi di controlli incapsulano un'ampia gamma di controlli Windows standard, compresi tra i controlli di testo statico e controlli struttura ad albero. Inoltre, MFC fornisce alcuni nuovi controlli, inclusi i pulsanti con le barre di controllo e bitmap.  
  
 I controlli i cui nomi di classe terminano in "**Ctrl**" sono state introdotte in Windows 95 e Windows NT versione 3.51.  
  
## <a name="static-display-controls"></a>Controlli di visualizzazione statica  
 [CStatic](../mfc/reference/cstatic-class.md)  
 Una finestra di visualizzazione statica. I controlli statici vengono utilizzati per assegnare un'etichetta, casella o separare altri controlli nella finestra di dialogo o nella finestra. Essi possono anche visualizzare immagini grafiche anziché di testo o di una casella.  
  
## <a name="text-controls"></a>Controlli di testo  
 [CEdit](../mfc/reference/cedit-class.md)  
 Una finestra di controllo di testo modificabile. Modificare i controlli vengono utilizzati per accettare l'input testuale dell'utente.  
  
 [CIPAddressCtrl](../mfc/reference/cipaddressctrl-class.md)  
 Supporta una casella di modifica per la modifica di un indirizzo IP (Internet Protocol).  
  
 [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)  
 Un controllo in cui l'utente può immettere e modificare il testo. A differenza del controllo incapsulato in `CEdit`, un controllo rich edit supporta gli oggetti OLE e la formattazione di paragrafo e carattere.  
  
## <a name="controls-that-represent-numbers"></a>Controlli che rappresentano numeri  
 [CSliderCtrl](../mfc/reference/csliderctrl-class.md)  
 Un controllo contenente un dispositivo di scorrimento, l'utente passa a selezionare un valore o un set di valori.  
  
 [CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)  
 Una coppia di frecce l'utente può fare clic per incrementare o decrementare un valore.  
  
 [CProgressCtrl](../mfc/reference/cprogressctrl-class.md)  
 Visualizza un rettangolo che viene riempito gradualmente da sinistra a destra per indicare lo stato di avanzamento di un'operazione.  
  
 [CScrollBar](../mfc/reference/cscrollbar-class.md)  
 Una finestra del controllo barra di scorrimento. La classe fornisce la funzionalità di una barra di scorrimento per l'utilizzo come un controllo in una finestra di dialogo o di una finestra, tramite il quale l'utente può specificare una posizione all'interno di un intervallo.  
  
## <a name="buttons"></a>Pulsanti  
 [CButton](../mfc/reference/cbutton-class.md)  
 Una finestra del controllo pulsante. La classe fornisce un'interfaccia di programmazione per un pulsante di comando, casella di controllo o pulsante di opzione nella finestra di dialogo o nella finestra.  
  
 [CBitmapButton](../mfc/reference/cbitmapbutton-class.md)  
 Un pulsante con una bitmap anziché di una didascalia.  
  
## <a name="lists"></a>Elenchi  
 [CListBox](../mfc/reference/clistbox-class.md)  
 Una finestra di controllo della casella di riepilogo. Una casella di riepilogo Visualizza un elenco di elementi che l'utente può visualizzare e selezionare.  
  
 [CDragListBox](../mfc/reference/cdraglistbox-class.md)  
 Fornisce la funzionalità di una casella di riepilogo di Windows. consente all'utente di spostare elementi casella di riepilogo, ad esempio i valori letterali stringa e i nomi di file, nella casella di riepilogo. Caselle di riepilogo con questa funzionalità sono utili per un elenco di elementi in un ordine diverso da quello in ordine alfabetico, ad esempio includere nomi di percorso o file in un progetto.  
  
 [CComboBox](../mfc/reference/ccombobox-class.md)  
 Una finestra di controllo casella combinata. Una casella combinata è costituito da un controllo di modifica più di una casella di riepilogo.  
  
 [CComboBoxEx](../mfc/reference/ccomboboxex-class.md)  
 Estende il controllo della casella combinata fornendo il supporto per elenchi di immagini.  
  
 [CCheckListBox](../mfc/reference/cchecklistbox-class.md)  
 Visualizza un elenco di elementi con le caselle di controllo, l'utente può selezionare o deselezionare, accanto a ogni elemento.  
  
 [CListCtrl](../mfc/reference/clistctrl-class.md)  
 Visualizza una raccolta di elementi ciascuno costituito da un'icona e un'etichetta, in modo simile al riquadro destro di Esplora File.  
  
 [CTreeCtrl](../mfc/reference/ctreectrl-class.md)  
 Visualizza un elenco gerarchico di icone ed etichette disposte in modo simile al riquadro sinistro di Esplora File.  
  
## <a name="toolbars-and-status-bars"></a>Barre degli strumenti e le barre di stato  
 [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)  
 Fornisce la funzionalità del controllo barra degli strumenti comune di Windows. MFC la maggior parte dei programmi utilizzano [CToolBar](../mfc/reference/ctoolbar-class.md) invece di questa classe.  
  
 [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)  
 Una finestra in orizzontale, in genere è suddivisa in riquadri, in cui un'applicazione può visualizzare le informazioni sullo stato. MFC la maggior parte dei programmi utilizzano [CStatusBar](../mfc/reference/cstatusbar-class.md) invece di questa classe.  
  
## <a name="miscellaneous-controls"></a>Vari controlli  
 [CAnimateCtrl](../mfc/reference/canimatectrl-class.md)  
 Consente di visualizzare un video clip semplice.  
  
 [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)  
 Una piccola finestra popup che consente di visualizzare una singola riga di testo che descrive lo scopo di uno strumento in un'applicazione.  
  
 [CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)  
 Supporta un controllo di modifica estesa o un controllo calendario semplice di interfaccia, che consente agli utenti di scegliere una data specifica o un valore di ora.  
  
 [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)  
 Visualizza i titoli o le etichette di colonne.  
  
 [CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)  
 Supporta una semplice interfaccia di un controllo calendario consente di selezionare una data.  
  
 [CTabCtrl](../mfc/reference/ctabctrl-class.md)  
 Un controllo con schede in cui l'utente può scegliere, simile ai separatori in un blocco per Appunti.  
  
 [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)  
 Consente all'utente di creare una combinazione di tasti, quale l'utente può premere per eseguire velocemente un'azione.  
  
 [CLinkCtrl](../mfc/reference/clinkctrl-class.md)  
 Esegue il rendering di testo verticale contrassegnato e avvia le applicazioni appropriate quando l'utente fa clic sul collegamento incorporato.  
  
 [CHtmlEditCtrl](../mfc/reference/chtmleditctrl-class.md)  
 Fornisce la funzionalità del controllo ActiveX WebBrowser in una finestra MFC.  
  
## <a name="related-classes"></a>Classi correlate  
 [CImageList](../mfc/reference/cimagelist-class.md)  
 Fornisce la funzionalità dell'elenco immagini di Windows. Gli elenchi immagini vengono utilizzati con controlli elenco e controlli struttura ad albero. Possono inoltre essere utilizzati per memorizzare e archiviare un set di immagini bitmap della stessa dimensione.  
  
 [CCtrlView](../mfc/reference/cctrlview-class.md)  
 La classe base per tutte le visualizzazioni associate ai controlli di Windows. Le viste basate su controlli sono descritti di seguito.  
  
 [CEditView](../mfc/reference/ceditview-class.md)  
 Controllo di modifica di una vista che contiene uno standard di Windows.  
  
 [CRichEditView](../mfc/reference/cricheditview-class.md)  
 Controllo di modifica di una vista che contiene un avanzato di Windows.  
  
 [CListView](../mfc/reference/clistview-class.md)  
 Una vista che contiene un elenco di Windows.  
  
 [CTreeView](../mfc/reference/ctreeview-class.md)  
 Una vista che contiene un controllo struttura ad albero di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

