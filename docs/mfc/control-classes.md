---
title: "Classi dei controlli | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.control"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pulsanti, classi di controlli MFC"
  - "classi di controlli"
  - "classi di controlli, MFC"
  - "controlli [C++], classi di controlli MFC"
  - "controlli [MFC]"
  - "caselle di riepilogo, classi di controlli MFC"
  - "controlli di visualizzazione statica"
  - "testo, controlli per input"
  - "input utente, classi di controlli MFC"
ms.assetid: f9876606-9f5b-44cb-9135-213298d1df8f
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi dei controlli
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi di controlli includono un'ampia gamma di controlli Windows standard che spaziano dai controlli di testo statico ai controlli struttura ad albero.  Inoltre, MFC fornisce nuovi controlli, quali pulsanti con bitmap e le barre di controllo.  
  
 I controlli dei cui nomi della classe terminano con "in**CTRL**" sono nuovi in Windows NT versione 3,51 e Windows 95.  
  
## Controlli di visualizzazione statici  
 [CStatic](../mfc/reference/cstatic-class.md)  
 Una finestra di statico\- visualizzazione.  I controlli statici vengono utilizzate per contrassegnare, boxing, o separare gli altri controlli in una finestra di dialogo o in una finestra.  È inoltre possibile visualizzare immagini grafiche anziché testo o una casella.  
  
## Controlli di testo  
 [CEdit](../mfc/reference/cedit-class.md)  
 Una finestra di controllo del modificabile\- testo.  I controlli di modifica vengono utilizzati per accettare l'input di testo dall'utente.  
  
 [CIPAddressCtrl](../mfc/reference/cipaddressctrl-class.md)  
 Supporta una casella di modifica per modificare un indirizzo di \(IP\) del protocollo Internet.  
  
 [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)  
 Un controllo in cui l'utente può immettere e modificare testo.  A differenza del controllo incapsulato in `CEdit`, un controllo Rich Edit supporta il carattere e formattazione dei paragrafi e oggetti OLE.  
  
## Controlli che rappresentano numeri  
 [CSliderCtrl](../mfc/reference/csliderctrl-class.md)  
 Un controllo che contiene un dispositivo di scorrimento, che l'utente passa per selezionare un valore o un insieme di valori.  
  
 [CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)  
 Una coppia di frecce che l'utente può utilizzare per incrementare o decrementare un valore.  
  
 [CProgressCtrl](../mfc/reference/cprogressctrl-class.md)  
 Visualizzare un rettangolo che viene riempito gradualmente da sinistra verso destra per indicare lo stato di avanzamento di un'operazione.  
  
 [CScrollBar](../mfc/reference/cscrollbar-class.md)  
 Una finestra del controllo scrollbar.  La classe fornisce le funzionalità di una barra di scorrimento, da utilizzare come controllo in una finestra di dialogo o una finestra, da cui l'utente può specificare una posizione in un intervallo.  
  
## Pulsanti  
 [CButton](../mfc/reference/cbutton-class.md)  
 Una finestra di pulsante.  La classe fornisce un'interfaccia di programmazione per un pulsante, una casella di controllo, o un pulsante di opzione in una finestra di dialogo o in una finestra.  
  
 [CBitmapButton](../mfc/reference/cbitmapbutton-class.md)  
 Un pulsante con un'immagine bitmap anziché una didascalia del testo.  
  
## Elenchi  
 [CListBox](../mfc/reference/clistbox-class.md)  
 Una finestra di controllo listbox.  Una casella di riepilogo viene visualizzato un elenco di elementi che l'utente può visualizzare e selezionare.  
  
 [CDragListBox](../mfc/reference/cdraglistbox-class.md)  
 Fornisce la funzionalità di una casella di riepilogo di windows; consente all'utente agli elementi della casella di riepilogo di spostamento, ad esempio i nomi di file e valori letterali stringa, nella casella di riepilogo.  Le caselle di riepilogo con questa funzionalità sono utili per un elenco di elementi in un ordine non alfabetico, come includere i nomi di percorso o i file in un progetto.  
  
 [CComboBox](../mfc/reference/ccombobox-class.md)  
 Una finestra di controllo casella combinata.  Una casella combinata è un controllo di modifica più una casella di riepilogo.  
  
 [CComboBoxEx](../mfc/reference/ccomboboxex-class.md)  
 Estende il controllo della casella combinata fornendo il supporto per elenchi di immagini.  
  
 [CCheckListBox](../mfc/reference/cchecklistbox-class.md)  
 Visualizza un elenco di elementi con le caselle di controllo, che l'utente può controllare o rimuovere, accanto a ciascun elemento.  
  
 [CListCtrl](../mfc/reference/clistctrl-class.md)  
 Visualizza una raccolta di elementi, ognuno costituito da un'icona e di un'etichetta, in modo simile al riquadro destro di Esplora file.  
  
 [CTreeCtrl](../mfc/reference/ctreectrl-class.md)  
 Visualizza un elenco gerarchico delle icone e le etichette disposte in un simile a sinistra del riquadro modo Esplora file.  
  
## Barre degli strumenti e barre di stato  
 [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)  
 Fornisce la funzionalità del controllo barra degli strumenti comune di Windows.  La maggior parte di [CToolBar](../mfc/reference/ctoolbar-class.md) utilizzo di programmi MFC anziché di questa classe.  
  
 [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)  
 Una finestra orizzontale, in genere suddivisa nei riquadri, nella quale un'applicazione può visualizzare le informazioni sullo stato.  La maggior parte di [CStatusBar](../mfc/reference/cstatusbar-class.md) utilizzo di programmi MFC anziché di questa classe.  
  
## Diversi controlli  
 [CAnimateCtrl](../mfc/reference/canimatectrl-class.md)  
 Visualizzare un filmato semplice.  
  
 [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)  
 Una piccola finestra popup che visualizza una sola riga di testo che descrive lo scopo di uno strumento in un'applicazione.  
  
 [CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)  
 Supporta un controllo di modifica esteso, o di un controllo semplice interfaccia del calendario, che consente a un utente di scegliere una data specifica o il valore temporale.  
  
 [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)  
 Titoli o etichette delle visualizzazioni per le colonne.  
  
 [CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)  
 Supporta un controllo di semplice interfaccia del calendario che consente a un utente di selezionare una data.  
  
 [CTabCtrl](../mfc/reference/ctabctrl-class.md)  
 Un controllo con schede sul quale l'utente può fare clic, analoghe ai divisori di un blocco appunti.  
  
 [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)  
 Consente all'utente per creare una combinazione di tasti di scelta, che l'utente possa raggiungere per eseguire rapidamente un'azione.  
  
 [CLinkCtrl](../mfc/reference/clinkctrl-class.md)  
 Esegue il rendering del testo contrassegnato e avvia applicazioni adatte quando l'utente fa clic sul collegamento incorporato.  
  
 [CHtmlEditCtrl](../mfc/reference/chtmleditctrl-class.md)  
 Fornisce la funzionalità del controllo ActiveX WebBrowser in una finestra MFC.  
  
## Classi correlate  
 [CImageList](../mfc/reference/cimagelist-class.md)  
 Fornisce la funzionalità dell'elenco Windows image.  Gli elenchi di immagini vengono utilizzati con i controlli elenco e i controlli struttura ad albero.  Possono essere utilizzati per archiviare e archiviare un insieme di immagini bitmap lo stesso ridimensionamento.  
  
 [CCtrlView](../mfc/reference/cctrlview-class.md)  
 La classe base per tutte le visualizzazioni associata ai controlli Windows.  Le visualizzazioni basate sui controlli vengono descritte di seguito.  
  
 [CEditView](../mfc/reference/ceditview-class.md)  
 Una visualizzazione contenente un controllo edit standard di windows.  
  
 [CRichEditView](../mfc/reference/cricheditview-class.md)  
 Una visualizzazione contenente un controllo Rich Edit di windows.  
  
 [CListView](../mfc/reference/clistview-class.md)  
 Una visualizzazione contenente un controllo elenco di windows.  
  
 [CTreeView](../mfc/reference/ctreeview-class.md)  
 Una visualizzazione contenente un controllo struttura ad albero delle finestre.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)