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
ms.openlocfilehash: 227c4614bad42706893301c69882c3f40af12e2f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214344"
---
# <a name="drawing-in-a-view"></a>Disegno in una visualizzazione

Quasi tutti i disegni nell'applicazione si verificano nella funzione membro `OnDraw` della vista, che è necessario eseguire l'override nella classe di visualizzazione. (L'eccezione è il disegno del mouse, descritto in [interpretazione dell'input utente tramite una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)). Sostituzione del `OnDraw`:

1. Ottiene i dati chiamando le funzioni membro del documento fornite.

1. Visualizza i dati chiamando le funzioni membro di un oggetto del contesto di dispositivo che il Framework passa a `OnDraw`.

Quando i dati di un documento cambiano in qualche modo, è necessario ricreare la vista in modo da riflettere le modifiche. Questa situazione si verifica in genere quando l'utente apporta una modifica tramite una visualizzazione del documento. In questo caso, la vista chiama la funzione membro [UpdateAllViews](../mfc/reference/cdocument-class.md#updateallviews) del documento per notificare a tutte le visualizzazioni nello stesso documento di aggiornarsi. `UpdateAllViews` chiama la funzione membro [OnUpdate](../mfc/reference/cview-class.md#onupdate) di ogni visualizzazione. L'implementazione predefinita di `OnUpdate` invalida l'intera area client della visualizzazione. È possibile eseguirne l'override per invalidare solo le aree dell'area client mappate alle parti modificate del documento.

La funzione membro `UpdateAllViews` della classe `CDocument` e la funzione membro `OnUpdate` della classe `CView` consentono di passare informazioni che descrivono quali parti del documento sono state modificate. Questo meccanismo "hint" consente di limitare l'area che la visualizzazione deve ricreare. `OnUpdate` accetta due argomenti "hint". Il primo, *lHint*, di tipo **lParam**, consente di passare tutti i dati desiderati, mentre il secondo, *pHint*, di tipo `CObject`*, consente di passare un puntatore a qualsiasi oggetto derivato da `CObject`.

Quando una visualizzazione non è più valida, viene inviata da Windows un messaggio **WM_PAINT** . La funzione del gestore [OnPaint](../mfc/reference/cwnd-class.md#onpaint) della visualizzazione risponde al messaggio creando un oggetto del contesto di dispositivo della classe [CPaintDC](../mfc/reference/cpaintdc-class.md) e chiama la funzione membro `OnDraw` della visualizzazione. Non è in genere necessario scrivere una funzione di gestione `OnPaint` di override.

Un [contesto di dispositivo](../mfc/device-contexts.md) è una struttura di dati di Windows che contiene informazioni sugli attributi di disegno di un dispositivo, ad esempio uno schermo o una stampante. Tutte le chiamate di disegno vengono eseguite tramite un oggetto del contesto di dispositivo. Per il disegno sullo schermo, a `OnDraw` viene passato un oggetto `CPaintDC`. Per la creazione di una stampante, viene passato un oggetto [CDC](../mfc/reference/cdc-class.md) configurato per la stampante corrente.

Il codice per il disegno nella visualizzazione recupera prima di tutto un puntatore al documento, quindi effettua chiamate di disegno tramite il contesto di dispositivo. Nell'esempio di `OnDraw` semplice riportato di seguito viene illustrato il processo:

[!code-cpp[NVC_MFCDocView#1](../mfc/codesnippet/cpp/drawing-in-a-view_1.cpp)]

In questo esempio, è necessario definire la funzione `GetData` come membro della classe del documento derivato.

Nell'esempio viene stampata qualsiasi stringa ottenuta dal documento, centrata nella visualizzazione. Se la chiamata `OnDraw` è per il disegno dello schermo, l'oggetto `CDC` passato in *PDC* è un `CPaintDC` il cui costruttore ha già chiamato `BeginPaint`. Le chiamate alle funzioni di disegno vengono eseguite tramite il puntatore del contesto del dispositivo. Per informazioni sui contesti di dispositivo e sulle chiamate di disegno, vedere la classe [CDC](../mfc/reference/cdc-class.md) in *riferimenti a MFC* e [utilizzo di oggetti finestra](../mfc/working-with-window-objects.md).

Per altri esempi su come scrivere `OnDraw`, vedere gli [esempi di MFC](../overview/visual-cpp-samples.md#mfc-samples).

## <a name="see-also"></a>Vedere anche

[Uso delle visualizzazioni](../mfc/using-views.md)
