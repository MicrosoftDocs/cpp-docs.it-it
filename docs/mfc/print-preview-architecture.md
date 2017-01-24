---
title: "Architettura dell&#39;anteprima di stampa | Microsoft Docs"
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
  - "anteprima di stampa"
  - "anteprima di stampa, architettura"
  - "anteprima di stampa, modifiche a MFC"
  - "anteprima di stampa, processo"
  - "stampa [MFC], anteprima di stampa"
ms.assetid: 0efc87e6-ff8d-43c5-9d72-9b729a169115
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Architettura dell&#39;anteprima di stampa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrata l'implementazione della funzionalità di anteprima di stampa del framework MFC.  Vengono trattati i seguenti argomenti:  
  
-   [Processo dell'anteprima di stampa](#_core_the_print_preview_process)  
  
-   [Modifica dell'anteprima di stampa](#_core_modifying_print_preview)  
  
 L'anteprima di stampa è piuttosto diversa dalla visualizzazione su schermo e dalla stampa perché, anziché disegnare direttamente un'immagine in un dispositivo, l'applicazione deve simulare la stampante utilizzando lo schermo.  A questo scopo, la libreria Microsoft Foundation Class \(MFC\) definisce una classe speciale \(non documentata\) derivata da [Classe CDC](../mfc/reference/cdc-class.md), denominata **CPreviewDC**.  Tutti gli oggetti `CDC` contengono due contesti di periferica, ma in genere sono identici.  In un oggetto **CPreviewDC** sono diversi: il primo rappresenta la stampante che viene simulata mentre il secondo rappresenta lo schermo sul quale viene effettivamente visualizzato l'output.  
  
##  <a name="_core_the_print_preview_process"></a> Il processo dell'anteprima di stampa  
 Quando l'utente seleziona il comando Anteprima di stampa dal menu **File**, il framework crea un oggetto **CPreviewDC**.  Ogni volta che l'applicazione realizza un'operazione che imposta una caratteristica del contesto di dispositivo della stampante, il framework esegue un'operazione simile nel contesto di dispositivo dello schermo.  Ad esempio, se l'applicazione seleziona un tipo di carattere per la stampa, il framework seleziona un tipo di carattere per la visualizzazione su schermo che simuli il tipo di carattere della stampante.  Ogni volta che l'applicazione invia l'output alla stampante, il framework invia invece l'output allo schermo.  
  
 L'anteprima di stampa è differente dalla stampa nell'ordine di disegno delle pagine di un documento.  Durante la stampa, il framework continua un ciclo di stampa fino al rendering di un determinato intervallo di pagine.  Durante l'anteprima di stampa, vengono visualizzate una o due pagine in qualsiasi momento e quindi l'applicazione resta in attesa; non viene visualizzata nessun'altra pagina finché l'utente non risponde.  Durante l'anteprima di stampa, l'applicazione deve inoltre rispondere ai messaggi `WM_PAINT`, come viene fatto durante la visualizzazione normale su schermo.  
  
 La funzione [CView::OnPreparePrinting](../Topic/CView::OnPreparePrinting.md) viene chiamata quando viene richiamata la modalità di anteprima, così come viene fatto all'inizio di un processo di stampa.  La struttura [CPrintInfo Structure](../mfc/reference/cprintinfo-structure.md) passata alla funzione contiene diversi membri i cui valori possono essere impostati per modificare alcune caratteristiche dell'operazione di anteprima di stampa.  Ad esempio, è possibile impostare il membro **m\_nNumPreviewPages** per specificare se si desidera visualizzare in anteprima il documento nella modalità a pagina singola o a due pagine.  
  
##  <a name="_core_modifying_print_preview"></a> Modifica dell'anteprima di stampa  
 È possibile modificare il comportamento e l'aspetto dell'anteprima di stampa in varie modalità in modo piuttosto semplice.  Ad esempio, è possibile, tra le altre cose:  
  
-   Fare in modo che la finestra dell'anteprima di stampa visualizzi una barra di scorrimento per semplificare l'accesso a qualsiasi pagina del documento.  
  
-   Fare in modo che l'anteprima di stampa mantenga la posizione dell'utente nel documento per iniziare la visualizzazione dalla pagina corrente.  
  
-   Fare in modo che l'inizializzazione possa essere eseguita in modo differente per l'anteprima di stampa e per la stampa.  
  
-   Fare in modo che l'anteprima di stampa visualizzi i numeri di pagina con il proprio formato personalizzato.  
  
 Se si conosce la lunghezza del documento e si chiama `SetMaxPage` con il valore appropriato, il framework può utilizzare questa informazione nella modalità anteprima nonché durante la stampa.  Una volta che il framework conosce la lunghezza del documento, può fornire alla finestra di anteprima una barra di scorrimento, consentendo all'utente di andare avanti e indietro nel documento nella modalità di anteprima.  Se non è stata impostata la lunghezza del documento, il framework non può posizionare la barra di scorrimento per indicare la posizione corrente, quindi il framework non aggiunge una barra di scorrimento.  In questo caso, l'utente deve utilizzare i pulsanti Pagina successiva e Pagina precedente nella barra di controllo della finestra dell'anteprima per scorrere il documento.  
  
 Per l'anteprima di stampa, può essere utile assegnare un valore al membro `m_nCurPage` di `CPrintInfo`, anche se questa operazione non viene mai realizzata per la stampa comune.  Durante la stampa comune, il membro trasmette informazioni dal framework alla classe di visualizzazione.  In questo modo il framework indica alla visualizzazione quale pagina deve essere stampata.  
  
 Al contrario, quando la modalità di anteprima di stampa è avviata, il membro `m_nCurPage` trasmette informazioni nella direzione opposta: dalla visualizzazione al framework.  Il framework utilizza il valore di questo membro per determinare quale pagina deve essere visualizzata in anteprima per prima.  Il valore predefinito di questo membro è 1, in questo modo viene inizialmente visualizzata la prima pagina del documento.  È possibile eseguire l'override di `OnPreparePrinting` per impostare il membro sul numero di pagina che viene visualizzato nel momento in cui il comando Anteprima di stampa è stato richiamato.  In questo modo, l'applicazione mantiene la posizione corrente dell'utente quando si sposta dalla modalità di visualizzazione normale alla modalità anteprima di stampa.  
  
 In alcuni casi è necessario che `OnPreparePrinting` esegua differenti inizializzazioni a seconda che venga chiamato per un processo di stampa o per l'anteprima di stampa.  È possibile realizzare questa operazione esaminando la variabile membro **m\_bPreview** nella struttura `CPrintInfo`.  Questo membro è impostato su **TRUE** quando l'anteprima di stampa viene richiamata.  
  
 La struttura `CPrintInfo` contiene anche un membro denominato **m\_strPageDesc**, che viene utilizzato per formattare le stringhe che vengono visualizzate nella parte inferiore dello schermo nella modalità a pagina singola o a più pagine.  Per impostazione predefinita queste stringhe hanno la forma "Pagina *n*" e "Pagine *n* \- *m*," ma è possibile modificare **m\_strPageDesc** da `OnPreparePrinting` e impostare le stringhe con qualcosa di più elaborato.  Vedere [CPrintInfo Structure](../mfc/reference/cprintinfo-structure.md) nei *Riferimenti alla libreria MFC* per ulteriori informazioni.  
  
## Vedere anche  
 [Stampa e anteprima di stampa](../mfc/printing-and-print-preview.md)   
 [Stampa](../mfc/printing.md)   
 [CView Class](../mfc/reference/cview-class.md)   
 [Classe CDC](../mfc/reference/cdc-class.md)