---
title: "Procedura: implementare il rilevamento nel codice | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRectTracker (classe), implementazione di tracker"
ms.assetid: baaeca2c-5114-485f-bf58-8807db1bc973
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Procedura: implementare il rilevamento nel codice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per tenere traccia di un elemento OLE, è necessario gestire determinati eventi correlati all'elemento, come fare clic sull'elemento o aggiornare la visualizzazione del documento.  In ogni caso, è sufficiente dichiarare un oggetto temporaneo di [CRectTracker](../mfc/reference/crecttracker-class.md) e modificare l'elemento l'utilizzo di questo oggetto.  
  
 Quando un utente seleziona un elemento o incollare un oggetto tramite un comando di menu, è necessario inizializzare il tracker con gli stili appropriati per rappresentare lo stato dell'elemento OLE.  Nella tabella seguente vengono descritte le convenzioni utilizzate dall'esempio OCLIENT.  Per ulteriori informazioni su questi stili, vedere `CRectTracker`.  
  
### Stili del contenitore e stati degli elementi OLE  
  
|Stile visualizzare|Stato dell'elemento OLE|  
|------------------------|-----------------------------|  
|Bordo tratteggiato|L'elemento collegato|  
|Bordo a tinta unita|L'elemento è incorporato nel documento|  
|Quadratini di ridimensionamento|L'elemento è attualmente selezionato|  
|Bordo tratteggiate|L'elemento è attualmente attivo sul posto|  
|Covando il modello ricopre l'elemento|Il server dell'elemento viene aperto|  
  
 È possibile gestire questa inizializzazione facilmente utilizzando una routine che controlla lo stato dell'elemento OLE e impostare gli stili appropriati.  La funzione di **SetupTracker** trovata nell'esempio OCLIENT viene illustrato l'inizializzazione di tracker.  I parametri della funzione vengono l'indirizzo di tracker, *pTracker*; un puntatore all'elemento client che è correlato al tracker, `pItem`; e un puntatore a un rettangolo, *pTrueRect*.  Per un esempio più esaustivo di questa funzione, vedere l'esempio [OCLIENT](../top/visual-cpp-samples.md) oLE MFC.  
  
 L'esempio di codice **SetupTracker** presenta una singola funzione; le righe della funzione vengono sparpagliate con informazioni sulle funzionalità della funzione:  
  
 [!code-cpp[NVC_MFCOClient#1](../mfc/codesnippet/CPP/how-to-implement-tracking-in-your-code_1.cpp)]  
  
 Il tracker viene inizializzato impostandone la dimensione minima e deselezionando lo stile di tracker.  
  
 [!code-cpp[NVC_MFCOClient#2](../mfc/codesnippet/CPP/how-to-implement-tracking-in-your-code_2.cpp)]  
  
 Il seguente controllo delle righe da visualizzare se l'elemento è attualmente selezionato e se l'elemento collegato al documento o è incorporato.  I quadratini di ridimensionamento posizionati all'interno del bordo vengono aggiunti allo stile, che indica che l'elemento è attualmente selezionato.  Se l'elemento è collegato al documento, lo stile del bordo tratteggiato viene utilizzato.  Un bordo a tinta unita viene utilizzato se l'elemento è incorporato.  
  
 [!code-cpp[NVC_MFCOClient#3](../mfc/codesnippet/CPP/how-to-implement-tracking-in-your-code_3.cpp)]  
  
 Il codice seguente si sovrapponga all'elemento con un modello tratteggiate se l'elemento è attualmente aperto.  
  
 [!code-cpp[NVC_MFCOClient#4](../mfc/codesnippet/CPP/how-to-implement-tracking-in-your-code_4.cpp)]  
  
 È quindi possibile chiamare questa funzione ogni volta che il tracker deve essere visualizzato.  Ad esempio, chiamare questa funzione dalla funzione di `OnDraw` della classe di visualizzazione.  Verrà aggiornato l'aspetto di tracker ogni volta che la visualizzazione viene aggiornata.  Per un esempio completo, vedere funzione di **CMainView::OnDraw** di esempio [OCLIENT](../top/visual-cpp-samples.md) oLE MFC.  
  
 Nell'applicazione, gli eventi che richiedono il codice di tracker, come il ridimensionamento, lo spostamento, o l'occorrenza che rileva, si verificano.  Queste azioni in genere indica che si sta utilizzando div o spostare l'elemento.  In questi casi, è necessario decidere quale è stato afferrato: un quadratino di ridimensionamento o parte del bordo tra i quadratini di ridimensionamento.  Il gestore messaggi di `OnLButtonDown` è l'oggetto ideale per verificare la posizione del mouse in relazione all'elemento.  Fare una chiamata a `CRectTracker::HitTest`.  Se il test restituisce un risultato oltre a **CRectTracker::hitOutside**, l'elemento viene ridimensionato o lo spostamento.  Pertanto, è necessario effettuare una chiamata a una funzione membro di `Track`.  Vedere funzione di **CMainView::OnLButtonDown** trova nell'esempio [OCLIENT](../top/visual-cpp-samples.md) OLE MFC per un esempio completo.  
  
 La classe di `CRectTracker` fornisce varie forme del cursore utilizzate per indicare se un movimento, ridimensionamento, o l'operazione di trascinamento è in esecuzione.  Per gestire questo evento, controllare se l'elemento attualmente al di sotto del mouse è selezionato.  In questo caso, viene eseguita una chiamata a `CRectTracker::SetCursor`, oppure chiamare il gestore predefinito.  Nell'esempio ha origine nell'esempio [OCLIENT](../top/visual-cpp-samples.md) oLE MFC:  
  
 [!code-cpp[NVC_MFCOClient#5](../mfc/codesnippet/CPP/how-to-implement-tracking-in-your-code_5.cpp)]  
  
## Vedere anche  
 [Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)