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
ms.openlocfilehash: c60d99fdebcd64ad844bc19918a30beb90b86af3
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618933"
---
# <a name="drawing-in-a-view"></a>Disegno in una visualizzazione

Quasi tutto il disegno nell'applicazione si verifica nella `OnDraw` funzione membro della vista, di cui è necessario eseguire l'override nella classe di visualizzazione. (L'eccezione è il disegno del mouse, descritto in [interpretazione dell'input utente tramite una visualizzazione](interpreting-user-input-through-a-view.md)). `OnDraw`Sostituzione:

1. Ottiene i dati chiamando le funzioni membro del documento fornite.

1. Visualizza i dati chiamando le funzioni membro di un oggetto del contesto di dispositivo a cui il Framework passa `OnDraw` .

Quando i dati di un documento cambiano in qualche modo, è necessario ricreare la vista in modo da riflettere le modifiche. Questa situazione si verifica in genere quando l'utente apporta una modifica tramite una visualizzazione del documento. In questo caso, la vista chiama la funzione membro [UpdateAllViews](reference/cdocument-class.md#updateallviews) del documento per notificare a tutte le visualizzazioni nello stesso documento di aggiornarsi. `UpdateAllViews`chiama la funzione membro [OnUpdate](reference/cview-class.md#onupdate) di ogni visualizzazione. L'implementazione predefinita di `OnUpdate` invalida l'intera area client della visualizzazione. È possibile eseguirne l'override per invalidare solo le aree dell'area client mappate alle parti modificate del documento.

La `UpdateAllViews` funzione membro della classe `CDocument` e la `OnUpdate` funzione membro della classe `CView` consentono di passare informazioni che descrivono quali parti del documento sono state modificate. Questo meccanismo "hint" consente di limitare l'area che la visualizzazione deve ricreare. `OnUpdate`accetta due argomenti "hint". Il primo, *lHint*, di tipo **lParam**, consente di passare tutti i dati desiderati, mentre il secondo, *pHint*, di tipo `CObject` *, consente di passare un puntatore a qualsiasi oggetto derivato da `CObject` .

Quando una visualizzazione non è più valida, viene inviata da Windows un messaggio **WM_PAINT** . La funzione del gestore [OnPaint](reference/cwnd-class.md#onpaint) della visualizzazione risponde al messaggio creando un oggetto del contesto di dispositivo della classe [CPaintDC](reference/cpaintdc-class.md) e chiama la funzione membro della visualizzazione `OnDraw` . Non è in genere necessario scrivere una funzione del gestore che esegue l'override `OnPaint` .

Un [contesto di dispositivo](device-contexts.md) è una struttura di dati di Windows che contiene informazioni sugli attributi di disegno di un dispositivo, ad esempio uno schermo o una stampante. Tutte le chiamate di disegno vengono eseguite tramite un oggetto del contesto di dispositivo. Per il disegno sullo schermo, `OnDraw` viene passato un `CPaintDC` oggetto. Per la creazione di una stampante, viene passato un oggetto [CDC](reference/cdc-class.md) configurato per la stampante corrente.

Il codice per il disegno nella visualizzazione recupera prima di tutto un puntatore al documento, quindi effettua chiamate di disegno tramite il contesto di dispositivo. Nell'esempio seguente `OnDraw` viene illustrato il processo:

[!code-cpp[NVC_MFCDocView#1](codesnippet/cpp/drawing-in-a-view_1.cpp)]

In questo esempio, è necessario definire la `GetData` funzione come membro della classe del documento derivato.

Nell'esempio viene stampata qualsiasi stringa ottenuta dal documento, centrata nella visualizzazione. Se la `OnDraw` chiamata è per il disegno dello schermo, l' `CDC` oggetto passato in *PDC* è un oggetto il `CPaintDC` cui costruttore ha già chiamato `BeginPaint` . Le chiamate alle funzioni di disegno vengono eseguite tramite il puntatore del contesto del dispositivo. Per informazioni sui contesti di dispositivo e sulle chiamate di disegno, vedere la classe [CDC](reference/cdc-class.md) in *riferimenti a MFC* e [utilizzo di oggetti finestra](working-with-window-objects.md).

Per ulteriori esempi di scrittura `OnDraw` , vedere gli esempi di [MFC](../overview/visual-cpp-samples.md#mfc-samples).

## <a name="see-also"></a>Vedere anche

[Utilizzo delle visualizzazioni](using-views.md)
