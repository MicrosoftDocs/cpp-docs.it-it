---
title: Documenti con più pagine | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fb7362e7b9ccb15d338c09da337a6af5077a9789
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929874"
---
# <a name="multipage-documents"></a>Documenti con più pagine
In questo articolo descrive il protocollo di stampa Windows e illustra come stampare documenti che contengono più di una pagina. L'articolo vengono illustrati gli argomenti seguenti:  
  
-   [Protocollo di stampa](#_core_the_printing_protocol)  
  
-   [Si esegue l'override di funzioni della classe visualizzazione](#_core_overriding_view_class_functions)  
  
-   [Paginazione](#_core_pagination)  
  
-   [Pagine di stampa e le pagine di documento](#_core_printer_pages_vs.._document_pages)  
  
-   [Paginazione in fase di stampa](#_core_print.2d.time_pagination)  
  
##  <a name="_core_the_printing_protocol"></a> Il protocollo di stampa  
 Per stampare un documento con più pagine, il framework e visualizzazione interagiscono nel modo seguente. Prima di tutto il framework Visualizza il **stampa** della finestra di dialogo Crea un contesto di dispositivo per la stampante e chiama il [StartDoc](../mfc/reference/cdc-class.md#startdoc) funzione membro del [CDC](../mfc/reference/cdc-class.md) oggetto. Quindi, per ogni pagina del documento, il framework chiama la [StartPage](../mfc/reference/cdc-class.md#startpage) funzione membro del `CDC` dell'oggetto, indica l'oggetto visualizzazione per stampare la pagina e chiama il [EndPage](../mfc/reference/cdc-class.md#endpage) funzione membro. Se è necessario modificare la modalità della stampante prima di avviare una pagina specifica, la visualizzazione chiama [ResetDC](../mfc/reference/cdc-class.md#resetdc), gli aggiornamenti di [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) struttura che contiene le nuove informazioni modalità stampante. Quando l'intero documento è stata stampata, il framework chiama la [EndDoc](../mfc/reference/cdc-class.md#enddoc) funzione membro.  
  
##  <a name="_core_overriding_view_class_functions"></a> Si esegue l'override di funzioni della classe visualizzazione  
 Il [CView](../mfc/reference/cview-class.md) classe definisce diverse funzioni membro che vengano chiamate dal framework durante la stampa. Eseguendo l'override di queste funzioni nella classe di visualizzazione, fornire le connessioni tra logica di stampa del framework e logica di stampa della classe di visualizzazione. Nella tabella seguente sono elencate queste funzioni membro.  
  
### <a name="cviews-overridable-functions-for-printing"></a>Funzioni sottoponibili a override CView per la stampa  
  
|nome|Motivo dell'override|  
|----------|---------------------------|  
|[OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting)|Per inserire valori nella finestra di dialogo di stampa, in particolare la lunghezza del documento|  
|[OnBeginPrinting](../mfc/reference/cview-class.md#onbeginprinting)|Per allocare i tipi di carattere o altre risorse GDI|  
|[OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc)|Per impostare gli attributi del contesto di dispositivo per una determinata pagina o per la paginazione in fase di stampa|  
|[OnPrint](../mfc/reference/cview-class.md#onprint)|Per stampare una pagina specificata|  
|[OnEndPrinting](../mfc/reference/cview-class.md#onendprinting)|Per deallocare risorse GDI|  
  
 È possibile eseguire l'elaborazione correlati alla stampa in anche altre funzioni, ma queste funzioni sono quelle che determinano il processo di stampa.  
  
 Nella figura seguente vengono illustrati i passaggi coinvolti nel processo di stampa e viene illustrato dove ognuno dei `CView`stampa vengono chiamate le funzioni membro. Il resto di questo articolo costituisce la maggior parte di questi passaggi in modo più dettagliato. Parti aggiuntive del processo di stampa sono descritti nell'articolo [allocare risorse GDI](../mfc/allocating-gdi-resources.md).  
  
 ![Processo del ciclo di stampa](../mfc/media/vc37c71.gif "vc37c71")  
Ciclo di stampa  
  
##  <a name="_core_pagination"></a> Paginazione  
 Il framework memorizza gran parte delle informazioni su un processo di stampa in un [CPrintInfo](../mfc/reference/cprintinfo-structure.md) struttura. Alcuni dei valori in `CPrintInfo` relativi alla paginazione; questi valori sono accessibili come illustrato nella tabella seguente.  
  
### <a name="page-number-information-stored-in-cprintinfo"></a>Numero di pagina informazioni archiviate in CPrintInfo  
  
|Variabile membro o<br /><br /> nomi di funzione|Numero di pagina fa|  
|-----------------------------------------------|----------------------------|  
|`GetMinPage`/`SetMinPage`|Prima pagina del documento|  
|`GetMaxPage`/`SetMaxPage`|Ultima pagina del documento|  
|`GetFromPage`|Prima pagina da stampare|  
|`GetToPage`|Ultima pagina da stampare|  
|`m_nCurPage`|Pagina in fase di stampa|  
  
 Avvio di numeri di pagina 1, vale a dire, la prima pagina viene numerata 1, non da 0. Per ulteriori informazioni su questi e altri membri della [CPrintInfo](../mfc/reference/cprintinfo-structure.md), vedere il *riferimenti alla libreria MFC*.  
  
 All'inizio del processo di stampa, il framework chiama la vista [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) funzione membro, passando un puntatore a un `CPrintInfo` struttura. La creazione guidata applicazione fornisce un'implementazione di `OnPreparePrinting` che chiama [DoPreparePrinting](../mfc/reference/cview-class.md#doprepareprinting), un'altra funzione membro di `CView`. `DoPreparePrinting` è la funzione che consente di visualizzare la finestra di dialogo di stampa e crea un contesto di dispositivo stampante.  
  
 A questo punto l'applicazione non conosce il numero di pagine è nel documento. Usa i valori predefiniti 1 e 0xFFFF per i numeri della prima e l'ultima pagina del documento. Se si conosce il numero di pagine di documento, eseguire l'override `OnPreparePrinting` e chiamare [SetMaxPage]--brokenlink--(reference/cprintinfo-class.md#setmaxpage) per il `CPrintInfo` struttura prima di inviarlo a `DoPreparePrinting`. Ciò consente di specificare la lunghezza del documento.  
  
 `DoPreparePrinting` consente quindi di visualizzare la finestra di dialogo di stampa. Quando viene restituito, il `CPrintInfo` struttura contiene i valori specificati dall'utente. Se l'utente desidera stampare solo un determinato intervallo di pagine, egli può specificare iniziali e finali di numeri di pagina nella finestra di dialogo Stampa. Il framework recupera questi valori usando la `GetFromPage` e `GetToPage` le funzioni di [CPrintInfo](../mfc/reference/cprintinfo-structure.md). Se l'utente non specifica un intervallo di pagine, il framework chiama `GetMinPage` e `GetMaxPage` e utilizza i valori restituiti per stampare l'intero documento.  
  
 Per ogni pagina di un documento da stampare, il framework chiama due funzioni membro nella classe di visualizzazione [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) e [OnPrint](../mfc/reference/cview-class.md#onprint)e passa ogni funzione due parametri: un puntatore a un [ CDC](../mfc/reference/cdc-class.md) oggetto e un puntatore a un `CPrintInfo` struttura. Ogni volta che il framework chiama `OnPrepareDC` e `OnPrint`, viene passato un valore diverso nel *m_nCurPage* appartenente il `CPrintInfo` struttura. In questo modo il framework indica alla visualizzazione quale pagina deve essere stampata.  
  
 Il [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) funzione membro viene usata anche per la visualizzazione su schermo. Per regolare il contesto di dispositivo prima del disegno. `OnPrepareDC` svolge un ruolo simile per la stampa, ma esistono alcune differenze: prima di tutto, il `CDC` oggetto rappresenta un contesto di dispositivo stampante anziché un contesto di dispositivo dello schermo e il secondo un `CPrintInfo` oggetto viene passato come secondo parametro. (Questo parametro è **NULL** quando `OnPrepareDC` viene chiamato per la visualizzazione su schermo.) Eseguire l'override `OnPrepareDC` per apportare modifiche al contesto di dispositivo in base alle quali pagina da stampare. Ad esempio, è possibile spostare l'origine del riquadro di visualizzazione e l'area di visualizzazione per garantire che la parte appropriata del documento ottiene stampata.  
  
 Il [OnPrint](../mfc/reference/cview-class.md#onprint) funzione membro esegue la stampa della pagina. L'articolo [come predefinito stampa viene eseguita](../mfc/how-default-printing-is-done.md) viene chiamata dal framework [OnDraw](../mfc/reference/cview-class.md#ondraw) con un contesto di dispositivo stampante per eseguire la stampa. Più precisamente, il framework chiama `OnPrint` con un `CPrintInfo` struttura e un contesto di dispositivo, e `OnPrint` passa il contesto di dispositivo a `OnDraw`. Eseguire l'override `OnPrint` per eseguire il rendering che deve essere eseguito solo durante la stampa e non per la visualizzazione su schermo. Ad esempio, per creare intestazioni o nei piè di pagina (vedere l'articolo [intestazioni e piè di pagina](../mfc/headers-and-footers.md) per altre informazioni). Quindi chiamare `OnDraw` dall'override di `OnPrint` per eseguire il rendering comune a entrambi visualizzazione su schermo e la stampa.  
  
 Il fatto che `OnDraw` esegue il rendering per entrambi schermata di visualizzazione e stampa significa che l'applicazione sia WYSIWYG: "cosa you see is what you get." Si supponga tuttavia che non sono la scrittura di un'applicazione WYSIWYG. Ad esempio, si consideri un testo editor che utilizza un tipo di carattere grassetto per la stampa, ma visualizza i codici di controllo per indicare il testo in grassetto sullo schermo. In questo caso, utilizzare `OnDraw` esclusivamente per la visualizzazione su schermo. Quando esegue l'override `OnPrint`, sostituire la chiamata a `OnDraw` con una chiamata a una funzione di disegno separata. Tale funzione Disegna il documento venga visualizzato nel documento, usando gli attributi che non vengono visualizzati sullo schermo.  
  
##  <a name="_core_printer_pages_vs.._document_pages"></a> Visual Studio le pagine della stampante. Pagine di documento  
 Quando si fa riferimento ai numeri di pagina, è talvolta necessario distinguere tra il concetto di stampante di una pagina e il concetto di un documento di una pagina. Dal punto di vista della stampante, una pagina è un foglio di carta. Tuttavia, un foglio di carta non corrisponde necessariamente una pagina del documento. Ad esempio, se si stampa un notiziario, in cui i fogli devono essere ridotte, un foglio di carta potrebbe contenere pagine e il cognome del documento, affiancati. Analogamente, se si intende stampare un foglio di calcolo, il documento non costituiti da pagine affatto. Al contrario, un foglio di carta potrebbe contenere le righe da 1 a 20, 6 e 10 colonne.  
  
 Pagina tutti i numeri nel [CPrintInfo](../mfc/reference/cprintinfo-structure.md) struttura fare riferimento a pagine della stampante. Il framework chiama `OnPrepareDC` e `OnPrint` una volta per ogni foglio di carta che verrà passati attraverso la stampante. Quando esegue l'override di [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) funzione per specificare la lunghezza del documento, è necessario utilizzare le pagine della stampante. Se è presente una corrispondenza uno a uno (ovvero, una pagina stampata è uguale a una pagina di documento), quindi è facile. Se, invece, le pagine di documento e di stampante non corrispondono direttamente, è necessario convertire tra di essi. Si consideri ad esempio la stampa di un foglio di calcolo. Quando si esegue l'override `OnPreparePrinting`, è necessario calcolare il numero di carta fogli sarà necessario per stampare l'intero foglio di calcolo e quindi utilizzare tale valore durante la chiamata di `SetMaxPage` funzione membro di `CPrintInfo`. Analogamente, quando si esegue l'override `OnPrepareDC`, è necessario convertire *m_nCurPage* nell'intervallo di righe e colonne che verranno visualizzato in quel determinato foglio e modificare di conseguenza l'origine del viewport.  
  
##  <a name="_core_print.2d.time_pagination"></a> Paginazione in fase di stampa  
 In alcune situazioni, la classe di visualizzazione potrebbe non sapere in anticipo quanto tempo il documento è fino a quando non è in realtà è stato stampato. Ad esempio, si supponga che l'applicazione non è WYSIWYG, pertanto lunghezza di un documento sullo schermo non corrisponde alla sua lunghezza quando vengono stampate.  
  
 Ciò causa un problema quando si esegue l'override [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) per la classe di visualizzazione: non è possibile passare un valore per il `SetMaxPage` funzione del [CPrintInfo](../mfc/reference/cprintinfo-structure.md) struttura, perché non si conosce la lunghezza di un documento. Se l'utente non specifica un numero di pagina per arrestare in utilizzando la finestra di dialogo di stampa, il framework non conosce l'interruzione del ciclo di stampa. L'unico modo per determinare l'interruzione del ciclo di stampa è per stampare il documento e vedere quando termina. Classe di visualizzazione deve controllare la fine del documento mentre è in fase di stampa e quindi comunicare il framework quando viene raggiunta la fine.  
  
 Il framework si basa sulla classe di visualizzazione [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) funzione per indicare l'interruzione. Dopo ogni chiamata a `OnPrepareDC`, il framework controlla un membro del `CPrintInfo` struttura denominata *m_bContinuePrinting*. Il valore predefinito è **TRUE.** Fino a quando viene modificato, il framework continua il ciclo di stampato. Se è impostata su **FALSE**, si arresta il framework. Per eseguire la paginazione in fase di stampa, eseguire l'override `OnPrepareDC` per stabilire se la fine del documento è stato raggiunta e impostare *m_bContinuePrinting* a **FALSE** se è presente.  
  
 L'implementazione predefinita di `OnPrepareDC` imposta *m_bContinuePrinting* a **FALSE** se la pagina corrente è maggiore di 1. Ciò significa che se non è stata specificata la lunghezza del documento, il framework presuppone che il documento è lungo una sola pagina. È una conseguenza di ciò che è necessario prestare attenzione se si chiama la versione della classe base `OnPrepareDC`. Non presupporre che *m_bContinuePrinting* saranno **TRUE** dopo la chiamata di versione della classe base.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Informazioni sulle intestazioni e piè di pagina](../mfc/headers-and-footers.md)  
  
-   [Allocazione di risorse GDI](../mfc/allocating-gdi-resources.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Stampa](../mfc/printing.md)   
 [CView (classe)](../mfc/reference/cview-class.md)   
 [Classe CDC](../mfc/reference/cdc-class.md)