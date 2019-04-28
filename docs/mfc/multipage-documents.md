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
ms.openlocfilehash: 81e03657977d31827c5c7c3d3272e3d4255a4a8b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62238470"
---
# <a name="multipage-documents"></a>Documenti con più pagine

Questo articolo descrive il protocollo di stampa Windows e illustra come stampare documenti che contengono più di una pagina. L'articolo include gli argomenti seguenti:

- [Protocollo di stampa](#_core_the_printing_protocol)

- [Override di funzioni di classe visualizzazione](#_core_overriding_view_class_functions)

- [Pagination](#_core_pagination)

- [Pagine di stampa e le pagine di documento](#_core_printer_pages_vs.._document_pages)

- [Paginazione in fase di stampa](#_core_print.2d.time_pagination)

##  <a name="_core_the_printing_protocol"></a> Il protocollo di stampa

Per stampare un documento con più pagine, il framework e visualizzazione interagiscono nel modo seguente. Innanzitutto il framework Visualizza il **Print** della finestra di dialogo Crea un contesto di dispositivo per la stampante e chiama il [StartDoc](../mfc/reference/cdc-class.md#startdoc) funzione membro del [CDC](../mfc/reference/cdc-class.md) oggetto. Quindi, per ogni pagina del documento, il framework chiama il [StartPage](../mfc/reference/cdc-class.md#startpage) funzione membro del `CDC` oggetto, indica all'oggetto visualizzazione per stampare la pagina e chiamate di [EndPage](../mfc/reference/cdc-class.md#endpage) funzione membro. Se è necessario modificare la modalità di stampa prima di avviare una pagina particolare, la visualizzazione chiamate [ResetDC](../mfc/reference/cdc-class.md#resetdc), che gli aggiornamenti di [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) struttura che contiene le informazioni sulla modalità della stampante nuovo. Quando è stato stampato l'intero documento, il framework chiama il [EndDoc](../mfc/reference/cdc-class.md#enddoc) funzione membro.

##  <a name="_core_overriding_view_class_functions"></a> Override di funzioni di classe visualizzazione

Il [CView](../mfc/reference/cview-class.md) classe definisce diverse funzioni membro che vengono chiamate dal framework durante la stampa. Eseguendo l'override di queste funzioni nella classe di visualizzazione, si forniscono le connessioni tra logica di stampa del framework e logica di stampa della classe di visualizzazione. La tabella seguente elenca le funzioni membro.

### <a name="cviews-overridable-functions-for-printing"></a>Funzioni sottoponibili a override CView per la stampa

|Nome|Motivo dell'override|
|----------|---------------------------|
|[OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting)|Per inserire i valori nella finestra di dialogo di stampa, in particolare la lunghezza del documento|
|[OnBeginPrinting](../mfc/reference/cview-class.md#onbeginprinting)|Per allocare i tipi di carattere o altre risorse GDI|
|[OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc)|Per impostare gli attributi del contesto di dispositivo per una determinata pagina, o per eseguire l'impaginazione in fase di stampa|
|[OnPrint](../mfc/reference/cview-class.md#onprint)|Per stampare una pagina specificata|
|[OnEndPrinting](../mfc/reference/cview-class.md#onendprinting)|Per deallocare risorse GDI|

È possibile eseguire l'elaborazione correlati alla stampa in anche altre funzioni, ma queste funzioni sono quelli che eseguono il processo di stampa.

La figura seguente illustra i passaggi coinvolti nel processo di stampa e viene illustrato dove ognuno dei `CView`di stampa vengono chiamate le funzioni membro. La parte restante di questo articolo illustra la maggior parte dei passaggi della procedura in modo più dettagliato. Altre parti del processo di stampa sono descritti nell'articolo [allocare risorse GDI](../mfc/allocating-gdi-resources.md).

![Processo del ciclo di stampa](../mfc/media/vc37c71.gif "processo del ciclo di stampa") <br/>
Ciclo di stampa

##  <a name="_core_pagination"></a> Paginazione

Il framework memorizza molte informazioni su un processo di stampa in un [CPrintInfo](../mfc/reference/cprintinfo-structure.md) struttura. Alcuni dei valori in `CPrintInfo` si riferiscono alla paginazione; questi valori sono accessibili come illustrato nella tabella seguente.

### <a name="page-number-information-stored-in-cprintinfo"></a>Numero di pagina informazioni archiviate in CPrintInfo

|Variabile membro o<br /><br /> nomi di funzione|Numero di pagina fa riferimento|
|-----------------------------------------------|----------------------------|
|`GetMinPage`/`SetMinPage`|Prima pagina del documento|
|`GetMaxPage`/`SetMaxPage`|Ultima pagina del documento|
|`GetFromPage`|Prima pagina da stampare|
|`GetToPage`|Ultima pagina da stampare|
|`m_nCurPage`|Pagina in corso di stampa|

Inizio i numeri di pagina da 1, vale a dire, la prima pagina viene assegnato il numero 1, 0 non. Per altre informazioni su questi e altri membri del [CPrintInfo](../mfc/reference/cprintinfo-structure.md), vedere la *riferimento MFC*.

All'inizio del processo di stampa, il framework chiama la vista [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) funzione di membro, passando un puntatore a un `CPrintInfo` struttura. La creazione guidata applicazione fornisce un'implementazione di `OnPreparePrinting` che chiama [DoPreparePrinting](../mfc/reference/cview-class.md#doprepareprinting), un'altra funzione membro di `CView`. `DoPreparePrinting` è la funzione che consente di visualizzare la finestra di dialogo di stampa e crea un contesto di dispositivo stampante.

A questo punto l'applicazione non determina il numero di pagine è nel documento. Per i numeri della prima e nell'ultima pagina del documento usa i valori predefiniti, 1 e 0xFFFF. Se si conosce il numero di pagine di documento, eseguire l'override `OnPreparePrinting` e chiamare [SetMaxPage]--brokenlink--(reference/cprintinfo-class.md#setmaxpage) per il `CPrintInfo` struttura prima di inviarlo a `DoPreparePrinting`. Ciò consente di specificare la lunghezza del documento.

`DoPreparePrinting` quindi Visualizza la finestra di dialogo di stampa. Al momento della restituzione di `CPrintInfo` struttura contiene i valori specificati dall'utente. Se l'utente desidera eseguire solo un determinato intervallo di pagine di stampa, che potrà possibile specificare il valore iniziale e finale i numeri di pagina nella finestra di dialogo Stampa. Il framework recupera tali valori usando il `GetFromPage` e `GetToPage` le funzioni dei [CPrintInfo](../mfc/reference/cprintinfo-structure.md). Se l'utente non specifica un intervallo di pagine, il framework chiama `GetMinPage` e `GetMaxPage` e Usa i valori restituiti per stampare l'intero documento.

Per ogni pagina di un documento da stampare, il framework chiama due funzioni membro nella classe di visualizzazione, [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) e [OnPrint](../mfc/reference/cview-class.md#onprint)e passa ogni funzione di due parametri: un puntatore a un [ CDC](../mfc/reference/cdc-class.md) oggetto e un puntatore a un `CPrintInfo` struttura. Ogni volta che il framework chiama `OnPrepareDC` e `OnPrint`, passa un valore diverso nel *m_nCurPage* membro del `CPrintInfo` struttura. In questo modo il framework indica alla visualizzazione quale pagina deve essere stampata.

Il [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) funzione membro viene usata anche per la visualizzazione su schermo. Per regolare il contesto di dispositivo prima del disegno. `OnPrepareDC` svolge un ruolo simile nel stampa, ma esistono alcune differenze: prima di tutto, il `CDC` oggetto rappresenta un contesto di dispositivo stampante invece di un contesto di dispositivo dello schermo e il secondo un `CPrintInfo` oggetto viene passato come secondo parametro. (Questo parametro è **NULL** quando `OnPrepareDC` viene chiamato per la visualizzazione su schermo.) Eseguire l'override `OnPrepareDC` per apportare modifiche al contesto di dispositivo in base quale pagina da stampare. Ad esempio, è possibile spostare l'origine del riquadro di visualizzazione e l'area di visualizzazione per garantire che la parte appropriata del documento ottiene stampata.

Il [OnPrint](../mfc/reference/cview-class.md#onprint) funzione membro esegue la stampa della pagina. L'articolo [predefinite stampa procedura](../mfc/how-default-printing-is-done.md) Mostra come il framework chiama [OnDraw](../mfc/reference/cview-class.md#ondraw) con un contesto di dispositivo stampante per eseguire la stampa. Più precisamente, il framework chiama `OnPrint` con un `CPrintInfo` struttura e un contesto di periferica e `OnPrint` passa il contesto di dispositivo a `OnDraw`. Eseguire l'override `OnPrint` per eseguire il rendering che deve essere eseguito solo durante la stampa e non per la visualizzazione su schermo. Ad esempio, per stampare le intestazioni o nei piè di pagina (vedere l'articolo [informazioni sulle intestazioni e piè di pagina](../mfc/headers-and-footers.md) per altre informazioni). Quindi chiamare `OnDraw` dall'override del `OnPrint` per eseguire il rendering comune a sia la visualizzazione su schermo e la stampa.

Il fatto che `OnDraw` esegue il rendering di entrambi schermata di visualizzazione e stampa significa che l'applicazione è di tipo WYSIWYG: "What you see is what you get." Tuttavia, si supponga che si non scrivendo un'applicazione WYSIWYG. Ad esempio, si consideri un testo dell'editor che usa un tipo di carattere grassetto per la stampa, ma consente di visualizzare i codici di controllo per indicare il testo in grassetto nella schermata. In questo caso, si utilizza `OnDraw` esclusivamente per la visualizzazione su schermo. Quando esegue l'override `OnPrint`, sostituire la chiamata a `OnDraw` con una chiamata a una funzione di disegno separata. Tale funzione consente di disegnare il documento venga visualizzato come su carta, usando gli attributi che non vengono visualizzati sullo schermo.

##  <a name="_core_printer_pages_vs.._document_pages"></a> Visual Studio le pagine della stampante. Pagine del documento

Quando si fa riferimento ai numeri di pagina, è talvolta necessario distinguere tra il concetto della stampante di una pagina e il concetto di un documento di una pagina. Dal punto di vista della stampante, una pagina è un foglio di carta. Tuttavia, un foglio di carta non corrisponde necessariamente alla pagina del documento. Ad esempio, se si utilizza una newsletter, in cui i fogli devono essere ridotte, un foglio di carta potrebbe contenere entrambi le pagine e il cognome del documento, affiancati. Analogamente, se si stampa un foglio di calcolo, il documento non costituiti da pagine affatto. Al contrario, un foglio di carta potrebbe contenere righe da 1 a 20, 6 e 10 colonne.

La pagina tutti i numeri nel [CPrintInfo](../mfc/reference/cprintinfo-structure.md) struttura fanno riferimento alle pagine di stampa. Il framework chiama `OnPrepareDC` e `OnPrint` una volta per ogni foglio di carta che verrà passati attraverso la stampante. Quando esegue l'override di [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) funzione per specificare la lunghezza del documento, è necessario usare pagine di stampa. Se è presente una corrispondenza uno a uno (ovvero, una pagina della stampante è uguale a una pagina del documento), il valore è facile. Se, d'altra parte, le pagine di documento e stampante non corrispondono direttamente, è necessario convertire tra di essi. Si consideri ad esempio la stampa di un foglio di calcolo. Quando si esegue l'override `OnPreparePrinting`, è necessario calcolare il numero di carta fogli sarà necessario per stampare l'intero foglio di calcolo e quindi utilizzare tale valore quando si chiama il `SetMaxPage` funzione di membro di `CPrintInfo`. Analogamente, quando si esegue l'override `OnPrepareDC`, è necessario convertire *m_nCurPage* nell'intervallo di righe e colonne che vengono visualizzati in tale foglio specifico e quindi modificare di conseguenza l'origine del viewport.

##  <a name="_core_print.2d.time_pagination"></a> Paginazione in fase di stampa

In alcune situazioni, la classe di visualizzazione potrebbe non sapere in anticipo quanto tempo il documento è fino a quando non effettivamente è stata stampata. Ad esempio, si supponga che l'applicazione non è in modalità WYSIWYG, pertanto lunghezza del documento sullo schermo non corrisponde alla sua lunghezza stampato.

Ciò causa un problema quando esegue l'override [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) per la classe di visualizzazione: non è possibile passare un valore per il `SetMaxPage` funzione del [CPrintInfo](../mfc/reference/cprintinfo-structure.md) strutturare, perché non si conosce la lunghezza di un documento. Se l'utente non specifica un numero di pagina per arrestare in utilizzando la finestra di dialogo di stampa, il framework non sa quando interrompere il ciclo di stampa. L'unico modo per determinare l'interruzione del ciclo di stampa è per stampare il documento e vedere quando termina. Classe di visualizzazione deve cercare la fine del documento mentre è in fase di stampa e quindi informare il framework quando viene raggiunta la fine.

Il framework si basa sulla classe di visualizzazione [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) funzione per indicare all'arresto. Dopo ogni chiamata a `OnPrepareDC`, il framework controlla un membro del `CPrintInfo` struttura denominata *m_bContinuePrinting*. Il valore predefinito è **TRUE.** Fino a quando viene modificato, il framework continua il ciclo di stampa. Se è impostato su **FALSE**, si arresta il framework. Per eseguire l'impaginazione in fase di stampa, eseguire l'override `OnPrepareDC` per verificare se la fine del documento è stato raggiunta e impostare *m_bContinuePrinting* al **FALSE** quando ne ha.

L'implementazione predefinita di `OnPrepareDC` imposta *m_bContinuePrinting* al **FALSE** se la pagina corrente è maggiore di 1. Ciò significa che se la lunghezza del documento non è stata specificata, il framework presuppone che il documento è lunga una pagina. È una conseguenza di ciò che è necessario prestare attenzione se si chiama la versione della classe base `OnPrepareDC`. Non presupporre che *m_bContinuePrinting* saranno **TRUE** dopo la chiamata alla versione della classe base.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Informazioni sulle intestazioni e piè di pagina](../mfc/headers-and-footers.md)

- [Allocazione di risorse GDI](../mfc/allocating-gdi-resources.md)

## <a name="see-also"></a>Vedere anche

[Stampa](../mfc/printing.md)<br/>
[Classe CView](../mfc/reference/cview-class.md)<br/>
[Classe CDC](../mfc/reference/cdc-class.md)
