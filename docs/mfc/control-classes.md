---
description: 'Altre informazioni su: classi di controlli'
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
ms.openlocfilehash: eb0bee6d865867a052b5f49408bdaa1b70da343f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310122"
---
# <a name="control-classes"></a>Classi dei controlli

Le classi di controllo incapsulano un'ampia gamma di controlli Windows standard che variano da controlli di testo statici a controlli struttura ad albero. MFC fornisce inoltre alcuni nuovi controlli, inclusi pulsanti con bitmap e barre di controllo.

I controlli i cui nomi di classe terminano con "**CTRL**" sono stati nuovi in Windows 95 e Windows NT versione 3,51.

## <a name="static-display-controls"></a>Controlli di visualizzazione statici

[CStatic](reference/cstatic-class.md)<br/>
Una finestra di visualizzazione statica. I controlli statici vengono usati per etichettare, box o separare altri controlli in una finestra di dialogo o in una finestra. Possono anche visualizzare immagini grafiche anziché testo o una casella.

## <a name="text-controls"></a>Controlli testo

[CEdit](reference/cedit-class.md)<br/>
Una finestra di controllo di testo modificabile. I controlli di modifica vengono usati per accettare l'input testuale dall'utente.

[CIPAddressCtrl](reference/cipaddressctrl-class.md)<br/>
Supporta una casella di modifica per la modifica di un indirizzo IP (Internet Protocol).

[CRichEditCtrl](reference/cricheditctrl-class.md)<br/>
Controllo in cui l'utente può immettere e modificare il testo. A differenza del controllo incapsulato in `CEdit` , un controllo Rich Edit supporta la formattazione di caratteri e paragrafi e gli oggetti OLE.

## <a name="controls-that-represent-numbers"></a>Controlli che rappresentano i numeri

[CSliderCtrl](reference/csliderctrl-class.md)<br/>
Controllo contenente un dispositivo di scorrimento, che l'utente sposta per selezionare un valore o un set di valori.

[CSpinButtonCtrl](reference/cspinbuttonctrl-class.md)<br/>
Coppia di pulsanti freccia su cui l'utente può fare clic per incrementare o decrementare un valore.

[CProgressCtrl](reference/cprogressctrl-class.md)<br/>
Visualizza un rettangolo che viene gradualmente riempito da sinistra verso destra per indicare lo stato di avanzamento di un'operazione.

[CScrollBar](reference/cscrollbar-class.md)<br/>
Finestra di controllo barra di scorrimento. La classe fornisce la funzionalità di una barra di scorrimento, da utilizzare come controllo in una finestra di dialogo o in una finestra, tramite la quale l'utente può specificare una posizione all'interno di un intervallo.

## <a name="buttons"></a>Pulsanti

[CButton](reference/cbutton-class.md)<br/>
Finestra di controllo Button. La classe fornisce un'interfaccia a livello di codice per un pulsante di comando, una casella di controllo o un pulsante di opzione in una finestra di dialogo o in una finestra.

[CBitmapButton](reference/cbitmapbutton-class.md)<br/>
Pulsante con bitmap anziché come didascalia di testo.

## <a name="lists"></a>Elenchi

[CListBox](reference/clistbox-class.md)<br/>
Una finestra di controllo casella di riepilogo. In una casella di riepilogo viene visualizzato un elenco di elementi che l'utente può visualizzare e selezionare.

[CDragListBox](reference/cdraglistbox-class.md)<br/>
Fornisce la funzionalità di una casella di riepilogo di Windows. consente all'utente di spostare gli elementi della casella di riepilogo, ad esempio i nomi di file e i valori letterali stringa, all'interno della casella di riepilogo. Le caselle di riepilogo con questa funzionalità sono utili per un elenco di elementi in un ordine diverso dall'alfabetico, ad esempio i nomi di percorso o i file in un progetto.

[CComboBox](reference/ccombobox-class.md)<br/>
Finestra del controllo casella combinata. Una casella combinata è costituita da un controllo di modifica più una casella di riepilogo.

[CComboBoxEx](reference/ccomboboxex-class.md)<br/>
Estende il controllo della casella combinata fornendo il supporto per elenchi di immagini.

[CCheckListBox](reference/cchecklistbox-class.md)<br/>
Visualizza un elenco di elementi con caselle di controllo che l'utente può selezionare o deselezionare accanto a ogni elemento.

[CListCtrl](reference/clistctrl-class.md)<br/>
Visualizza una raccolta di elementi, ognuno costituito da un'icona e un'etichetta, in modo simile al riquadro destro di Esplora file.

[CTreeCtrl](reference/ctreectrl-class.md)<br/>
Visualizza un elenco gerarchico di icone ed etichette disposte in modo simile al riquadro sinistro di Esplora file.

## <a name="toolbars-and-status-bars"></a>Barre degli strumenti e barre di stato

[CToolBarCtrl](reference/ctoolbarctrl-class.md)<br/>
Fornisce la funzionalità del controllo barra degli strumenti comune di Windows. La maggior parte dei programmi MFC utilizza [CToolBar](reference/ctoolbar-class.md) anziché questa classe.

[CStatusBarCtrl](reference/cstatusbarctrl-class.md)<br/>
Finestra orizzontale, in genere divisa in riquadri, in cui un'applicazione può visualizzare informazioni sullo stato. La maggior parte dei programmi MFC utilizza [CStatusBar](reference/cstatusbar-class.md) anziché questa classe.

## <a name="miscellaneous-controls"></a>Controlli vari

[CAnimateCtrl](reference/canimatectrl-class.md)<br/>
Visualizza un semplice clip video.

[CToolTipCtrl](reference/ctooltipctrl-class.md)<br/>
Piccola finestra popup che visualizza una singola riga di testo che descrive lo scopo di uno strumento in un'applicazione.

[CDateTimeCtrl](reference/cdatetimectrl-class.md)<br/>
Supporta un controllo di modifica esteso o un semplice controllo dell'interfaccia Calendar, che consente a un utente di scegliere un valore di data o ora specifico.

[CHeaderCtrl](reference/cheaderctrl-class.md)<br/>
Visualizza i titoli o le etichette per le colonne.

[CMonthCalCtrl](reference/cmonthcalctrl-class.md)<br/>
Supporta un semplice controllo dell'interfaccia Calendar che consente a un utente di selezionare una data.

[CTabCtrl](reference/ctabctrl-class.md)<br/>
Controllo con le schede su cui l'utente può fare clic, in modo analogo ai separatori in un notebook.

[CHotKeyCtrl](reference/chotkeyctrl-class.md)<br/>
Consente all'utente di creare una combinazione di tasti di scelta rapida, che l'utente può premere per eseguire rapidamente un'azione.

[CLinkCtrl](reference/clinkctrl-class.md)<br/>
Esegue il rendering del testo contrassegnato e avvia le applicazioni appropriate quando l'utente fa clic sul collegamento incorporato.

[CHtmlEditCtrl](reference/chtmleditctrl-class.md)<br/>
Fornisce la funzionalità del controllo ActiveX WebBrowser in una finestra MFC.

## <a name="related-classes"></a>Classi correlate

[CImageList](reference/cimagelist-class.md)<br/>
Fornisce la funzionalità dell'elenco immagini di Windows. Gli elenchi immagini vengono usati con controlli elenco e controlli albero. Possono inoltre essere utilizzati per memorizzare e archiviare un set di immagini bitmap della stessa dimensione.

[CCtrlView](reference/cctrlview-class.md)<br/>
Classe base per tutte le visualizzazioni associate ai controlli Windows. Le visualizzazioni basate sui controlli sono descritte di seguito.

[CEditView](reference/ceditview-class.md)<br/>
Vista che contiene un controllo di modifica standard di Windows.

[CRichEditView](reference/cricheditview-class.md)<br/>
Visualizzazione contenente un controllo Rich Edit di Windows.

[CListView](reference/clistview-class.md)<br/>
Visualizzazione contenente un controllo elenco di Windows.

[CTreeView](reference/ctreeview-class.md)<br/>
Visualizzazione contenente un controllo albero di Windows.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
