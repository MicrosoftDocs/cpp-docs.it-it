---
title: Classi di finestre di dialogo
ms.date: 11/04/2016
f1_keywords:
- vc.classes.dialog
helpviewer_keywords:
- property sheet classes
- dialog box classes
- OLE common dialog classes
- common dialog classes [MFC]
- tab dialog boxes
ms.assetid: db75da23-4eff-4c6c-beae-79cf046fbce9
ms.openlocfilehash: 2399b27fc081dcc810277079729b0e62ef80d603
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616947"
---
# <a name="dialog-box-classes"></a>Classi di finestre di dialogo

Classe `CDialog` e le relative classi derivate incapsulano la funzionalità della finestra di dialogo. Dal momento che una finestra di dialogo è un tipo speciale di finestra, `CDialog` è derivata da `CWnd` . Derivare le classi della finestra di dialogo da `CDialog` o utilizzare una delle classi di finestra di dialogo comuni per le finestre di dialogo standard, ad esempio l'apertura o il salvataggio di un file, la stampa, la selezione di un tipo di carattere o un colore, l'avvio di un'operazione di ricerca e sostituzione o l'esecuzione di varie operazioni correlate a OLE

[CDialog](reference/cdialog-class.md)<br/>
Classe base per tutte le finestre di dialogo, modali e non modali.

[CDataExchange](reference/cdataexchange-class.md)<br/>
Fornisce informazioni sulla convalida e lo scambio di dati per le finestre di dialogo.

## <a name="common-dialogs"></a>Finestre di dialogo comuni

Queste classi della finestra di dialogo incapsulano le finestre di dialogo comuni di Windows. Forniscono implementazioni di facile utilizzo di finestre di dialogo complesse.

[CCommonDialog](reference/ccommondialog-class.md)<br/>
Classe di base per tutte le finestre di dialogo comuni.

[CFileDialog](reference/cfiledialog-class.md)<br/>
Fornisce una finestra di dialogo standard per l'apertura o il salvataggio di un file.

[CColorDialog](reference/ccolordialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la selezione di un colore.

[CFontDialog](reference/cfontdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la selezione di un tipo di carattere.

[CFindReplaceDialog](reference/cfindreplacedialog-class.md)<br/>
Fornisce una finestra di dialogo standard per un'operazione di ricerca e sostituzione.

[CPrintDialog](reference/cprintdialog-class.md)<br/>
Fornisce una finestra di dialogo standard per la stampa di un file.

[CPrintDialogEx](reference/cprintdialogex-class.md)<br/>
Fornisce una finestra delle proprietà di stampa di Windows.

[CPageSetupDialog](reference/cpagesetupdialog-class.md)<br/>
Incapsula i servizi forniti dalla finestra di dialogo Imposta pagina comune di Windows con supporto aggiuntivo per l'impostazione e la modifica dei margini di stampa.

## <a name="ole-common-dialogs"></a>Finestre di dialogo comuni OLE

OLE aggiunge diverse finestre di dialogo comuni a Windows. Queste classi incapsulano le finestre di dialogo comuni OLE.

[COleDialog](reference/coledialog-class.md)<br/>
Utilizzato dal Framework per includere implementazioni comuni per tutte le finestre di dialogo OLE. Tutte le classi della finestra di dialogo nella categoria interfaccia utente sono derivate da questa classe di base. `COleDialog`non può essere utilizzato direttamente.

[COleInsertDialog](reference/coleinsertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Inserisci oggetto, l'interfaccia utente standard per l'inserimento di nuovi elementi collegati o incorporati OLE.

[COlePasteSpecialDialog](reference/colepastespecialdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Incolla speciale, l'interfaccia utente standard per l'implementazione del comando Modifica Incolla speciale.

[COleLinksDialog](reference/colelinksdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica collegamenti, l'interfaccia utente standard per la modifica delle informazioni sugli elementi collegati.

[COleChangeIconDialog](reference/colechangeicondialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Cambia icona, l'interfaccia utente standard per la modifica dell'icona associata a un elemento OLE incorporato o collegato.

[COleConvertDialog](reference/coleconvertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Converti, ovvero l'interfaccia utente standard per la conversione di elementi OLE da un tipo a un altro.

[COlePropertiesDialog](reference/colepropertiesdialog-class.md)<br/>
Incapsula la finestra di dialogo proprietà OLE comuni di Windows. Le finestre di dialogo delle proprietà OLE comuni forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows.

[Classe COleUpdateDialog](reference/coleupdatedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo aggiornamento, l'interfaccia utente standard per l'aggiornamento di tutti i collegamenti in un documento. La finestra di dialogo contiene un indicatore di stato per indicare la modalità di completamento della procedura di aggiornamento.

[COleChangeSourceDialog](reference/colechangesourcedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica origine, l'interfaccia utente standard per la modifica della destinazione o dell'origine di un collegamento.

[COleBusyDialog](reference/colebusydialog-class.md)<br/>
Consente di visualizzare le finestre di dialogo Server occupato e server non in risposta, l'interfaccia utente standard per la gestione delle chiamate alle applicazioni occupate. Viene in genere visualizzato automaticamente dall'implementazione di [COleMessageFilter](reference/colemessagefilter-class.md) .

## <a name="property-sheet-classes"></a>Classi della finestra delle proprietà

Le classi della finestra delle proprietà consentono alle applicazioni di utilizzare le finestre delle proprietà, note anche come finestre di dialogo a schede. Le finestre delle proprietà costituiscono un modo efficiente per organizzare un numero elevato di controlli in un'unica finestra di dialogo.

[CPropertyPage](reference/cpropertypage-class.md)<br/>
Fornisce le singole pagine all'interno di una finestra delle proprietà. Derivare una classe da `CPropertyPage` per ogni pagina da aggiungere alla finestra delle proprietà.

[CPropertySheet](reference/cpropertysheet-class.md)<br/>
Fornisce il frame per più pagine delle proprietà. Derivare la classe della finestra delle proprietà da `CPropertySheet` per implementare rapidamente le finestre delle proprietà.

[COlePropertyPage](reference/colepropertypage-class.md)<br/>
Consente di visualizzare le proprietà di un controllo OLE in un'interfaccia grafica, in modo analogo a una finestra di dialogo.

## <a name="html-based-dialog-classes"></a>Classi di finestre di dialogo basate su HTML

[CDHtmlDialog](reference/cdhtmldialog-class.md)<br/>
Utilizzato per creare finestre di dialogo che implementano l'interfaccia utente con HTML anziché con le risorse della finestra di dialogo.

[CMultiPageDHtmlDialog](reference/cmultipagedhtmldialog-class.md)<br/>
Visualizza più pagine HTML in sequenza e gestisce gli eventi da ogni pagina.

## <a name="related-classes"></a>Classi correlate

Queste classi non sono finestre di dialogo per se, ma usano i modelli di finestra di dialogo e hanno gran parte del comportamento delle finestre di dialogo.

[CDialogBar](reference/cdialogbar-class.md)<br/>
Barra di controllo basata su un modello di finestra di dialogo.

[CFormView](reference/cformview-class.md)<br/>
Visualizzazione a scorrimento il cui layout è definito in un modello di finestra di dialogo. Derivare una classe da `CFormView` per implementare un'interfaccia utente basata su un modello di finestra di dialogo.

[CDaoRecordView](reference/cdaorecordview-class.md)<br/>
Fornisce una visualizzazione form connessa direttamente a un oggetto recordset DAO (Data Access Object). Analogamente a tutte le visualizzazioni form, un `CDaoRecordView` è basato su un modello di finestra di dialogo.

[CRecordView](reference/crecordview-class.md)<br/>
Fornisce una visualizzazione form connessa direttamente a un oggetto recordset Open Database Connectivity (ODBC). Analogamente a tutte le visualizzazioni form, un `CRecordView` è basato su un modello di finestra di dialogo.

[CPrintInfo](reference/cprintinfo-structure.md)<br/>
Struttura che contiene informazioni su un processo di stampa o di anteprima di stampa. Utilizzato dall'architettura di stampa di [CView](reference/cview-class.md).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)
