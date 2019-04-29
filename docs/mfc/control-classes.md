---
title: Classi dei controlli
ms.date: 11/04/2016
f1_keywords:
- vc.classes.control
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
ms.openlocfilehash: 79a71a4660cd49f85726d730c9fad0b2f10f83bb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62338168"
---
# <a name="control-classes"></a>Classi dei controlli

Le classi di controllo includono un'ampia gamma di controlli Windows standard che vanno dai controlli di testo statico ai controlli dell'albero. Inoltre, MFC fornisce alcuni nuovi controlli, tra cui i pulsanti con bitmap e controllo barre.

I controlli cui nomi di classe terminano in "**Ctrl**" sono stati le novità in Windows 95 e Windows NT versione 3.51.

## <a name="static-display-controls"></a>Controlli di visualizzazione statica

[CStatic](../mfc/reference/cstatic-class.md)<br/>
Una finestra per la visualizzazione statica. Controlli statici vengono usati per assegnare un'etichetta, casella o separare altri controlli in una finestra o finestra di dialogo. Vengono inoltre visualizzati immagini grafiche anziché di testo o di una casella.

## <a name="text-controls"></a>Controlli testo

[CEdit](../mfc/reference/cedit-class.md)<br/>
Una finestra del controllo di testo modificabile. Modificare i controlli consentono di accettare input testuale dell'utente.

[CIPAddressCtrl](../mfc/reference/cipaddressctrl-class.md)<br/>
Supporta una casella di modifica per la modifica di un indirizzo IP (Internet Protocol).

[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)<br/>
Un controllo in cui l'utente può immettere e modificare il testo. A differenza del controllo è incapsulato in `CEdit`, un controllo rich edit supporta caratteri e la formattazione dei paragrafi e gli oggetti OLE.

## <a name="controls-that-represent-numbers"></a>Controlli che rappresentano numeri

[CSliderCtrl](../mfc/reference/csliderctrl-class.md)<br/>
Un controllo che contiene un dispositivo di scorrimento, che l'utente sposta per selezionare un valore o un set di valori.

[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)<br/>
Una coppia di pulsanti freccia l'utente può fare clic per incrementare o decrementare un valore.

[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)<br/>
Visualizza un rettangolo che viene riempito gradualmente da sinistra a destra per indicare lo stato di avanzamento di un'operazione.

[CScrollBar](../mfc/reference/cscrollbar-class.md)<br/>
Una finestra del controllo barra di scorrimento. La classe fornisce la funzionalità di una barra di scorrimento, come un controllo in una finestra di dialogo o finestra, attraverso il quale l'utente può specificare una posizione all'interno di un intervallo.

## <a name="buttons"></a>Pulsanti

[CButton](../mfc/reference/cbutton-class.md)<br/>
Una finestra del controllo pulsante. La classe fornisce un'interfaccia programmatica per un pulsante di comando, casella di controllo o pulsante di opzione in una finestra o finestra di dialogo.

[CBitmapButton](../mfc/reference/cbitmapbutton-class.md)<br/>
Pulsante con un'immagine bitmap anziché una didascalia di testo.

## <a name="lists"></a>Elenchi

[CListBox](../mfc/reference/clistbox-class.md)<br/>
Una finestra di controllo casella di riepilogo. Una casella di riepilogo Visualizza un elenco di elementi che l'utente può visualizzare e selezionare.

[CDragListBox](../mfc/reference/cdraglistbox-class.md)<br/>
Fornisce la funzionalità di una casella di riepilogo di Windows; consente all'utente di spostare elementi casella di riepilogo, ad esempio valori letterali stringa e i nomi file, all'interno della casella di elenco. Le caselle di riepilogo con questa funzionalità sono utili per un elenco di elementi in un ordine diverso da quello in ordine alfabetico, ad esempio includere nomi di percorso o i file in un progetto.

[CComboBox](../mfc/reference/ccombobox-class.md)<br/>
Una finestra di controllo casella combinata. Una casella combinata è costituita da un controllo di modifica e una casella di riepilogo.

[CComboBoxEx](../mfc/reference/ccomboboxex-class.md)<br/>
Estende il controllo della casella combinata fornendo il supporto per elenchi di immagini.

[CCheckListBox](../mfc/reference/cchecklistbox-class.md)<br/>
Consente di visualizzare un elenco di elementi con caselle di controllo, che l'utente può selezionare o deselezionare, accanto a ogni elemento.

[CListCtrl](../mfc/reference/clistctrl-class.md)<br/>
Visualizza una raccolta di elementi, ognuno costituito da un'icona e un'etichetta, in modo analogo nel riquadro a destra di Esplora File.

[CTreeCtrl](../mfc/reference/ctreectrl-class.md)<br/>
Consente di visualizzare un elenco gerarchico di icone e le etichette disposti in modo simile al riquadro sinistro di Esplora File.

## <a name="toolbars-and-status-bars"></a>Barre degli strumenti e le barre di stato

[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)<br/>
Fornisce la funzionalità del controllo barra degli strumenti comune di Windows. MFC la maggior parte dei programmi utilizzano [CToolBar](../mfc/reference/ctoolbar-class.md) invece di questa classe.

[CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)<br/>
Una finestra in orizzontale, in genere suddivisa in riquadri, in cui un'applicazione può visualizzare le informazioni sullo stato. MFC la maggior parte dei programmi utilizzano [CStatusBar](../mfc/reference/cstatusbar-class.md) invece di questa classe.

## <a name="miscellaneous-controls"></a>Vari controlli

[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)<br/>
Visualizza un clip video semplice.

[CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)<br/>
Una piccola finestra popup che consente di visualizzare una singola riga di testo che descrive lo scopo di uno strumento in un'applicazione.

[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)<br/>
Supporta un controllo di modifica estesa o un controllo di interfaccia semplice calendario, che consente agli utenti di scegliere una data specifica o un valore di ora.

[CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)<br/>
Visualizza i titoli o le etichette delle colonne.

[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)<br/>
Supporta un controllo di calendario semplice interfaccia che consente agli utenti di selezionare una data.

[CTabCtrl](../mfc/reference/ctabctrl-class.md)<br/>
Un controllo con le schede in cui l'utente può fare clic su, analoghe alle separatori in un notebook.

[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)<br/>
Consente all'utente di creare una combinazione di tasti a caldo, l'utente potrà selezionare per eseguire velocemente un'azione.

[CLinkCtrl](../mfc/reference/clinkctrl-class.md)<br/>
Esegue il rendering di testo contrassegnate-up e avvia le applicazioni appropriate quando l'utente fa clic sul collegamento incorporato.

[CHtmlEditCtrl](../mfc/reference/chtmleditctrl-class.md)<br/>
Fornisce la funzionalità del controllo ActiveX WebBrowser in una finestra MFC.

## <a name="related-classes"></a>Classi correlate

[CImageList](../mfc/reference/cimagelist-class.md)<br/>
Fornisce la funzionalità dell'elenco immagini di Windows. Gli elenchi immagini vengono usati con controlli elenco e controlli albero. Possono inoltre essere utilizzati per memorizzare e archiviare un set di immagini bitmap della stessa dimensione.

[CCtrlView](../mfc/reference/cctrlview-class.md)<br/>
Classe di base per tutte le visualizzazioni associate ai controlli di Windows. Le visualizzazioni basate su controlli sono descritti di seguito.

[CEditView](../mfc/reference/ceditview-class.md)<br/>
Controllo di modifica di una vista che contiene uno standard di Windows.

[CRichEditView](../mfc/reference/cricheditview-class.md)<br/>
Controllo di modifica di una vista che contiene un Windows avanzata.

[CListView](../mfc/reference/clistview-class.md)<br/>
Una vista che contiene un controllo elenco di Windows.

[CTreeView](../mfc/reference/ctreeview-class.md)<br/>
Una vista che contiene un controllo struttura ad albero di Windows.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
