---
title: Disegno in una visualizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 866f2e2a3de6708d1be78748ee889272a05352cd
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928499"
---
# <a name="drawing-in-a-view"></a>Disegno in una visualizzazione
Quasi tutte le disegno nell'applicazione all'interno della vista `OnDraw` funzione membro, che è necessario eseguire l'override nella classe di visualizzazione. (L'eccezione è il mouse di disegno, descritto in [interpretazione utente Input tramite una vista](../mfc/interpreting-user-input-through-a-view.md).) Il `OnDraw` eseguire l'override:  
  
1.  Ottiene i dati chiamando il documento è fornire funzioni di membro.  
  
2.  Consente di visualizzare i dati chiamando le funzioni membro di un oggetto contesto di dispositivo passato dal framework per `OnDraw`.  
  
 Quando i dati del documento viene modificato in qualche modo, la vista deve essere ridisegnata per riflettere le modifiche. In genere, ciò si verifica quando l'utente apporta una modifica tramite una vista nel documento. In questo caso, la visualizzazione chiama il documento [UpdateAllViews](../mfc/reference/cdocument-class.md#updateallviews) funzione membro per notificare a tutte le viste nello stesso documento eseguire l'aggiornamento. `UpdateAllViews` ogni visualizzazione chiamate [OnUpdate](../mfc/reference/cview-class.md#onupdate) funzione membro. L'implementazione predefinita di `OnUpdate` invalida intera area client della vista. È possibile eseguirne l'override per invalidare solo tali aree dell'area client che eseguono il mapping per le parti modificate del documento.  
  
 Il `UpdateAllViews` funzione membro della classe `CDocument` e il `OnUpdate` funzione membro di classe `CView` consentono di passare le informazioni che descrivono le parti del documento sono state modificate. Questo meccanismo "hint" consente di limitare l'area che deve essere ridisegnato usando la vista. `OnUpdate` accetta due argomenti "hint". Il primo *lHint*, di tipo **LPARAM**, consente di passare i dati desiderati, mentre il secondo *pHint*, di tipo `CObject`*, consente di passare un puntatore a qualsiasi oggetto derivato da `CObject`.  
  
 Quando non è più valida a una vista, Windows invia una **WM_PAINT** messaggio. La vista [OnPaint](../mfc/reference/cwnd-class.md#onpaint) funzione del gestore risponde al messaggio mediante la creazione di un oggetto contesto di dispositivo della classe [CPaintDC](../mfc/reference/cpaintdc-class.md) e chiama la vista `OnDraw` funzione membro. Non in genere necessario scrivere un override `OnPaint` funzione del gestore.  
  
 Un [contesto di dispositivo](../mfc/device-contexts.md) è una struttura di dati di Windows che contiene informazioni sugli attributi disegno di un dispositivo, ad esempio una visualizzazione o una stampante. Tutte le chiamate di disegno vengono effettuate tramite un oggetto contesto di dispositivo. Per disegnare sullo schermo `OnDraw` viene passato un `CPaintDC` oggetto. Per la creazione di una stampante, viene passato un [CDC](../mfc/reference/cdc-class.md) oggetto impostato per la stampante corrente.  
  
 Prima di tutto il codice per il disegno nella visualizzazione recupera un puntatore al documento, quindi effettua le chiamate di disegno tramite il contesto di dispositivo. Il seguente semplice `OnDraw` esempio viene illustrato il processo:  
  
 [!code-cpp[NVC_MFCDocView#1](../mfc/codesnippet/cpp/drawing-in-a-view_1.cpp)]  
  
 In questo esempio, definire il `GetData` funzioni come un membro della classe derivata di documento.  
  
 L'esempio visualizza stringhe ottenute dal documento, al centro la vista. Se il `OnDraw` chiamata è per il disegno dello schermo, la `CDC` oggetto passato *pDC* è un `CPaintDC` il cui costruttore è già stato chiamato `BeginPaint`. Le chiamate alle funzioni di disegno vengono effettuate tramite il puntatore di contesto di dispositivo. Per informazioni sulle chiamate di disegno e contesti di dispositivo, vedere la classe [CDC](../mfc/reference/cdc-class.md) nel *riferimenti alla libreria MFC* e [utilizzo di oggetti finestra](../mfc/working-with-window-objects.md).  
  
 Per ulteriori esempi di come scrivere `OnDraw`, vedere la [esempi relativi a MFC](../visual-cpp-samples.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle visualizzazioni](../mfc/using-views.md)

