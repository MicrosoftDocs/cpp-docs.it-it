---
title: Disegno in una visualizzazione
ms.date: 11/04/2016
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
ms.openlocfilehash: bc461347b56379976cdf62014507e3a15529f081
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58772553"
---
# <a name="drawing-in-a-view"></a>Disegno in una visualizzazione

Quasi tutti disegno nell'applicazione è inclusa la visualizzazione `OnDraw` funzione membro, che è necessario eseguire l'override nella classe di visualizzazione. (L'eccezione è il mouse di disegno, illustrati nella [interpretazione utente Input tramite una vista](../mfc/interpreting-user-input-through-a-view.md).) Il `OnDraw` eseguire l'override:

1. Ottiene i dati chiamando il documento è fornire funzioni di membro.

1. Consente di visualizzare i dati chiamando funzioni membro di un oggetto di contesto di dispositivo che il framework passa a `OnDraw`.

Quando i dati del documento viene modificato in qualche modo, la visualizzazione deve essere ridisegnata per riflettere le modifiche. In genere, ciò si verifica quando l'utente apporta una modifica tramite una vista nel documento. In questo caso, la visualizzazione chiamate del documento [UpdateAllViews](../mfc/reference/cdocument-class.md#updateallviews) funzione membro per notificare a tutte le viste nello stesso documento da aggiornare autonomamente. `UpdateAllViews` ogni visualizzazione chiamate [OnUpdate](../mfc/reference/cview-class.md#onupdate) funzione membro. L'implementazione predefinita di `OnUpdate` invalida intera area client della visualizzazione. È possibile eseguirne l'override per invalidare solo le aree dell'area client che eseguono il mapping per le parti modificate del documento.

Il `UpdateAllViews` la funzione membro della classe `CDocument` e il `OnUpdate` funzione membro di classe `CView` consentono di passare le informazioni che descrivono le parti del documento sono state modificate. Questo meccanismo "hint" consente di limitare l'area che deve essere ridisegnato usando la vista. `OnUpdate` accetta due argomenti "hint". Il primo *lHint*, di tipo **LPARAM**, consente di passare i dati desiderati, mentre il secondo *pHint*, di tipo `CObject`*, consente di passare un puntatore a qualsiasi oggetto derivato da `CObject`.

Quando non è più valida a una vista, Windows invia un **WM_PAINT** messaggio. La vista [OnPaint](../mfc/reference/cwnd-class.md#onpaint) funzione di gestione risponde al messaggio mediante la creazione di un oggetto di contesto di dispositivo della classe [CPaintDC](../mfc/reference/cpaintdc-class.md) e la visualizzazione chiamate `OnDraw` funzione membro. È non in genere necessario scrivere un override `OnPaint` funzione del gestore.

Oggetto [contesto di dispositivo](../mfc/device-contexts.md) è una struttura di dati di Windows che contiene informazioni sugli attributi disegni di un dispositivo, ad esempio una visualizzazione o una stampante. Tutte le chiamate di disegnare vengono effettuate tramite un oggetto di contesto di dispositivo. Per il disegno nella schermata `OnDraw` viene passato un `CPaintDC` oggetto. Per il disegno su una stampante, viene passata una [CDC](../mfc/reference/cdc-class.md) oggetto impostato per la stampante corrente.

Il codice di disegno nella visualizzazione prima di tutto recupera un puntatore al documento, quindi effettua le chiamate di disegnare tramite il contesto di dispositivo. Il seguente semplice `OnDraw` riportato di seguito viene illustrato il processo:

[!code-cpp[NVC_MFCDocView#1](../mfc/codesnippet/cpp/drawing-in-a-view_1.cpp)]

In questo esempio, è possibile definire il `GetData` funzioni come un membro della classe derivata di documento.

L'esempio visualizza stringhe ottenute dal documento, centrato nella visualizzazione. Se il `OnDraw` chiamata è per il disegno dello schermo, il `CDC` oggetto passato in *pDC* è un `CPaintDC` il cui costruttore ha già chiamato `BeginPaint`. Chiamate alle funzioni di disegno vengono effettuate tramite il puntatore di contesto di dispositivo. Per informazioni sulle chiamate di disegno e contesti di dispositivo, vedere la classe [CDC](../mfc/reference/cdc-class.md) nel *riferimento MFC* e [uso di oggetti finestra](../mfc/working-with-window-objects.md).

Per altri esempi di come scrivere `OnDraw`, vedere la [esempi di MFC](../overview/visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Uso delle visualizzazioni](../mfc/using-views.md)
