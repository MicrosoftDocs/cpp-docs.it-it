---
title: Disegno in una visualizzazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- drawing [MFC], in views
- views [MFC], printing
- views [MFC], updating
- printing [MFC], views
- views [MFC], rendering
- printing views [MFC]
- paint messages in view class [MFC]
- device contexts, screen drawings
ms.assetid: e3761db6-0f19-4482-a4cd-ac38ef7c4d3a
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3457597edce1b7ce36b132d1bdd16d286cb94d03
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="drawing-in-a-view"></a>Disegno in una visualizzazione
Quasi tutti disegno nell'applicazione all'interno della vista `OnDraw` funzione membro, che è necessario eseguire l'override nella classe di visualizzazione. (L'eccezione è il mouse di disegno, come descritto in [interpretazione utente Input tramite una vista](../mfc/interpreting-user-input-through-a-view.md).) Il `OnDraw` override:  
  
1.  Ottiene i dati chiamando il documento è fornire funzioni di membro.  
  
2.  Visualizza i dati chiamando le funzioni membro di un oggetto di contesto di dispositivo passato dal framework per `OnDraw`.  
  
 Quando i dati di un documento viene modificato in qualche modo, è necessario ridisegnare la visualizzazione per riflettere le modifiche. In genere, ciò si verifica quando l'utente apporta una modifica tramite una vista nel documento. In questo caso, la visualizzazione chiama il documento [UpdateAllViews](../mfc/reference/cdocument-class.md#updateallviews) funzione membro per notificare a tutte le viste nello stesso documento eseguire l'aggiornamento. `UpdateAllViews`chiama ogni visualizzazione [OnUpdate](../mfc/reference/cview-class.md#onupdate) funzione membro. L'implementazione predefinita di `OnUpdate` invalida intera area client della visualizzazione. È possibile eseguirne l'override per invalidare solo le aree dell'area client che eseguono il mapping alle parti del documento modificate.  
  
 Il `UpdateAllViews` funzione membro di classe **CDocument** e `OnUpdate` funzione membro di classe `CView` consentono di passare le informazioni che descrivono le parti del documento sono state modificate. Questo meccanismo "hint" consente di limitare l'area che è necessario ridisegnare la visualizzazione. `OnUpdate`accetta due argomenti "hint". Il primo, `lHint`, di tipo **LPARAM**, consente di passare i dati desiderati, mentre il secondo, `pHint`, di tipo `CObject`*, consente di passare un puntatore a qualsiasi oggetto derivato da `CObject`.  
  
 Quando non è più valida a una vista, Windows invia un `WM_PAINT` messaggio. La vista [OnPaint](../mfc/reference/cwnd-class.md#onpaint) funzione del gestore risponde al messaggio mediante la creazione di un oggetto di contesto di dispositivo della classe [CPaintDC](../mfc/reference/cpaintdc-class.md) e chiama la vista `OnDraw` funzione membro. Non in genere è necessario scrivere un override `OnPaint` funzione del gestore.  
  
 Oggetto [contesto di dispositivo](../mfc/device-contexts.md) è una struttura di dati di Windows che contiene informazioni sugli attributi di disegnati di un dispositivo, ad esempio una visualizzazione o una stampante. Tutte le chiamate di disegnare vengono effettuate tramite un oggetto di contesto di dispositivo. Per disegnare sullo schermo, `OnDraw` viene passato un `CPaintDC` oggetto. Per la creazione di una stampante, viene passato un [CDC](../mfc/reference/cdc-class.md) oggetto impostato per la stampante corrente.  
  
 Prima di tutto il codice per il disegno nella visualizzazione recupera un puntatore al documento, quindi effettua le chiamate di disegnare tramite il contesto di dispositivo. Il seguente semplice `OnDraw` riportato di seguito viene illustrato il processo:  
  
 [!code-cpp[NVC_MFCDocView#1](../mfc/codesnippet/cpp/drawing-in-a-view_1.cpp)]  
  
 In questo esempio, definire il `GetData` funzioni come un membro della classe derivata di documento.  
  
 L'esempio visualizza stringhe ottenute dal documento, al centro la vista. Se il `OnDraw` chiamata è per il disegno dello schermo, il `CDC` oggetto passato in `pDC` è un `CPaintDC` il cui costruttore è già stato chiamato `BeginPaint`. Le chiamate alle funzioni di disegno vengono effettuate tramite il puntatore di contesto di dispositivo. Per informazioni sui contesti di dispositivo e chiamate di disegno, vedere la classe [CDC](../mfc/reference/cdc-class.md) nel *riferimenti alla libreria MFC* e [utilizzo di oggetti finestra](../mfc/working-with-window-objects.md).  
  
 Per ulteriori esempi di scrittura `OnDraw`, vedere il [degli esempi di MFC](../visual-cpp-samples.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle visualizzazioni](../mfc/using-views.md)

