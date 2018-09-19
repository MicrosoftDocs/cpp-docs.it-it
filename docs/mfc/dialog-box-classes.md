---
title: Classi di finestre di dialogo | Microsoft Docs
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
ms.openlocfilehash: 177e6f7ab0787ba3eccfe963f08963697747145e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399509"
---
# <a name="dialog-box-classes"></a>Classi di finestre di dialogo

Classe `CDialog` e le relative classi derivate incapsulano funzionalità finestra di dialogo. Poiché una finestra di dialogo è un tipo speciale di finestra `CDialog` è derivato da `CWnd`. Derivare le classi di finestra di dialogo da `CDialog` o usare una delle classi di finestra di dialogo comune per le finestre di dialogo standard, ad esempio apertura o salvataggio di un file, stampa, la selezione di un tipo di carattere o colori, avvio di un'operazione di ricerca e sostituzione oppure eseguire varie correlate a OLE operazioni.

[CDialog](../mfc/reference/cdialog-class.md)<br/>
La classe base per tutte le finestre di dialogo modali e non modali.

[CDataExchange](../mfc/reference/cdataexchange-class.md)<br/>
Fornisce informazioni di exchange e la convalida dei dati per le finestre di dialogo.

## <a name="common-dialogs"></a>Finestre di dialogo comuni

Queste classi di finestra di dialogo incapsulano le finestre di dialogo comuni di Windows. Forniscono le implementazioni di facile utilizzo delle finestre di dialogo complessa.

[CCommonDialog](../mfc/reference/ccommondialog-class.md)<br/>
Classe di base per tutte le finestre di dialogo comuni.

[CFileDialog](../mfc/reference/cfiledialog-class.md)<br/>
Fornisce una finestra di dialogo standard per l'apertura o salvataggio di un file.

[CColorDialog](../mfc/reference/ccolordialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la selezione di un colore.

[CFontDialog](../mfc/reference/cfontdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la selezione di un tipo di carattere.

[CFindReplaceDialog.](../mfc/reference/cfindreplacedialog-class.md)<br/>
Fornisce una finestra di dialogo standard per un'operazione di ricerca e sostituzione.

[CPrintDialog](../mfc/reference/cprintdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la stampa di un file.

[CPrintDialogEx](../mfc/reference/cprintdialogex-class.md)<br/>
Fornisce una finestra delle proprietà di stampa di Windows.

[CPageSetupDialog](../mfc/reference/cpagesetupdialog-class.md)<br/>
Incapsula i servizi forniti dalla finestra di dialogo Imposta pagina comune di Windows con supporto aggiuntivo per l'impostazione e modifica i margini di stampa.

## <a name="ole-common-dialogs"></a>Finestre di dialogo comuni OLE

OLE aggiunge diverse finestre di dialogo comuni di Windows. Queste classi includono le finestre di dialogo comuni OLE.

[COleDialog](../mfc/reference/coledialog-class.md)<br/>
Utilizzato dal framework per contenere le implementazioni comuni per tutte le finestre di dialogo OLE. Tutte le classi di finestra di dialogo nella categoria dell'interfaccia utente sono derivate da questa classe di base. `COleDialog` non può essere utilizzata direttamente.

[Classe COleInsertDialog](../mfc/reference/coleinsertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Inserisci oggetto, l'interfaccia utente standard per l'inserimento di nuovi OLE elementi collegati o incorporati.

[COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Incolla speciale, l'interfaccia utente standard per l'implementazione del comando Modifica Incolla speciale.

[COleLinksDialog](../mfc/reference/colelinksdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica collegamenti, l'interfaccia utente standard per la modifica delle informazioni sugli elementi collegati.

[COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Cambia icona, l'interfaccia utente standard per modificare l'icona associata a un oggetto OLE incorporato o un elemento collegato.

[COleConvertDialog](../mfc/reference/coleconvertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Converti, l'interfaccia utente standard per la conversione di elementi OLE da un tipo a altro.

[COlePropertiesDialog](../mfc/reference/colepropertiesdialog-class.md)<br/>
Incapsula la finestra di dialogo Windows OLE proprietà comune. Finestre di dialogo comuni OLE proprietà forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento documento OLE in modo coerente con gli standard di Windows.

[Classe COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo di aggiornamento, l'interfaccia utente standard per l'aggiornamento di tutti i collegamenti in un documento. La finestra di dialogo contiene un indicatore di stato per indicare come chiudere la procedura di aggiornamento è fino al completamento.

[COleChangeSourceDialog](../mfc/reference/colechangesourcedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica origine, l'interfaccia utente standard per la modifica della destinazione o l'origine di un collegamento.

[COleBusyDialog](../mfc/reference/colebusydialog-class.md)<br/>
Consente di visualizzare le finestre di dialogo Server occupato e Server non risponde, l'interfaccia utente standard per la gestione delle chiamate alle applicazioni occupate. In genere visualizzati automaticamente dal [COleMessageFilter](../mfc/reference/colemessagefilter-class.md) implementazione.

## <a name="property-sheet-classes"></a>Classi di finestra delle proprietà

Le classi di finestra delle proprietà consentono alle applicazioni di utilizzare finestre delle proprietà, le finestre di dialogo a schede noto anche come. Finestre delle proprietà sono un metodo efficace per organizzare un numero elevato di controlli in una finestra di dialogo.

[CPropertyPage](../mfc/reference/cpropertypage-class.md)<br/>
Fornisce le singole pagine all'interno di una finestra delle proprietà. Derivare una classe da `CPropertyPage` per ogni pagina da aggiungere per la finestra delle proprietà.

[CPropertySheet](../mfc/reference/cpropertysheet-class.md)<br/>
Fornisce il frame per più pagine delle proprietà. Derivare la classe di finestra delle proprietà da `CPropertySheet` per implementare rapidamente le finestre delle proprietà.

[COlePropertyPage](../mfc/reference/colepropertypage-class.md)<br/>
Consente di visualizzare le proprietà di un oggetto OLE controllano in un'interfaccia grafica, simile a una finestra di dialogo.

## <a name="html-based-dialog-classes"></a>Classi di finestra di dialogo basata su HTML

[CDHtmlDialog](../mfc/reference/cdhtmldialog-class.md)<br/>
Consente di creare finestre di dialogo che implementano la propria interfaccia utente con le risorse HTML anziché come finestra di dialogo.

[CMultiPageDHtmlDialog](../mfc/reference/cmultipagedhtmldialog-class.md)<br/>
Visualizza più pagine HTML in sequenza e gestisce gli eventi da ogni pagina.

## <a name="related-classes"></a>Classi correlate

Queste classi non sono finestre di dialogo per sé, ma usare i modelli di finestra di dialogo e disporre di gran parte del comportamento delle finestre di dialogo.

[CDialogBar](../mfc/reference/cdialogbar-class.md)<br/>
Una barra di controllo basato su un modello di finestra di dialogo.

[CFormView](../mfc/reference/cformview-class.md)<br/>
Una visualizzazione a scorrimento la cui layout viene definito in un modello di finestra di dialogo. Derivare una classe da `CFormView` per implementare un'interfaccia utente basata su un modello di finestra di dialogo.

[CDaoRecordView](../mfc/reference/cdaorecordview-class.md)<br/>
Fornisce un modulo visualizzazione connessa direttamente a un oggetto recordset oggetto DAO (Data Access). Come tutte le visualizzazioni di form, un `CDaoRecordView` si basa su un modello di finestra di dialogo.

[CRecordView](../mfc/reference/crecordview-class.md)<br/>
Fornisce un modulo visualizzazione connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Come tutte le visualizzazioni di form, un `CRecordView` si basa su un modello di finestra di dialogo.

[CPrintInfo](../mfc/reference/cprintinfo-structure.md)<br/>
Una struttura contenente informazioni su un processo di anteprima di stampa o stampa. Utilizzato dall'architettura di stampa della [CView](../mfc/reference/cview-class.md).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

