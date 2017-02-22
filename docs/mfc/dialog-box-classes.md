---
title: "Classi di finestre di dialogo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.dialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di finestre di dialogo comuni"
  - "classi della finestra di dialogo"
  - "classi di finestre di dialogo comuni OLE"
  - "classi della finestra delle proprietà"
  - "finestre di dialogo a schede"
ms.assetid: db75da23-4eff-4c6c-beae-79cf046fbce9
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classi di finestre di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe `CDialog` e le relative classi derivate incapsulano funzionalità della finestra di dialogo.  Poiché una finestra di dialogo è un tipo speciale di finestra, `CDialog` è derivato da `CWnd`.  Derivare le classi di finestre di dialogo da `CDialog` o utilizzare una delle classi comuni della finestra di dialogo per le finestre di dialogo standard, quali l'apertura o salvataggio di un file, premere, selezionare un tipo di carattere o un colore, inizianti un'operazione ricerca\-e\- di sostituzione, o eseguire varie operazioni OLE correlate.  
  
 [CDialog](../mfc/reference/cdialog-class.md)  
 La classe base per tutte le finestre di dialogo modali, sia che non modali.  
  
 [CDataExchange](../mfc/reference/cdataexchange-class.md)  
 Fornisce scambio di dati e informazioni di convalida per le finestre di dialogo.  
  
## Finestre di dialogo comuni  
 Queste classi di finestre di dialogo includono le finestre di dialogo comuni di windows.  Forniscono le implementazioni di facile utilizzo delle finestre di dialogo componenti.  
  
 [CCommonDialog](../mfc/reference/ccommondialog-class.md)  
 Classe base per tutte le finestre di dialogo comuni.  
  
 [CFileDialog](../mfc/reference/cfiledialog-class.md)  
 Fornisce una finestra di dialogo standard per aprire o salvare un file.  
  
 [CColorDialog](../mfc/reference/ccolordialog-class.md)  
 Fornisce una finestra di dialogo standard per selezionare un colore.  
  
 [CFontDialog](../mfc/reference/cfontdialog-class.md)  
 Fornisce una finestra di dialogo standard per selezionare un tipo di carattere.  
  
 [CFindReplaceDialog](../mfc/reference/cfindreplacedialog-class.md)  
 Fornisce una finestra di dialogo standard per un'operazione ricerca\-e\-di sostituzione.  
  
 [CPrintDialog](../mfc/reference/cprintdialog-class.md)  
 Fornisce una finestra di dialogo standard di stampa di file.  
  
 [CPrintDialogEx](../mfc/reference/cprintdialogex-class.md)  
 Fornisce una finestra delle proprietà di stampa di Windows 2000.  
  
 [CPageSetupDialog](../mfc/reference/cpagesetupdialog-class.md)  
 Incapsula i servizi forniti dalla finestra di dialogo comuni di installazione di pagina windows supporto aggiuntivo per impostare e modificare i margini di stampa.  
  
## Finestre di dialogo comuni OLE  
 OLE aggiunte diverse finestre di dialogo comuni finestre.  Tali classi includono le finestre di dialogo comuni OLE.  
  
 [COleDialog](../mfc/reference/coledialog-class.md)  
 Utilizzato dal framework per contenere le implementazioni comuni a tutte le finestre di dialogo OLE.  Tutte le classi di finestre di dialogo della categoria dell'interfaccia utente sono derivate da questa classe base.  `COleDialog` non può essere utilizzato direttamente.  
  
 [COleInsertDialog](../mfc/reference/coleinsertdialog-class.md)  
 Visualizzare la finestra di dialogo insert new object, l'interfaccia utente standard per l'inserimento degli elementi collegati o incorporati nuovi OLE.  
  
 [COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md)  
 Visualizzare la finestra di dialogo edit paste special, l'interfaccia utente standard per implementare il comando edit paste special di modifica.  
  
 [COleLinksDialog](../mfc/reference/colelinksdialog-class.md)  
 Visualizzare la finestra di dialogo modifica dei collegamenti, l'interfaccia utente standard per modificare le informazioni sugli elementi collegati.  
  
 [COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md)  
 Visualizzare la finestra di dialogo modifica dell'icona, l'interfaccia utente standard per modificare l'icona associata a un OLE incorporato o l'elemento collegato.  
  
 [COleConvertDialog](../mfc/reference/coleconvertdialog-class.md)  
 Viene visualizzata la finestra di dialogo converti, l'interfaccia utente standard per la conversione degli elementi OLE da un tipo a un altro.  
  
 [COlePropertiesDialog](../mfc/reference/colepropertiesdialog-class.md)  
 Incapsula la finestra di dialogo OLE comune delle proprietà di windows.  Le finestre di dialogo comuni OLE proprietà consentono di visualizzare e modificare le proprietà di un elemento OLE di documento in modo coerente con gli standard di windows.  
  
 [COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md)  
 Visualizzare la finestra di dialogo di aggiornamento, l'interfaccia utente standard per aggiornare tutti i collegamenti in un documento.  La finestra di dialogo contenente un indicatore di stato per indicare la fine la procedura di aggiornamento viene completata.  
  
 [COleChangeSourceDialog](../mfc/reference/colechangesourcedialog-class.md)  
 Visualizzare la finestra di dialogo origine di modifica, l'interfaccia utente standard per modificare la destinazione oppure l'origine di un collegamento.  
  
 [COleBusyDialog](../mfc/reference/colebusydialog-class.md)  
 Visualizzazione delle finestre di dialogo di risposta occupate e server, l'interfaccia utente standard per gestire le chiamate alle applicazioni occupate.  In genere visualizzata automaticamente dall'implementazione di [COleMessageFilter](../mfc/reference/colemessagefilter-class.md).  
  
## Classi di finestre delle proprietà  
 Le classi di finestre delle proprietà consentono alle applicazioni di utilizzare le finestre delle proprietà, note anche come le finestre di dialogo a schede.  Le finestre delle proprietà sono un modo efficiente per organizzare numerosi controlli in una sola finestra di dialogo.  
  
 [CPropertyPage](../mfc/reference/cpropertypage-class.md)  
 Fornisce le singole pagine in una finestra delle proprietà.  Derivare la classe da `CPropertyPage` per ogni pagina vengano aggiunti alla finestra delle proprietà.  
  
 [CPropertySheet](../mfc/reference/cpropertysheet-class.md)  
 Fornisce il frame per le pagine delle proprietà.  Derivare la classe della finestra delle proprietà da `CPropertySheet` per implementare velocemente le finestre delle proprietà.  
  
 [COlePropertyPage](../mfc/reference/colepropertypage-class.md)  
 Visualizzare le proprietà di un controllo OLE in un'interfaccia grafica, analoga a una finestra di dialogo.  
  
## Classi basate su HTML della finestra di dialogo  
 [CDHtmlDialog](../mfc/reference/cdhtmldialog-class.md)  
 Utilizzato per creare finestre di dialogo che implementano la relativa interfaccia utente con HTML anziché le risorse finestra di dialogo.  
  
 [CMultiPageDHtmlDialog](../mfc/reference/cmultipagedhtmldialog-class.md)  
 Visualizzare più pagine HTML in sequenza e gestione degli eventi da ogni pagina.  
  
## Classi correlate  
 Queste classi non sono finestre di dialogo di per sé, ma utilizzano i modelli di finestra di dialogo e di gran parte del comportamento delle finestre di dialogo.  
  
 [CDialogBar](../mfc/reference/cdialogbar-class.md)  
 Una barra di controllo in base a un modello di finestra di dialogo.  
  
 [CFormView](../mfc/reference/cformview-class.md)  
 Una visualizzazione a scorrimento di cui il layout è definito nel modello di finestra di dialogo.  Derivare la classe da `CFormView` per implementare un'interfaccia utente basata su un modello di finestra di dialogo.  
  
 [CDaoRecordView](../mfc/reference/cdaorecordview-class.md)  
 Fornisce una visualizzazione form connessa direttamente a un oggetto recordset di \(DAO\) dell'oggetto di accesso ai dati.  Come tutte le visualizzazioni maschere, `CDaoRecordView` è basato su un modello di finestra di dialogo.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Fornisce una visualizzazione form connessa direttamente a un oggetto recordset ODBC \(open database connectivity\).  Come tutte le visualizzazioni maschere, `CRecordView` è basato su un modello di finestra di dialogo.  
  
 [CPrintInfo](../mfc/reference/cprintinfo-structure.md)  
 Una struttura contenente informazioni su un processo di anteprima di stampa o di stampa.  Utilizzato dall'architettura di stampa di [CView](../mfc/reference/cview-class.md).  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)