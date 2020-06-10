---
title: Documenti con più pagine
ms.date: 11/19/2018
helpviewer_keywords:
- pagination [MFC]
- overriding [MFC], View class functions for printing
- OnPrepareDC method [MFC]
- CPrintInfo structure [MFC], multipage documents
- OnEndPrinting method [MFC]
- protocols [MFC], printing protocol
- document pages vs. printer pages [MFC]
- printer mode [MFC]
- printing [MFC], multipage documents
- printers [MFC], printer mode
- documents [MFC], printing
- OnPreparePrinting method [MFC]
- OnPrint method [MFC]
- DoPreparePrinting method and pagination [MFC]
- OnDraw method [MFC], printing
- pagination [MFC], printing multipage documents
- printing [MFC], protocol
- pages [MFC], printing
- OnBeginPrinting method [MFC]
- multipage documents [MFC]
- printing [MFC], pagination
- documents [MFC], paginating
ms.assetid: 69626b86-73ac-4b74-b126-9955034835ef
ms.openlocfilehash: c73692c315b07d6b690180886d494ee12f85f52d
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621051"
---
# <a name="multipage-documents"></a>Documenti con più pagine

In questo articolo viene descritto il protocollo di stampa di Windows e viene illustrato come stampare documenti che contengono più di una pagina. L'articolo descrive gli argomenti seguenti:

- [Protocollo di stampa](#_core_the_printing_protocol)

- [Override delle funzioni della classe di visualizzazione](#_core_overriding_view_class_functions)

- [Paginazione](#_core_pagination)

- [Pagine stampanti e pagine documento](#_core_printer_pages_vs.._document_pages)

- [Impaginazione dell'ora di stampa](#_core_print.2d.time_pagination)

## <a name="the-printing-protocol"></a><a name="_core_the_printing_protocol"></a>Il protocollo di stampa

Per stampare un documento a più pagine, il Framework e la visualizzazione interagiscono nel modo seguente. Per prima cosa, nel Framework viene visualizzata la finestra di dialogo **stampa** , viene creato un contesto di dispositivo per la stampante e viene chiamata la funzione membro [StartDoc](reference/cdc-class.md#startdoc) dell'oggetto [CDC](reference/cdc-class.md) . Quindi, per ogni pagina del documento, il Framework chiama la funzione membro [Startpage](reference/cdc-class.md#startpage) dell' `CDC` oggetto, indica all'oggetto visualizzazione di stampare la pagina e chiama la funzione membro [EndPage](reference/cdc-class.md#endpage) . Se è necessario modificare la modalità di stampa prima di avviare una pagina specifica, la vista chiama [ResetDC](reference/cdc-class.md#resetdc), che aggiorna la struttura [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) contenente le nuove informazioni sulla modalità stampante. Quando l'intero documento è stato stampato, il Framework chiama la funzione membro [EndDoc](reference/cdc-class.md#enddoc) .

## <a name="overriding-view-class-functions"></a><a name="_core_overriding_view_class_functions"></a>Override delle funzioni della classe di visualizzazione

La classe [CView](reference/cview-class.md) definisce diverse funzioni membro chiamate dal Framework durante la stampa. Eseguendo l'override di queste funzioni nella classe di visualizzazione, vengono fornite le connessioni tra la logica di stampa del Framework e la logica di stampa della classe di visualizzazione. Nella tabella seguente sono elencate le funzioni membro.

### <a name="cviews-overridable-functions-for-printing"></a>Funzioni sottoponibili a override di CView per la stampa

|Nome|Motivo dell'override|
|----------|---------------------------|
|[OnPreparePrinting](reference/cview-class.md#onprepareprinting)|Per inserire i valori nella finestra di dialogo Stampa, in particolare la lunghezza del documento|
|[OnBeginPrinting](reference/cview-class.md#onbeginprinting)|Per allocare tipi di carattere o altre risorse GDI|
|[OnPrepareDC](reference/cview-class.md#onpreparedc)|Per modificare gli attributi del contesto di dispositivo per una pagina specificata o per eseguire l'impaginazione in fase di stampa|
|[OnPrint](reference/cview-class.md#onprint)|Per stampare una pagina specificata|
|[OnEndPrinting](reference/cview-class.md#onendprinting)|Per deallocare le risorse GDI|

È possibile eseguire l'elaborazione correlata alla stampa anche in altre funzioni, ma queste funzioni sono quelle che guidano il processo di stampa.

Nella figura seguente vengono illustrati i passaggi necessari per il processo di stampa e viene illustrata la chiamata di ciascuna delle `CView` funzioni membro di stampa. Il resto di questo articolo illustra in modo più dettagliato la maggior parte di questi passaggi. Altre parti del processo di stampa sono descritte nell'articolo [allocazione di risorse GDI](allocating-gdi-resources.md).

![Processo del ciclo di stampa](../mfc/media/vc37c71.gif "Processo del ciclo di stampa") <br/>
Ciclo di stampa

## <a name="pagination"></a><a name="_core_pagination"></a>Impaginazione

Il Framework archivia gran parte delle informazioni su un processo di stampa in una struttura [CPrintInfo](reference/cprintinfo-structure.md) . Molti dei valori di `CPrintInfo` riguardano l'impaginazione; questi valori sono accessibili come illustrato nella tabella seguente.

### <a name="page-number-information-stored-in-cprintinfo"></a>Informazioni sul numero di pagina archiviate in CPrintInfo

|Variabile membro o<br /><br /> nome/i funzione/i|Numero di pagina a cui viene fatto riferimento|
|-----------------------------------------------|----------------------------|
|`GetMinPage`/`SetMinPage`|Prima pagina del documento|
|`GetMaxPage`/`SetMaxPage`|Ultima pagina del documento|
|`GetFromPage`|Prima pagina da stampare|
|`GetToPage`|Ultima pagina da stampare|
|`m_nCurPage`|Pagina attualmente stampata|

I numeri di pagina iniziano da 1, ovvero la prima pagina è numerata 1, non 0. Per ulteriori informazioni su questi e altri membri di [CPrintInfo](reference/cprintinfo-structure.md), vedere la Guida di *riferimento a MFC*.

All'inizio del processo di stampa, il Framework chiama la funzione membro [OnPreparePrinting](reference/cview-class.md#onprepareprinting) della vista, passando un puntatore a una `CPrintInfo` struttura. La creazione guidata applicazione fornisce un'implementazione di `OnPreparePrinting` che chiama [DoPreparePrinting](reference/cview-class.md#doprepareprinting), un'altra funzione membro di `CView` . `DoPreparePrinting`funzione che consente di visualizzare la finestra di dialogo Stampa e di creare un contesto di dispositivo stampante.

A questo punto l'applicazione non conosce il numero di pagine presenti nel documento. USA i valori predefiniti 1 e 0xFFFF per i numeri della prima e dell'ultima pagina del documento. Se si conosce il numero di pagine del documento, eseguire l'override di `OnPreparePrinting` e chiamare [SetMaxPage]--brokenlink--(Reference/CPrintInfo-Class. MD # SetMaxPage) per la `CPrintInfo` struttura prima di inviarla a `DoPreparePrinting` . In questo modo è possibile specificare la lunghezza del documento.

`DoPreparePrinting`viene quindi visualizzata la finestra di dialogo Stampa. Quando restituisce, la `CPrintInfo` struttura contiene i valori specificati dall'utente. Se l'utente desidera stampare solo un intervallo selezionato di pagine, può specificare i numeri di pagina iniziale e finale nella finestra di dialogo Stampa. Il Framework recupera questi valori usando le `GetFromPage` `GetToPage` funzioni e di [CPrintInfo](reference/cprintinfo-structure.md). Se l'utente non specifica un intervallo di pagine, il Framework chiama `GetMinPage` e `GetMaxPage` e utilizza i valori restituiti per stampare l'intero documento.

Per ogni pagina di un documento da stampare, il Framework chiama due funzioni membro nella classe di visualizzazione, [OnPrepareDC](reference/cview-class.md#onpreparedc) e [OnPrint](reference/cview-class.md#onprint), e passa ogni funzione due parametri: un puntatore a un oggetto [CDC](reference/cdc-class.md) e un puntatore a una `CPrintInfo` struttura. Ogni volta che il Framework chiama `OnPrepareDC` e `OnPrint` , passa un valore diverso nel membro *m_nCurPage* della `CPrintInfo` struttura. In questo modo il Framework indica alla visualizzazione quale pagina deve essere stampata.

La funzione membro [OnPrepareDC](reference/cview-class.md#onpreparedc) viene usata anche per la visualizzazione dello schermo. Apporta modifiche al contesto di dispositivo prima che il disegno venga eseguita. `OnPrepareDC`funge da ruolo analogo nella stampa, ma esistono due differenze: prima l' `CDC` oggetto rappresenta un contesto di dispositivo stampante anziché un contesto di dispositivo dello schermo e, successivamente, un `CPrintInfo` oggetto viene passato come secondo parametro. Questo parametro è **null** quando `OnPrepareDC` viene chiamato per la visualizzazione dello schermo. Eseguire l'override `OnPrepareDC` di per apportare modifiche al contesto del dispositivo in base alla pagina che viene stampata. È ad esempio possibile spostare l'origine del viewport e l'area di ridimensionamento per assicurarsi che la parte appropriata del documento venga stampata.

La funzione membro [OnPrint](reference/cview-class.md#onprint) esegue la stampa effettiva della pagina. L'articolo [come viene eseguita la stampa predefinita](how-default-printing-is-done.md) Mostra come il Framework chiama [ondisegnato](reference/cview-class.md#ondraw) con un contesto di dispositivo stampante per eseguire la stampa. Più precisamente, il Framework chiama `OnPrint` con una `CPrintInfo` struttura e un contesto di dispositivo e `OnPrint` passa il contesto di dispositivo a `OnDraw` . Eseguire l'override `OnPrint` di per eseguire qualsiasi rendering che deve essere eseguito solo durante la stampa e non per la visualizzazione dello schermo. Ad esempio, per stampare intestazioni o piè di pagina (vedere le [intestazioni e i piè](headers-and-footers.md) di pagina dell'articolo per altre informazioni). Chiamare quindi `OnDraw` dall'override di `OnPrint` per eseguire il rendering comune per la visualizzazione e la stampa dello schermo.

Il fatto che `OnDraw` esegue il rendering per la visualizzazione e la stampa dello schermo significa che l'applicazione è WYSIWYG: "ciò che viene visualizzato è quello che si ottiene". Si supponga, tuttavia, che non si stia scrivendo un'applicazione WYSIWYG. Si consideri, ad esempio, un editor di testo che usa un tipo di carattere in grassetto per la stampa ma Visualizza i codici di controllo per indicare il testo in grassetto In una situazione di questo tipo, si usa `OnDraw` esclusivamente per la visualizzazione schermo. Quando si esegue l'override di `OnPrint` , sostituire la chiamata a `OnDraw` con una chiamata a una funzione di disegno separata. Questa funzione disegna il documento nel modo in cui viene visualizzato su carta, usando gli attributi che non vengono visualizzati sullo schermo.

## <a name="printer-pages-vs-document-pages"></a><a name="_core_printer_pages_vs.._document_pages"></a>Pagine stampanti e pagine documento

Quando si fa riferimento ai numeri di pagina, è talvolta necessario distinguere tra il concetto della stampante di una pagina e il concetto di pagina di un documento. Dal punto di vista della stampante, una pagina è un foglio di carta. Tuttavia, un foglio di carta non è necessariamente uguale a una pagina del documento. Se, ad esempio, si sta stampando una newsletter, in cui i fogli devono essere ridotti, un foglio di carta potrebbe contenere la prima e l'ultima pagina del documento affiancata. Analogamente, se si sta stampando un foglio di calcolo, il documento non è costituito da pagine. Al contrario, un foglio di carta potrebbe contenere le righe da 1 a 20, le colonne da 6 a 10.

Tutti i numeri di pagina nella struttura [CPrintInfo](reference/cprintinfo-structure.md) si riferiscono alle pagine della stampante. Il Framework chiama `OnPrepareDC` e `OnPrint` una volta per ogni foglio di carta che passerà attraverso la stampante. Quando si esegue l'override della funzione [OnPreparePrinting](reference/cview-class.md#onprepareprinting) per specificare la lunghezza del documento, è necessario utilizzare le pagine della stampante. Se è presente una corrispondenza uno-a-uno, ovvero una pagina della stampante è uguale a una pagina del documento, questa operazione è semplice. Se, d'altra parte, le pagine di documento e le pagine della stampante non corrispondono direttamente, è necessario tradurle tra loro. Si consideri ad esempio la stampa di un foglio di calcolo. Quando si esegue l'override di `OnPreparePrinting` , è necessario calcolare il numero di fogli di carta necessari per stampare l'intero foglio di calcolo e quindi utilizzare tale valore quando si chiama la `SetMaxPage` funzione membro di `CPrintInfo` . Analogamente, quando si esegue l'override `OnPrepareDC` di, è necessario convertire *m_nCurPage* nell'intervallo di righe e colonne che verranno visualizzate in quel particolare foglio, quindi modificare l'origine del viewport di conseguenza.

## <a name="print-time-pagination"></a><a name="_core_print.2d.time_pagination"></a>Impaginazione dell'ora di stampa

In alcuni casi, è possibile che la classe di visualizzazione non conosca in anticipo per quanto tempo il documento è fino a quando non è stato effettivamente stampato. Si supponga, ad esempio, che l'applicazione non sia WYSIWYG, quindi la lunghezza di un documento sullo schermo non corrisponde alla sua lunghezza quando viene stampata.

Questo causa un problema quando si esegue l'override di [OnPreparePrinting](reference/cview-class.md#onprepareprinting) per la classe di visualizzazione: non è possibile passare un valore alla `SetMaxPage` funzione della struttura [CPrintInfo](reference/cprintinfo-structure.md) , perché non si conosce la lunghezza di un documento. Se l'utente non specifica un numero di pagina in cui interrompere l'utilizzo della finestra di dialogo Stampa, il Framework non è in grado di stabilire quando arrestare il ciclo di stampa. L'unico modo per determinare quando arrestare il ciclo di stampa è stampare il documento e verificare quando termina. La classe di visualizzazione deve verificare la fine del documento mentre viene stampata, quindi informare il Framework quando viene raggiunta la fine.

Il Framework si basa sulla funzione [OnPrepareDC](reference/cview-class.md#onpreparedc) della classe di visualizzazione per indicare quando arrestare. Dopo ogni chiamata a `OnPrepareDC` , il Framework controlla un membro della `CPrintInfo` struttura denominata *m_bContinuePrinting*. Il valore predefinito è **true.** Finché rimane, il Framework continua il ciclo di stampa. Se è impostato su **false**, il Framework si arresta. Per eseguire l'impaginazione in fase di stampa, eseguire l'override `OnPrepareDC` di per verificare se è stata raggiunta la fine del documento e impostare *M_bContinuePrinting* su **false** quando è presente.

L'implementazione predefinita di `OnPrepareDC` imposta *M_bContinuePrinting* su **false** se la pagina corrente è maggiore di 1. Ciò significa che se la lunghezza del documento non è stata specificata, il Framework presuppone che il documento sia una pagina lunga. Una conseguenza è che è necessario prestare attenzione se si chiama la versione della classe di base di `OnPrepareDC` . Non presupporre che *m_bContinuePrinting* sarà **true** dopo avere chiamato la versione della classe base.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Intestazioni e piè di pagina](headers-and-footers.md)

- [Allocazione di risorse GDI](allocating-gdi-resources.md)

## <a name="see-also"></a>Vedere anche

[Stampa](printing.md)<br/>
[CView (classe)](reference/cview-class.md)<br/>
[CDC (classe)](reference/cdc-class.md)
