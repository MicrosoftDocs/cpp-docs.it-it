---
title: Architettura dell'anteprima di stampa
ms.date: 11/04/2016
helpviewer_keywords:
- print preview [MFC], process
- previewing printing
- print preview [MFC], architecture
- printing [MFC], print preview
- print preview [MFC], modifications to MFC
ms.assetid: 0efc87e6-ff8d-43c5-9d72-9b729a169115
ms.openlocfilehash: 2a57b3c8ef6df46c2e2524cb44dd29d68751389b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50569677"
---
# <a name="print-preview-architecture"></a>Architettura dell'anteprima di stampa

In questo articolo viene illustrata l'implementazione della funzionalità di anteprima di stampa del framework MFC. Gli argomenti trattati comprendono:

- [Processo di anteprima di stampa](#_core_the_print_preview_process)

- [Modifica dell'anteprima di stampa](#_core_modifying_print_preview)

L'anteprima di stampa è piuttosto diversa dalla visualizzazione e dalla stampa di una schermata perché, anziché disegnare direttamente un'immagine in un dispositivo, l'applicazione deve simulare la stampante utilizzando lo schermo. Di conseguenza, la libreria Microsoft Foundation Class definisce una classe speciale (non documentata) derivata da [classe CDC](../mfc/reference/cdc-class.md), denominato `CPreviewDC`. Tutti gli oggetti `CDC` contengono due contesti di periferica, ma in genere sono identici. In un `CPreviewDC` dell'oggetto, sono diversi: il primo rappresenta la stampante che viene simulata e il secondo rappresenta la schermata in cui viene effettivamente visualizzato l'output.

##  <a name="_core_the_print_preview_process"></a> Il processo di anteprima di stampa

Quando l'utente seleziona il comando Anteprima di stampa dal **File** menu, il framework crea un `CPreviewDC` oggetto. Ogni volta che nell'applicazione viene eseguita un'operazione che imposta una caratteristica del contesto della stampante, viene eseguita dal framework un'operazione simile nel contesto dello schermo. Ad esempio, se nell'applicazione viene selezionato un tipo di carattere per la stampa, dal framework viene selezionato un tipo di carattere per la visualizzazione su schermo che simula il tipo di carattere della stampante. Ogni volta che dall'applicazione l'output viene inviato alla stampante, dal framework viene inviato l'output allo schermo.

L'anteprima di stampa è differente dalla stampa nell'ordine di disegno delle pagine di un documento. Durante la stampa, il framework continua un ciclo di stampa fino al completamento del rendering di un determinato intervallo di pagine. Durante l'anteprima di stampa, vengono visualizzate una o due pagine in qualsiasi momento e quindi l'applicazione resta in attesa; non viene visualizzata alcun'altra pagina finché l'utente non risponde. Durante l'anteprima di stampa, l'applicazione deve inoltre rispondere ai messaggi WM_PAINT, come avviene durante la normale visualizzazione su schermo.

Il [CView:: OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) funzione viene chiamata quando viene richiamata la modalità di anteprima, così come viene fatto all'inizio di un processo di stampa. Il [CPrintInfo (struttura)](../mfc/reference/cprintinfo-structure.md) struttura passato alla funzione contiene diversi membri i cui valori è possibile impostare per modificare alcune caratteristiche dell'operazione di anteprima di stampa. Ad esempio, è possibile impostare il *m_nNumPreviewPages* membro per specificare se si desidera visualizzare in anteprima il documento nella modalità di una pagina o due pagine.

##  <a name="_core_modifying_print_preview"></a> Modifica dell'anteprima di stampa

È possibile modificare il comportamento e l'aspetto dell'anteprima di stampa in varie modalità in modo piuttosto semplice. Ad esempio, è possibile, tra le altre cose:

- Fare in modo che la finestra dell'anteprima di stampa visualizzi una barra di scorrimento per semplificare l'accesso a qualsiasi pagina del documento.

- Fare in modo che l'anteprima di stampa mantenga la posizione dell'utente nel documento da cui iniziare la visualizzazione dalla pagina corrente.

- Fare in modo che l'inizializzazione possa essere eseguita in modo differente per l'anteprima di stampa e per la stampa.

- Fare in modo che l'anteprima di stampa visualizzi i numeri di pagina con il proprio formato personalizzato.

Se si conosce la lunghezza del documento e si chiama `SetMaxPage` con il valore appropriato, il framework può utilizzare questa informazione nella modalità anteprima nonché durante la stampa. Una volta che il framework conosce la lunghezza del documento, può fornire alla finestra di anteprima una barra di scorrimento, consentendo all'utente di scorrere avanti e indietro il documento nella modalità di anteprima. Se non è stata impostata la lunghezza del documento, il framework non può posizionare la barra di scorrimento per indicare la posizione corrente, quindi non aggiunge una barra di scorrimento. In questo caso, l'utente deve utilizzare i pulsanti Pagina successiva e Pagina precedente nella barra di controllo della finestra dell'anteprima per scorrere il documento.

Per l'anteprima di stampa, può risultare utile per assegnare un valore per il *m_nCurPage* membro di `CPrintInfo`, anche se questa operazione viene effettuata mai per la stampa comune. Durante la stampa comune, il membro trasmette informazioni dal framework alla classe di visualizzazione. In questo modo il framework indica alla visualizzazione quale pagina deve essere stampata.

Al contrario, quando viene avviata in modalità di anteprima di stampa, il *m_nCurPage* membro trasmette informazioni nella direzione opposta: dalla visualizzazione al framework. Il framework utilizza il valore di questo membro per determinare quale pagina deve essere visualizzata in anteprima per prima. Il valore predefinito di questo membro è 1, in questo modo viene inizialmente visualizzata la prima pagina del documento. È possibile eseguire l'override di `OnPreparePrinting` per impostare il membro sul numero di pagina che viene visualizzato nel momento in cui il comando Anteprima di stampa è stato richiamato. In questo modo, l'applicazione mantiene la posizione corrente dell'utente quando si sposta dalla modalità di visualizzazione normale alla modalità anteprima di stampa.

In alcuni casi è necessario che `OnPreparePrinting` esegua differenti inizializzazioni a seconda che venga chiamato per un processo di stampa o per l'anteprima di stampa. È possibile determinare tale valore esaminandone i *m_bPreview* variabile membro nel `CPrintInfo` struttura. Questo membro è impostato su **TRUE** quando viene richiamato l'anteprima di stampa.

Il `CPrintInfo` struttura contiene anche un membro denominato *m_strPageDesc*, che consente di formattare le stringhe visualizzate nella parte inferiore dello schermo in modalità a pagina singola e più pagine. Per impostazione predefinita queste stringhe hanno la forma "pagina *n*" e "pagine *n* - *m*," ma è possibile modificare *m_strPageDesc* da all'interno di `OnPreparePrinting` e impostare le stringhe su qualcosa di più elaborato. Visualizzare [struttura CPrintInfo](../mfc/reference/cprintinfo-structure.md) nel *riferimenti alla libreria MFC* per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Stampa e anteprima di stampa](../mfc/printing-and-print-preview.md)<br/>
[Stampa](../mfc/printing.md)<br/>
[Classe CView](../mfc/reference/cview-class.md)<br/>
[Classe CDC](../mfc/reference/cdc-class.md)
