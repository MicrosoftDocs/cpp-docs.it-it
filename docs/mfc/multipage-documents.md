---
title: "Documenti con pi&#249; pagine | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPrintInfo (struttura), documenti con più pagine"
  - "pagine di documento e pagine di stampa"
  - "documenti, impaginazione"
  - "documenti, stampa"
  - "DoPreparePrinting (metodo) e impaginazione"
  - "documenti con più pagine"
  - "OnBeginPrinting (metodo)"
  - "OnDraw (metodo), stampa"
  - "OnEndPrinting (metodo)"
  - "OnPrepareDC (metodo)"
  - "OnPreparePrinting (metodo)"
  - "OnPrint (metodo)"
  - "override, funzioni di classe di visualizzazione per la stampa"
  - "pagine, stampa"
  - "paginazione"
  - "paginazione, stampa di documenti con più pagine"
  - "modalità stampante"
  - "stampanti, modalità stampante"
  - "stampa [MFC], documenti con più pagine"
  - "stampa [MFC], paginazione"
  - "stampa [MFC], protocollo"
  - "protocolli, protocollo di stampa"
ms.assetid: 69626b86-73ac-4b74-b126-9955034835ef
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Documenti con pi&#249; pagine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo vengono descritte le finestre che stampa il protocollo e viene illustrato come stampare documenti che contengono più pagine.  Articolo vengono trattati i seguenti argomenti:  
  
-   [Protocollo di stampa](#_core_the_printing_protocol)  
  
-   [Eseguire l'override delle funzioni della classe di visualizzazione](#_core_overriding_view_class_functions)  
  
-   [Paginazione](#_core_pagination)  
  
-   [Pagine della stampante e le pagine di documento](#_core_printer_pages_vs.._document_pages)  
  
-   [Paginazione di tempo di stampa](#_core_print.2d.time_pagination)  
  
##  <a name="_core_the_printing_protocol"></a> Il protocollo di stampa  
 Per stampare un documento a più pagine, il framework e visualizzazione interattivi nel modo seguente.  Innanzitutto il framework visualizzare la finestra di dialogo **Stampa**, viene creato un contesto di dispositivo per la stampante e chiama la funzione membro di [StartDoc](../Topic/CDC::StartDoc.md) dell'oggetto di [CDC](../mfc/reference/cdc-class.md).  Quindi, ogni pagina di un documento, il framework richiede la funzione membro di [StartPage](../Topic/CDC::StartPage.md) dell'oggetto di `CDC`, ma l'oggetto visualizzato per stampare la pagina e chiama la funzione membro di [EndPage](../Topic/CDC::EndPage.md).  Se la stampante modo che deve essere modificata prima di avvio una pagina particolare, la visualizzazione chiamate [ResetDC](../Topic/CDC::ResetDC.md), che aggiorna la struttura di [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) che contiene le nuove informazioni della modalità della stampante.  Se l'intero documento è stato visualizzato, il framework chiama la funzione membro di [EndDoc](../Topic/CDC::EndDoc.md).  
  
##  <a name="_core_overriding_view_class_functions"></a> Eseguire l'override delle funzioni della classe di visualizzazione  
 La classe di [CView](../mfc/reference/cview-class.md) definisce diverse funzioni membro definite dal framework durante la stampa.  Eseguire l'override di queste funzioni nella classe di visualizzazione, fornite le connessioni tra la logica di stampa del framework e la logica di visualizzazione di stampa della classe.  Nella tabella seguente sono elencate le funzioni membro.  
  
### Le funzioni sottoponibili a override CView per stampare  
  
|Nome|Motivo per eseguire l'override|  
|----------|------------------------------------|  
|[OnPreparePrinting](../Topic/CView::OnPreparePrinting.md)|Per inserire i valori nella finestra di dialogo stampa, in particolare la lunghezza del documento|  
|[OnBeginPrinting](../Topic/CView::OnBeginPrinting.md)|Per allocare i tipi di carattere o altre risorse GDI|  
|[OnPrepareDC](../Topic/CView::OnPrepareDC.md)|Per modificare gli attributi del contesto di dispositivo per una determinata pagina, oppure fare paginazione di tempo di stampa|  
|[OnPrint](../Topic/CView::OnPrint.md)|Per stampare una pagina specifica|  
|[OnEndPrinting](../Topic/CView::OnEndPrinting.md)|Per rilasciare le risorse GDI|  
  
 È possibile eseguire l'elaborazione stampa correlata in altre funzioni, ma anche queste funzioni sono quelle che determinino il processo di stampa.  
  
 Nella figura che segue vengono illustrati i passaggi necessari per processo di stampa e viene visualizzato in ognuno di `CView` che visualizza le funzioni membro viene chiamato.  La parte restante di questo articolo viene illustrato più dettagliatamente la maggior parte di questi passaggi.  Parti supplementari del processo di stampa sono descritte nell'articolo [Allocare risorse GDI](../mfc/allocating-gdi-resources.md).  
  
 ![Processo del ciclo di stampa](../mfc/media/vc37c71.png "vc37C71")  
Ciclo di stampa  
  
##  <a name="_core_pagination"></a> Paginazione  
 Il framework contiene molte delle informazioni su un processo di stampa in una struttura di [CPrintInfo](../mfc/reference/cprintinfo-structure.md).  Diversi valori in `CPrintInfo` riguardano paginazione; questi valori sono accessibili come illustrato nella tabella seguente.  
  
### Informazioni sul numero di pagina memorizzate in CPrintInfo  
  
|Variabile membro o<br /><br /> nomi di funzione|Numero di pagina fa riferimento|  
|---------------------------------------------|-------------------------------------|  
|`GetMinPage`\/`SetMinPage`|Prima pagina del documento|  
|`GetMaxPage`\/`SetMaxPage`|Ultima pagina del documento|  
|`GetFromPage`|Prima pagina da stampare|  
|`GetToPage`|Ultima pagina da stampare|  
|`m_nCurPage`|Pagina attualmente viene stampata|  
  
 I numeri di pagina iniziano da 1, ovvero, la prima pagina è che ha per numero 1, non 0.  Per ulteriori informazioni su questi e altri membri di [CPrintInfo](../mfc/reference/cprintinfo-structure.md), vedere il *Riferimento MFC*.  
  
 All'inizio del processo di stampa, il framework chiama la funzione membro di [OnPreparePrinting](../Topic/CView::OnPreparePrinting.md) della visualizzazione, passando un puntatore a una struttura di `CPrintInfo`.  La creazione guidata applicazione fornisce un'implementazione di `OnPreparePrinting` che chiama [DoPreparePrinting](../Topic/CView::DoPreparePrinting.md), un'altra funzione membro di `CView`.  `DoPreparePrinting` è la funzione che visualizza la finestra di dialogo stampa e crea un contesto del dispositivo della stampante.  
  
 A questo punto l'applicazione non conosce il numero di pagine sono presenti nel documento.  Utilizza i valori predefiniti 1 e 0xFFFF per i numeri primi e dell'ultima pagina del documento.  Se si conosce il numero di pagine il documento dispone, eseguire l'override `OnPreparePrinting` e la chiamata [SetMaxPage](../Topic/CPrintInfo::SetMaxPage.md) per la struttura di `CPrintInfo` prima di inviare a `DoPreparePrinting`.  Questo consente di specificare la durata del documento.  
  
 `DoPreparePrinting` quindi viene visualizzata la finestra di dialogo stampa.  Quando termina, la struttura di `CPrintInfo` contiene i valori specificati dall'utente.  Se i desideri dell'utente di stampare solo un intervallo selezionato le pagine, ciascun utente possono specificare i numeri di pagina iniziale e finale nella finestra di dialogo stampa.  Il framework recupera tali valori utilizzando le funzioni di `GetToPage` e di `GetFromPage` di [CPrintInfo](../mfc/reference/cprintinfo-structure.md).  Se l'utente non specifica un intervallo di pagina, il framework chiama `GetMinPage` e `GetMaxPage` e utilizza i valori restituiti per stampare l'intero documento.  
  
 Per ogni pagina di un documento da stampare, il framework chiama due funzioni membro della classe di visualizzazione, in [OnPrepareDC](../Topic/CView::OnPrepareDC.md) e in [OnPrint](../Topic/CView::OnPrint.md) e passa a ogni funzione due parametri: un puntatore a un oggetto di [CDC](../mfc/reference/cdc-class.md) e un puntatore a una struttura di `CPrintInfo`.  Quando il framework chiama `OnPrepareDC` e `OnPrint`, viene passato un valore diverso nel membro di `m_nCurPage` della struttura di `CPrintInfo`.  In questo modo il framework indica alla visualizzazione quale la pagina deve essere stampati.  
  
 La funzione membro di [OnPrepareDC](../Topic/CView::OnPrepareDC.md) viene inoltre utilizzata per la visualizzazione.  Consente regolazioni in incrementi al contesto di dispositivo prima di disegnare sia successiva.  `OnPrepareDC` serve una simile ruolo di stampa, ma esistono una coppia di differenze: innanzitutto, l'oggetto di `CDC` rappresenta un contesto del dispositivo della stampante anziché un contesto di dispositivo dello schermo e secondo, un oggetto `CPrintInfo` viene passato come secondo parametro. \(Questo parametro è **NULL** quando `OnPrepareDC` viene chiamato per la visualizzazione.\) Eseguire l'override `OnPrepareDC` per apportare modifiche al contesto di dispositivo basato su cui la pagina viene stampanda.  Ad esempio, è possibile spostare l'origine del riquadro di visualizzazione e l'area di ridimensionamento per assicurarsi che la parte corretta del documento ottiene la stampa.  
  
 La funzione membro di [OnPrint](../Topic/CView::OnPrint.md) esegue l'effettiva stampa della pagina.  Nell'[Come default la stampa viene effettuata](../mfc/how-default-printing-is-done.md)articolo come il framework chiama [OnDraw](../Topic/CView::OnDraw.md) con un contesto di dispositivo della stampante per eseguire la stampa.  Più precisamente, le chiamate `OnPrint` del framework con una struttura di `CPrintInfo` e un contesto di dispositivo e sessioni di `OnPrint` il contesto di dispositivo a `OnDraw`.  Eseguire l'override `OnPrint` per eseguire il rendering che deve essere eseguita solo durante la stampa e non per la visualizzazione.  Ad esempio, stampare le intestazioni o piè di pagina \(vedere l'articolo [Intestazioni e piè di pagina](../mfc/headers-and-footers.md) per ulteriori informazioni.  Chiamare quindi `OnDraw` da un override di `OnPrint` per eseguire il comune di rendering sia alla visualizzazione e alla stampa.  
  
 Il fatto che `OnDraw` esegue il rendering per la visualizzazione della stampa significa che l'applicazione è analoga a: "Visualizzati si ottiene". Tuttavia, si supponga che non si stia creando un'applicazione WYSIWYG.  Si consideri, ad esempio un editor di testo che utilizza grassetto per i codici di controllo delle visualizzazioni ma di stampa selezionare il testo in grassetto sullo schermo.  In una situazione, utilizzare esclusivamente `OnDraw` per la visualizzazione.  Quando si esegue l'override `OnPrint`, sostituire la chiamata a `OnDraw` con una chiamata a una funzione distinta di disegno.  Che la funzione disegna il documento il metodo compare su carte, mediante gli attributi non visualizzati sullo schermo.  
  
##  <a name="_core_printer_pages_vs.._document_pages"></a> Pagine della stampante e le pagine di documento  
 Quando si fa riferimento ai numeri di pagina, è talvolta necessario distinguere tra il concetto delle stampanti in una pagina e il concetto di un documento di una pagina.  Dal punto di vista della stampante, una pagina è un foglio di carta.  Tuttavia, un foglio di carta necessariamente non equivale a una pagina del documento.  Ad esempio, se si stampa un informazioni, in cui i fogli devono essere piegati, un foglio di carta potrebbe contenere entrambe le prime e ultima pagina del documento, affiancate.  Analogamente, se si stampa di un foglio di calcolo, il documento non è costituito dalle pagine eseguito.  Al contrario, un foglio di carta può contenere righe da 1 a 20, le colonne da 6 a 10.  
  
 Tutti i numeri di pagina nella struttura di [CPrintInfo](../mfc/reference/cprintinfo-structure.md) si riferiscono alle pagine della stampante.  Il framework chiama una volta `OnPrepareDC` e `OnPrint` per ogni foglio di carta che verranno attraversati dalla stampante.  Quando si esegue l'override della funzione di [OnPreparePrinting](../Topic/CView::OnPreparePrinting.md) per specificare la lunghezza del documento, è necessario utilizzare le pagine della stampante.  Se esiste una corrispondenza uno\-a\-uno ovvero equals di una pagina della stampante la pagina di un documento\), questo è semplice.  Se, invece, le pagine di documento e le pagine della stampante non corrispondono direttamente, è necessario convertire tra esse.  Ad esempio, si consiglia di stampare un foglio di calcolo.  Nell'eseguire l'override di `OnPreparePrinting`, è necessario calcolare il numero di fogli di carta saranno necessari per stampare l'intero foglio di calcolo e utilizzare tale valore quando chiama la funzione membro di `SetMaxPage` di `CPrintInfo`.  Analogamente quando si esegue l'override `OnPrepareDC`, è necessario convertire `m_nCurPage` in serie di righe e colonne che verranno visualizzati nel foglio specifico e quindi regolati l'origine del riquadro di visualizzazione di conseguenza.  
  
##  <a name="_core_print.2d.time_pagination"></a> Paginazione di tempo di stampa  
 In alcune situazioni, la classe di visualizzazione non può prevedere quanto tempo è il documento fino a effettivamente stamparlo.  Ad esempio, si supponga che l'applicazione non sia analoga, pertanto una lunghezza del documento sullo schermo non corrisponde alla relativa lunghezza stampato.  
  
 Questo comporta un problema quando si esegue l'override [OnPreparePrinting](../Topic/CView::OnPreparePrinting.md) per la classe di visualizzazione: non è possibile passare un valore alla funzione di `SetMaxPage` della struttura di [CPrintInfo](../mfc/reference/cprintinfo-structure.md), poiché non si conosce la lunghezza di un documento.  Se l'utente non specifica un numero di pagina per arrestare all'utilizzo della finestra di dialogo stampa, il framework non sa quando arrestare il ciclo di stampa.  L'unico modo per determinare quando arrestare il ciclo di stampa è di stampare il documento e di visualizzare quando termina.  La classe di visualizzazione deve verificare la fine del documento mentre è stampanda quindi informare il framework durante la fine viene soddisfatta.  
  
 Il framework utilizza la funzione di visualizzazione di [OnPrepareDC](../Topic/CView::OnPrepareDC.md) della classe che richieda l'esecuzione quando arrestare.  Dopo ogni chiamata a `OnPrepareDC`, il framework di un membro della struttura di `CPrintInfo` chiamata `m_bContinuePrinting`.  Il valore predefinito è **TRUE.** Finché rimane pertanto, il framework continua il ciclo di stampa.  Se sono impostate su **FALSE**, il framework interrotto.  Per eseguire la paginazione di tempo di stampa, override `OnPrepareDC` per controllare se la fine del documento sia stata raggiunta e set `m_bContinuePrinting` a **FALSE** quando ha.  
  
 L'implementazione predefinita di `OnPrepareDC` imposta `m_bContinuePrinting` a **FALSE** se la pagina corrente è maggiore di 1.  Ciò significa che se la lunghezza del documento non è stata specificata, il framework si presuppone il documento è una pagina long.  Come conseguenza di questa è necessario prestare attenzione se si chiama la versione della classe base di `OnPrepareDC`.  Non presupporre che `m_bContinuePrinting` verrà **TRUE** dopo la chiamata alla versione della classe base.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Intestazioni e piè di pagina](../mfc/headers-and-footers.md)  
  
-   [Allocare risorse GDI](../mfc/allocating-gdi-resources.md)  
  
## Vedere anche  
 [Stampa](../mfc/printing.md)   
 [CView Class](../mfc/reference/cview-class.md)   
 [Classe CDC](../mfc/reference/cdc-class.md)