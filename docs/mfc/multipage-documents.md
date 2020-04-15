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
ms.openlocfilehash: 87912c06a40740d25530235ee421c6c8bfa11aab
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370727"
---
# <a name="multipage-documents"></a>Documenti con più pagine

In questo articolo viene descritto il protocollo di stampa di Windows e viene illustrato come stampare documenti che contengono più di una pagina. L'articolo tratta i seguenti argomenti:

- [Protocollo di stampa](#_core_the_printing_protocol)

- [Override delle funzioni della classe di visualizzazione](#_core_overriding_view_class_functions)

- [Impaginazione](#_core_pagination)

- [Pagine della stampante e pagine di documento](#_core_printer_pages_vs.._document_pages)

- [Impaginazione in fase di stampa](#_core_print.2d.time_pagination)

## <a name="the-printing-protocol"></a><a name="_core_the_printing_protocol"></a>Il protocollo di stampa

Per stampare un documento a più pagine, il framework e la visualizzazione interagiscono nel modo seguente. Innanzitutto il framework visualizza la finestra di dialogo **Stampa,** crea un contesto di periferica per la stampante e chiama la funzione membro [StartDoc](../mfc/reference/cdc-class.md#startdoc) dell'oggetto [CDC.](../mfc/reference/cdc-class.md) Quindi, per ogni pagina del documento, il framework chiama `CDC` la funzione membro [StartPage](../mfc/reference/cdc-class.md#startpage) dell'oggetto, indica all'oggetto visualizzazione di stampare la pagina e chiama la funzione membro [EndPage.](../mfc/reference/cdc-class.md#endpage) Se è necessario modificare la modalità stampante prima di avviare una determinata pagina, la visualizzazione chiama [ResetDC](../mfc/reference/cdc-class.md#resetdc), che aggiorna la struttura [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) contenente le nuove informazioni sulla modalità stampante. Quando l'intero documento è stato stampato, il framework chiama la funzione membro [EndDoc.](../mfc/reference/cdc-class.md#enddoc)

## <a name="overriding-view-class-functions"></a><a name="_core_overriding_view_class_functions"></a>Override delle funzioni della classe di visualizzazione

Il [CView](../mfc/reference/cview-class.md) classe definisce diverse funzioni membro che vengono chiamate dal framework durante la stampa. Eseguendo l'override di queste funzioni nella classe di visualizzazione, si forniscono le connessioni tra la logica di stampa del framework e la logica di stampa della classe di visualizzazione. Nella tabella seguente sono elencate queste funzioni membro.

### <a name="cviews-overridable-functions-for-printing"></a>Funzioni sottoponibili a override di CView per la stampa

|Nome|Motivo dell'override|
|----------|---------------------------|
|[OnPreparePrinting (Stampa su Base prepare)](../mfc/reference/cview-class.md#onprepareprinting)|Per inserire valori nella finestra di dialogo Stampa, in particolare la lunghezza del documento|
|[OnBeginPrinting (Stampa su instato)](../mfc/reference/cview-class.md#onbeginprinting)|Per allocare tipi di carattere o altre risorse GDI|
|[Onpreparedc](../mfc/reference/cview-class.md#onpreparedc)|Per regolare gli attributi del contesto di dispositivo per una determinata pagina o per eseguire l'impaginazione in fase di stampa|
|[Onprint](../mfc/reference/cview-class.md#onprint)|Per stampare una determinata pagina|
|[OnEndPrinting](../mfc/reference/cview-class.md#onendprinting)|Per deallocare le risorse GDI|

È possibile eseguire l'elaborazione relativa alla stampa anche in altre funzioni, ma queste funzioni sono quelle che guidano il processo di stampa.

Nella figura seguente vengono illustrati i passaggi coinvolti nel `CView`processo di stampa e viene illustrato dove vengono chiamate ognuna delle funzioni membro di stampa. Il resto di questo articolo illustra la maggior parte di questi passaggi in modo più dettagliato. Parti aggiuntive del processo di stampa sono descritte nell'articolo Allocazione di [risorse GDI](../mfc/allocating-gdi-resources.md).

![Processo del ciclo di stampa](../mfc/media/vc37c71.gif "Processo del ciclo di stampa") <br/>
Ciclo di stampa

## <a name="pagination"></a><a name="_core_pagination"></a> Paginazione

Il framework archivia gran parte delle informazioni su un processo di stampa in un [CPrintInfo](../mfc/reference/cprintinfo-structure.md) struttura. Molti dei valori `CPrintInfo` relativi all'impaginazione; questi valori sono accessibili come illustrato nella tabella seguente.

### <a name="page-number-information-stored-in-cprintinfo"></a>Informazioni sul numero di pagina archiviate in CPrintInfo

|Variabile membro o<br /><br /> nome/i della funzione|Numero di pagina a cui si fa riferimento|
|-----------------------------------------------|----------------------------|
|`GetMinPage`/`SetMinPage`|Prima pagina del documento|
|`GetMaxPage`/`SetMaxPage`|Ultima pagina del documento|
|`GetFromPage`|Prima pagina da stampare|
|`GetToPage`|Ultima pagina da stampare|
|`m_nCurPage`|Pagina attualmente in fase di stampa|

I numeri di pagina iniziano da 1, ovvero la prima pagina è numerata 1, non 0. Per ulteriori informazioni su questi e altri membri di [CPrintInfo](../mfc/reference/cprintinfo-structure.md), vedere la Guida di *riferimento a MFC*.

All'inizio del processo di stampa, il framework chiama la funzione membro [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) della visualizzazione, passando un puntatore a una `CPrintInfo` struttura. La creazione guidata applicazione `OnPreparePrinting` fornisce un'implementazione che `CView`chiama [DoPreparePrinting](../mfc/reference/cview-class.md#doprepareprinting), un'altra funzione membro di . `DoPreparePrinting`è la funzione che visualizza la finestra di dialogo Stampa e crea un contesto di periferica della stampante.

A questo punto l'applicazione non sa quante pagine sono nel documento. Vengono utilizzati i valori predefiniti 1 e 0xFFFF per i numeri della prima e dell'ultima pagina del documento. Se si conosce il numero di `OnPreparePrinting` pagine del documento, eseguire l'override e chiamare [SetMaxPage]--brokenlink--(reference/cprintinfo-class.md-setmaxpage) per la `CPrintInfo` struttura prima di inviarlo a `DoPreparePrinting`. Ciò consente di specificare la lunghezza del documento.

`DoPreparePrinting`quindi visualizza la finestra di dialogo Stampa. Quando viene restituito, la `CPrintInfo` struttura contiene i valori specificati dall'utente. Se l'utente desidera stampare solo un intervallo di pagine selezionato, può specificare i numeri di pagina iniziale e finale nella finestra di dialogo Stampa. Il framework recupera questi `GetFromPage` valori `GetToPage` utilizzando le funzioni e di [CPrintInfo](../mfc/reference/cprintinfo-structure.md). Se l'utente non specifica un intervallo `GetMinPage` `GetMaxPage` di pagine, il framework chiama e utilizza i valori restituiti per stampare l'intero documento.

Per ogni pagina di un documento da stampare, il framework chiama due funzioni membro nella classe di visualizzazione, [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) e [OnPrint](../mfc/reference/cview-class.md#onprint) `CPrintInfo` , e passa a ogni funzione due parametri: un puntatore a un oggetto [CDC](../mfc/reference/cdc-class.md) e un puntatore a una struttura. Ogni volta che `OnPrepareDC` `OnPrint`il framework chiama e , passa `CPrintInfo` un valore diverso nella *m_nCurPage* membro della struttura. In questo modo il framework indica alla visualizzazione quale pagina deve essere stampata.

Il [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) funzione membro viene utilizzata anche per la visualizzazione dello schermo. Le modifiche apportate al contesto di periferica vengono apportate prima che venga eseguito il disegno. `OnPrepareDC`svolge un ruolo simile nella stampa, ma esistono un `CDC` paio di differenze: in primo luogo, l'oggetto rappresenta un contesto di periferica della stampante anziché un contesto di periferica dello schermo e, in secondo luogo, un `CPrintInfo` oggetto viene passato come secondo parametro. (Questo parametro `OnPrepareDC` è **NULL** quando viene chiamato per la visualizzazione dello schermo.) Eseguire `OnPrepareDC` l'override per apportare modifiche al contesto di periferica in base alla pagina da stampare. Ad esempio, è possibile spostare l'origine della finestra e l'area di ritaglio per garantire che venga stampata la parte appropriata del documento.

Il [OnPrint](../mfc/reference/cview-class.md#onprint) funzione membro esegue la stampa effettiva della pagina. Nell'articolo [How Default Printing Is Done](../mfc/how-default-printing-is-done.md) viene illustrato come il framework chiama [OnDraw](../mfc/reference/cview-class.md#ondraw) con un contesto di periferica della stampante per eseguire la stampa. Più precisamente, `OnPrint` il `CPrintInfo` framework chiama con una `OnPrint` struttura e `OnDraw`un contesto di dispositivo e passa il contesto di dispositivo a . Eseguire `OnPrint` l'override per eseguire qualsiasi rendering che deve essere eseguito solo durante la stampa e non per la visualizzazione dello schermo. Ad esempio, per stampare intestazioni o piè di pagina (per ulteriori informazioni, vedere l'articolo [Intestazioni e piè di pagina).](../mfc/headers-and-footers.md) Chiamare `OnDraw` quindi dalla `OnPrint` sostituzione di per eseguire il rendering comune sia alla visualizzazione dello schermo che alla stampa.

Il fatto `OnDraw` che esegue il rendering sia per la visualizzazione dello schermo che per la stampa significa che l'applicazione è WYSIWYG: "Quello che vedi è quello che ottieni". Tuttavia, supponiamo che non si sta scrivendo un'applicazione WYSIWYG. Si consideri, ad esempio, un editor di testo che utilizza un carattere in grassetto per la stampa ma visualizza i codici di controllo per indicare il testo in grassetto sullo schermo. In una situazione di `OnDraw` questo tipo, si utilizza rigorosamente per la visualizzazione dello schermo. Quando si `OnPrint`esegue l'override di , sostituire la chiamata a `OnDraw` con una chiamata a una funzione di disegno separata. Tale funzione disegna il documento nel modo in cui appare su carta, utilizzando gli attributi che non vengono visualizzati sullo schermo.

## <a name="printer-pages-vs-document-pages"></a><a name="_core_printer_pages_vs.._document_pages"></a>Pagine stampante e pagine documento

Quando si fa riferimento ai numeri di pagina, a volte è necessario distinguere tra il concetto della stampante di una pagina e il concetto di documento di una pagina. Dal punto di vista della stampante, una pagina è un foglio di carta. Tuttavia, un foglio di carta non è necessariamente uguale a una pagina del documento. Ad esempio, se si stampa un notiziario, in cui i fogli devono essere piegati, un foglio di carta potrebbe contenere sia la prima che l'ultima pagina del documento, una accanto all'altra. Analogamente, se si stampa un foglio di calcolo, il documento non è costituito da pagine. Al contrario, un foglio di carta potrebbe contenere le righe da 1 a 20, le colonne da 6 a 10.

Tutti i numeri di pagina nella struttura [CPrintInfo](../mfc/reference/cprintinfo-structure.md) fanno riferimento alle pagine della stampante. Il framework `OnPrepareDC` `OnPrint` chiama e una volta per ogni foglio di carta che passerà attraverso la stampante. Quando si esegue l'override della funzione [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) per specificare la lunghezza del documento, è necessario utilizzare le pagine della stampante. Se c'è una corrispondenza uno-a-uno (vale a dire, una pagina della stampante equivale a una pagina del documento), allora questo è facile. Se, d'altra parte, le pagine del documento e le pagine della stampante non corrispondono direttamente, è necessario tradurre tra di esse. Ad esempio, si consideri la stampa di un foglio di calcolo. Quando si `OnPreparePrinting`esegue l'override di , è necessario calcolare il numero di fogli `SetMaxPage` di `CPrintInfo`carta necessari per stampare l'intero foglio di calcolo e quindi utilizzare tale valore quando si chiama la funzione membro di . Analogamente, quando `OnPrepareDC`si esegue l'override di , è necessario tradurre *m_nCurPage* nell'intervallo di righe e colonne che verranno visualizzate in quel particolare foglio e quindi regolare di conseguenza l'origine della finestra.

## <a name="print-time-pagination"></a><a name="_core_print.2d.time_pagination"></a>Impaginazione in fase di stampa

In alcune situazioni, la classe di visualizzazione potrebbe non sapere in anticipo quanto tempo il documento è fino a quando non è stato effettivamente stampato. Si supponga, ad esempio, che l'applicazione non sia WYSIWYG, pertanto la lunghezza di un documento sullo schermo non corrisponde alla sua lunghezza quando viene stampata.

Ciò causa un problema quando si esegue l'override [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) per `SetMaxPage` la classe di visualizzazione: non è possibile passare un valore alla funzione del [CPrintInfo](../mfc/reference/cprintinfo-structure.md) struttura, perché non si conosce la lunghezza di un documento. Se l'utente non specifica un numero di pagina in cui interrompere utilizzando la finestra di dialogo Stampa, il framework non sa quando interrompere il ciclo di stampa. L'unico modo per determinare quando interrompere il ciclo di stampa consiste nel stampare il documento e vedere quando termina. La classe di visualizzazione deve verificare la fine del documento durante la stampa e quindi informare il framework quando viene raggiunta la fine.

Il framework si basa sulla funzione [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) della classe di visualizzazione per indicare quando interrompere. Dopo ogni `OnPrepareDC`chiamata a , il `CPrintInfo` framework controlla un membro della struttura denominata *m_bContinuePrinting*. Il valore predefinito è **TRUE.** Finché rimane così, il framework continua il ciclo di stampa. Se è impostato su **FALSE**, il framework si arresta. Per eseguire l'impaginazione `OnPrepareDC` in fase di stampa, eseguire l'override per verificare se è stata raggiunta la fine del documento e impostare *m_bContinuePrinting* **su FALSE** quando lo è.

L'implementazione `OnPrepareDC` predefinita di set *m_bContinuePrinting* **su FALSE** se la pagina corrente è maggiore di 1. Ciò significa che se la lunghezza del documento non è stata specificata, il framework presuppone che il documento sia lungo una pagina. Una conseguenza di ciò è che è necessario `OnPrepareDC`prestare attenzione se si chiama la versione della classe base di . Non presupporre che *m_bContinuePrinting* sarà **TRUE** dopo aver chiamato la versione della classe base.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Intestazioni e piè di pagina](../mfc/headers-and-footers.md)

- [Allocazione delle risorse GDI](../mfc/allocating-gdi-resources.md)

## <a name="see-also"></a>Vedere anche

[Stampa](../mfc/printing.md)<br/>
[CView (classe)](../mfc/reference/cview-class.md)<br/>
[Classe CDC](../mfc/reference/cdc-class.md)
