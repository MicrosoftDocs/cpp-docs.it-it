---
title: Classi di finestra di dialogo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.dialog
dev_langs:
- C++
helpviewer_keywords:
- property sheet classes
- dialog box classes
- OLE common dialog classes
- common dialog classes [MFC]
- tab dialog boxes
ms.assetid: db75da23-4eff-4c6c-beae-79cf046fbce9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 60d33289d8025d7cdcaf4f6f69062230730b958c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33351689"
---
# <a name="dialog-box-classes"></a>Classi di finestre di dialogo
Classe `CDialog` e le relative classi derivate incapsulano la funzionalità di finestra di dialogo. Poiché una finestra di dialogo è un tipo speciale di finestra, `CDialog` è derivato da `CWnd`. Derivare le classi di finestra di dialogo da `CDialog` o utilizzare una delle classi di finestra di dialogo comune per le finestre di dialogo standard, ad esempio l'apertura o salvataggio di un file, stampa, la selezione di un tipo di carattere o un colore, avvia un'operazione di ricerca e sostituzione o l'esecuzione di varie correlate a OLE operazioni.  
  
 [CDialog](../mfc/reference/cdialog-class.md)  
 La classe base per tutte le finestre di dialogo modale sia non modale.  
  
 [CDataExchange](../mfc/reference/cdataexchange-class.md)  
 Fornisce informazioni di exchange e convalida dei dati per le finestre di dialogo.  
  
## <a name="common-dialogs"></a>Finestre di dialogo comuni  
 Queste classi di finestra di dialogo includono le finestre di dialogo comuni di Windows. Forniscono le implementazioni di semplice utilizzo di finestre di dialogo complicata.  
  
 [CCommonDialog](../mfc/reference/ccommondialog-class.md)  
 Classe di base per tutte le finestre di dialogo comune.  
  
 [CFileDialog](../mfc/reference/cfiledialog-class.md)  
 Fornisce una finestra di dialogo standard per l'apertura o salvataggio di un file.  
  
 [CColorDialog](../mfc/reference/ccolordialog-class.md)  
 Fornisce una finestra di dialogo standard per la selezione di un colore.  
  
 [CFontDialog](../mfc/reference/cfontdialog-class.md)  
 Fornisce una finestra di dialogo standard per la selezione di un tipo di carattere.  
  
 [CFindReplaceDialog.](../mfc/reference/cfindreplacedialog-class.md)  
 Fornisce una finestra di dialogo standard per un'operazione di ricerca e sostituzione.  
  
 [CPrintDialog](../mfc/reference/cprintdialog-class.md)  
 Fornisce una finestra di dialogo standard per la stampa di un file.  
  
 [CPrintDialogEx](../mfc/reference/cprintdialogex-class.md)  
 Fornisce una finestra delle proprietà di stampa Windows.  
  
 [CPageSetupDialog](../mfc/reference/cpagesetupdialog-class.md)  
 Incapsula i servizi forniti nella finestra di dialogo Imposta pagina comune Windows con supporto aggiuntivo per l'impostazione e modifica dei margini di stampanti.  
  
## <a name="ole-common-dialogs"></a>Finestre di dialogo comuni OLE  
 OLE aggiunge diverse finestre di dialogo comuni di Windows. Tali classi includono finestre di dialogo comuni OLE.  
  
 [COleDialog](../mfc/reference/coledialog-class.md)  
 Utilizzata dal framework per contenere le implementazioni comuni per tutte le finestre di dialogo OLE. Tutte le classi di finestra di dialogo nella categoria dell'interfaccia utente derivano da questa classe di base. `COleDialog` non può essere utilizzata direttamente.  
  
 [Classe COleInsertDialog](../mfc/reference/coleinsertdialog-class.md)  
 Consente di visualizzare la finestra di dialogo Inserisci oggetto, l'interfaccia utente standard per l'inserimento di nuovi OLE elementi collegati o incorporati.  
  
 [COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md)  
 Consente di visualizzare la finestra di dialogo Incolla speciale, l'interfaccia utente standard per l'implementazione del comando di modifica Incolla speciale.  
  
 [COleLinksDialog](../mfc/reference/colelinksdialog-class.md)  
 Consente di visualizzare la finestra di dialogo Modifica collegamenti, l'interfaccia utente standard per la modifica di informazioni sugli elementi collegati.  
  
 [COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md)  
 Consente di visualizzare la finestra di dialogo Cambia icona, l'interfaccia utente standard per modificare l'icona associata a OLE incorporato o un elemento collegato.  
  
 [COleConvertDialog](../mfc/reference/coleconvertdialog-class.md)  
 Consente di visualizzare la finestra di dialogo Converti, l'interfaccia utente standard per la conversione di elementi OLE da un tipo a un altro.  
  
 [COlePropertiesDialog](../mfc/reference/colepropertiesdialog-class.md)  
 Incapsula la finestra di dialogo Windows comune delle proprietà OLE. Finestre di dialogo comuni OLE proprietà forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows.  
  
 [Classe COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md)  
 Consente di visualizzare la finestra di dialogo aggiornamento, l'interfaccia utente standard per l'aggiornamento di tutti i collegamenti in un documento. Nella finestra di dialogo contiene un indicatore di stato per indicare come chiudere la procedura di aggiornamento fino al completamento.  
  
 [COleChangeSourceDialog](../mfc/reference/colechangesourcedialog-class.md)  
 Consente di visualizzare la finestra di dialogo Modifica origine, l'interfaccia utente standard per la modifica della destinazione o origine di un collegamento.  
  
 [COleBusyDialog](../mfc/reference/colebusydialog-class.md)  
 Consente di visualizzare le finestre di dialogo Server occupato e Server non risponde, l'interfaccia utente standard per la gestione delle chiamate alle applicazioni occupate. In genere visualizzati automaticamente dal [COleMessageFilter](../mfc/reference/colemessagefilter-class.md) implementazione.  
  
## <a name="property-sheet-classes"></a>Classi della finestra delle proprietà  
 Le classi di finestra delle proprietà consentono alle applicazioni di utilizzare finestre delle proprietà, noto anche come schede di finestre di dialogo. Finestre delle proprietà sono un modo efficace per organizzare un numero elevato di controlli in una finestra di dialogo.  
  
 [CPropertyPage](../mfc/reference/cpropertypage-class.md)  
 Fornisce le singole pagine all'interno di una finestra delle proprietà. Derivare una classe da `CPropertyPage` per ogni pagina da aggiungere per la finestra delle proprietà.  
  
 [CPropertySheet](../mfc/reference/cpropertysheet-class.md)  
 Fornisce il frame per più pagine delle proprietà. Derivare la classe della finestra delle proprietà da `CPropertySheet` per implementare rapidamente le finestre delle proprietà.  
  
 [COlePropertyPage](../mfc/reference/colepropertypage-class.md)  
 Visualizza le proprietà di OLE controllano in un'interfaccia grafica, simile a una finestra di dialogo.  
  
## <a name="html-based-dialog-classes"></a>Classi di finestra di dialogo basate su HTML  
 [CDHtmlDialog](../mfc/reference/cdhtmldialog-class.md)  
 Consente di creare finestre di dialogo che implementano l'interfaccia utente con risorse HTML anziché come finestra di dialogo.  
  
 [CMultiPageDHtmlDialog](../mfc/reference/cmultipagedhtmldialog-class.md)  
 Visualizza più pagine HTML in sequenza e gestisce gli eventi da ogni pagina.  
  
## <a name="related-classes"></a>Classi correlate  
 Queste classi non sono finestre di dialogo per sé, ma utilizzare modelli di finestra di dialogo e disporre di gran parte del comportamento delle finestre di dialogo.  
  
 [CDialogBar](../mfc/reference/cdialogbar-class.md)  
 Barra di controllo basato su un modello di finestra di dialogo.  
  
 [CFormView](../mfc/reference/cformview-class.md)  
 Una visualizzazione a scorrimento il cui layout viene definito in un modello di finestra di dialogo. Derivare una classe da `CFormView` per implementare un'interfaccia utente in base a un modello di finestra di dialogo.  
  
 [CDaoRecordView](../mfc/reference/cdaorecordview-class.md)  
 Fornisce una visualizzazione connessa direttamente a un oggetto recordset oggetto DAO (Data Access). Come tutte le visualizzazioni di form, un `CDaoRecordView` si basa su un modello di finestra di dialogo.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Fornisce una visualizzazione connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Come tutte le visualizzazioni di form, un `CRecordView` si basa su un modello di finestra di dialogo.  
  
 [CPrintInfo](../mfc/reference/cprintinfo-structure.md)  
 Una struttura contenente informazioni su un processo di anteprima di stampa o stampa. Utilizzato dall'architettura di stampa di [CView](../mfc/reference/cview-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

