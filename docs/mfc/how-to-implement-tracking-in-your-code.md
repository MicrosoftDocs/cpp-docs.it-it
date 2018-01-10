---
title: 'Procedura: implementare il rilevamento nel codice | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: CRectTracker class [MFC], implementing trackers
ms.assetid: baaeca2c-5114-485f-bf58-8807db1bc973
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2ad49c70113780e0c0570e88efab06efc347e83d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-implement-tracking-in-your-code"></a>Procedura: implementare il rilevamento nel codice
Per tenere traccia di un elemento OLE, è necessario gestire determinati eventi correlati all'elemento, ad esempio facendo clic sull'elemento o l'aggiornamento della vista del documento. In tutti i casi, è sufficiente dichiarare una variabile temporanea [CRectTracker](../mfc/reference/crecttracker-class.md) dell'oggetto e modificare l'elemento tramite questo oggetto.  
  
 Quando un utente seleziona un elemento o inserisce un oggetto con un comando di menu, è necessario inizializzare il componente di individuazione con gli stili appropriati per rappresentare lo stato dell'elemento OLE. Nella tabella seguente vengono descritte le convenzioni utilizzate dall'esempio OCLIENT. Per ulteriori informazioni su questi stili, vedere `CRectTracker`.  
  
### <a name="container-styles-and-states-of-the-ole-item"></a>Stili di contenitore e gli Stati dell'elemento OLE  
  
|Stile visualizzato|Stato dell'elemento OLE|  
|---------------------|-----------------------|  
|Linea punteggiata|Elemento collegato|  
|Bordo a tinta unita|Elemento è incorporato nel documento|  
|Quadratini di ridimensionamento|Elemento attualmente selezionato.|  
|Bordo tratteggiato|Elemento è attualmente attiva|  
|Elemento sovrapposizioni motivo di tratteggio|Il server dell'elemento è aperto|  
  
 È possibile gestire l'inizializzazione con facilità utilizzando una procedura che controlla lo stato dell'elemento OLE e imposta gli stili appropriati. Il **SetupTracker** funzione, vedere l'esempio OCLIENT viene illustrata l'inizializzazione di individuazione. I parametri per questa funzione sono l'indirizzo dello strumento di rilevamento, *pTracker*; un puntatore all'elemento client correlato all'individuazione, `pItem`; e un puntatore a un rettangolo, *pTrueRect*. Per un esempio più completo di questa funzione, vedere l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).  
  
 Il **SetupTracker** esempio di codice presenta una singola funzione, le righe della funzione si alternano alla descrizione delle funzionalità della funzione:  
  
 [!code-cpp[NVC_MFCOClient#1](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_1.cpp)]  
  
 L'individuazione viene inizializzata impostando le dimensioni minime e cancellare lo stile dello strumento di rilevamento.  
  
 [!code-cpp[NVC_MFCOClient#2](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_2.cpp)]  
  
 Le righe seguenti verificare se l'elemento attualmente selezionato e se l'elemento è collegato al documento o incorporato. Si trova all'interno del bordo di ridimensionamento viene aggiunti allo stile, che indica che l'elemento attualmente selezionato. Se l'elemento è collegato al documento, viene utilizzato lo stile di linea punteggiata. Se l'elemento è incorporato, viene utilizzato un bordo a tinta unita.  
  
 [!code-cpp[NVC_MFCOClient#3](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_3.cpp)]  
  
 Aprire l'elemento con un motivo tratteggiato se l'elemento è attualmente di sovrapposizioni di codice seguente.  
  
 [!code-cpp[NVC_MFCOClient#4](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_4.cpp)]  
  
 È quindi possibile chiamare questa funzione ogni volta che la registrazione deve essere visualizzata. Ad esempio, chiamare questa funzione di `OnDraw` funzione della classe di visualizzazione. Aspetto del tracker verrà aggiornata ogni volta che viene aggiornata la visualizzazione. Per un esempio completo, vedere il **CMainView:: OnDraw** funzione dell'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).  
  
 Nell'applicazione, gli eventi che richiedono il codice di registrazione, ad esempio il rilevamento di ridimensionamento, spostamento o di passaggi, si verificherà. Queste azioni è in genere indicano che un tentativo di catturare o spostare l'elemento. In questi casi, è necessario decidere cosa è stata afferrata: un quadratino di ridimensionamento o di una parte del bordo tra quadratini di ridimensionamento. Il `OnLButtonDown` gestore di messaggi è un ottimo strumento per verificare la posizione del mouse in relazione all'elemento. Effettuare una chiamata a `CRectTracker::HitTest`. Se il test restituisce un valore diverso da **hitOutside**, l'elemento viene ridimensionato o spostato. Pertanto, è necessario effettuare una chiamata al `Track` funzione membro. Vedere il **CMainView:: OnLButtonDown** funzione si trova nell'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) per un esempio completo.  
  
 La `CRectTracker` classe fornisce diverse forme diverse di cursore utilizzate per indicare se un tipo di spostamento, ridimensionamento o trascinamento operazione viene eseguita. Per gestire questo evento, verificare se l'elemento attualmente sotto il mouse è selezionato. Questo caso, effettuare una chiamata a `CRectTracker::SetCursor`, oppure chiamare il gestore predefinito. L'esempio seguente è tratto dall'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md):  
  
 [!code-cpp[NVC_MFCOClient#5](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)

