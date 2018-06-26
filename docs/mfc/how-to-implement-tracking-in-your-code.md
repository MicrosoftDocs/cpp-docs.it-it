---
title: 'Procedura: implementare il rilevamento nel codice | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CRectTracker class [MFC], implementing trackers
ms.assetid: baaeca2c-5114-485f-bf58-8807db1bc973
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dc21369dd8d241bd00da2a0a8005c977094c3abf
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932094"
---
# <a name="how-to-implement-tracking-in-your-code"></a>Procedura: implementare il rilevamento nel codice
Per tenere traccia di un elemento OLE, è necessario gestire determinati eventi correlati all'elemento, ad esempio facendo clic sull'elemento o l'aggiornamento della vista del documento. In tutti i casi, è sufficiente dichiarare una variabile temporanea [CRectTracker](../mfc/reference/crecttracker-class.md) dell'oggetto e modificare l'elemento tramite questo oggetto.  
  
 Quando un utente seleziona un elemento o inserisce un oggetto con un comando di menu, è necessario inizializzare il componente di individuazione con gli stili appropriati per rappresentare lo stato dell'elemento OLE. Nella tabella seguente vengono descritte le convenzioni utilizzate dall'esempio OCLIENT. Per ulteriori informazioni su questi stili, vedere `CRectTracker`.  
  
### <a name="container-styles-and-states-of-the-ole-item"></a>Stili di contenitore e gli Stati dell'elemento OLE  
  
|Stile visualizzato|Stato dell'elemento OLE|  
|---------------------|-----------------------|  
|Linea punteggiata|Elemento collegato|  
|Bordo a tinta unita|Elemento è incorporato nel documento|  
|Quadratini di ridimensionamento|Elemento attualmente selezionato|  
|Bordo tratteggiato|Elemento è attualmente attiva|  
|Elemento sovrapposizioni di motivo di tratteggio a modello|Il server dell'elemento è aperto|  
  
 È possibile gestire l'inizializzazione con facilità utilizzando una procedura che controlla lo stato dell'elemento OLE e imposta gli stili appropriati. Il `SetupTracker` trovare dell'esempio OCLIENT la funzione viene illustrata l'inizializzazione di arresto. I parametri per questa funzione sono l'indirizzo dello strumento di rilevamento, *pTracker*; un puntatore all'elemento di client che riguarda l'arresto *pItem*; e un puntatore a un rettangolo, *pTrueRect* . Per un esempio più completo di questa funzione, vedere l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).  
  
 Il **SetupTracker** nell'esempio di codice presenta una singola funzione, le righe della funzione vengono intercalate con ulteriori informazioni sulle funzionalità della funzione:  
  
 [!code-cpp[NVC_MFCOClient#1](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_1.cpp)]  
  
 L'individuazione viene inizializzata impostando le dimensioni minime e cancellare lo stile dello strumento di rilevamento.  
  
 [!code-cpp[NVC_MFCOClient#2](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_2.cpp)]  
  
 Le righe seguenti verificare se l'elemento selezionato e se l'elemento è collegato al documento o incorporato. Quadratini di ridimensionamento che si trova all'interno del bordo vengono aggiunti allo stile, che indica che l'elemento attualmente selezionato. Se l'elemento è collegato al documento, viene utilizzato lo stile di linea punteggiata. Se l'elemento è incorporato, viene utilizzato un bordo a tinta unita.  
  
 [!code-cpp[NVC_MFCOClient#3](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_3.cpp)]  
  
 Aprire l'elemento con un criterio tratteggiato se l'elemento è attualmente le sovrapposizioni di codice seguente.  
  
 [!code-cpp[NVC_MFCOClient#4](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_4.cpp)]  
  
 È quindi possibile chiamare questa funzione ogni volta che l'individuazione deve essere visualizzata. Ad esempio, chiamare questa funzione dal `OnDraw` funzione della classe di visualizzazione. Aspetto del tracker verrà aggiornata ogni volta che la vista viene ridisegnata. Per un esempio completo, vedere la `CMainView::OnDraw` funzione dell'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).  
  
 Nell'applicazione, gli eventi che richiedono il codice di registrazione, ad esempio il rilevamento di ridimensionamento, spostamento o di passaggi specificato, si verificherà. Queste azioni in genere indicano che un tentativo di catturare o spostare l'elemento. In questi casi, sarà necessario decidere cosa è stata afferrata: un quadratino di ridimensionamento o di una parte del bordo tra quadratini di ridimensionamento. Il `OnLButtonDown` dal gestore di messaggi è un ottimo strumento per verificare la posizione del puntatore del mouse in relazione l'elemento. Effettuare una chiamata a `CRectTracker::HitTest`. Se il test restituisce un valore diverso da `CRectTracker::hitOutside`, l'elemento viene ridimensionato o spostato. Pertanto, è necessario effettuare una chiamata al `Track` funzione membro. Vedere la `CMainView::OnLButtonDown` funzione che si trova nell'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) per un esempio completo.  
  
 Il `CRectTracker` classe offre varie forme di cursore diverso consente di indicare se uno spostamento, ridimensionamento o trascinamento operazione viene eseguita. Per gestire questo evento, verificare se l'elemento attualmente sotto il mouse è selezionato. In caso affermativo, effettuare una chiamata a `CRectTracker::SetCursor`, oppure chiamare il gestore predefinito. Nell'esempio seguente è tratto dall'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md):  
  
 [!code-cpp[NVC_MFCOClient#5](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)

