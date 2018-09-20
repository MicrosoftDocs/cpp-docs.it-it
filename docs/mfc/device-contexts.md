---
title: Contesti di dispositivo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OnPrepareDC method [MFC]
- windows [MFC], and device context
- drawing [MFC], device context
- CClientDC class [MFC], and GetDC method [MFC]
- drawing [MFC], in mouse and device contexts
- CDC class [MFC], objects
- device contexts [MFC]
- client areas
- CMetaFileDC class [MFC], and OnPrepareDC method [MFC]
- GDI objects [MFC], device contexts
- graphic objects [MFC], device contexts
- frame windows [MFC], device contexts
- metafiles and device contexts
- EndPaint method [MFC]
- printers [MFC], device contexts
- mouse [MFC], drawing and device contexts
- BeginPaint method, CPaintDC
- CPaintDC class [MFC], device context for painting
- windows [MFC], drawing directly into
- client areas, and device context
- device contexts [MFC], CDC class [MFC]
- user interface [MFC], device contexts
- device-independent drawing
- GetDC method and CClientDC class [MFC]
- CClientDC class [MFC], and ReleaseDC method [MFC]
- ReleaseDC method [MFC]
- device contexts [MFC], about device contexts
- drawing [MFC], directly into windows
- painting and device context
ms.assetid: d0cd51f1-f778-4c7e-bf50-d738d10433c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27203b5b93d69c29df29e64f872efb8e5f1828e1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46437645"
---
# <a name="device-contexts"></a>Contesti di dispositivo

Un contesto di dispositivo è una struttura di dati di Windows che contiene informazioni sugli attributi disegni di un dispositivo, ad esempio una visualizzazione o una stampante. Tutte le chiamate di disegnare vengono effettuate tramite un oggetto di contesto di dispositivo, che incapsula le API di Windows per disegnando linee, forme e testo. Contesti di dispositivo consentono di disegno indipendente dal dispositivo di Windows. Contesti di dispositivo possono essere utilizzati per disegnare sullo schermo, alla stampante o a un metafile.

[CPaintDC](../mfc/reference/cpaintdc-class.md) oggetti incapsulano l'idioma comune di Windows, la chiamata il `BeginPaint` funzione di disegno nel contesto di dispositivo e quindi chiamare il `EndPaint` (funzione). Il `CPaintDC` chiamate al costruttore `BeginPaint` per te e il distruttore chiama `EndPaint`. Il processo semplificato consiste nel creare il [CDC](../mfc/reference/cdc-class.md) dell'oggetto, disegnare e quindi eliminare il `CDC` oggetto. In framework, gran parte del anche questo processo è automatizzata. In particolare, il `OnDraw` funzione viene passata a un `CPaintDC` già preparata (tramite `OnPrepareDC`), e si disegna semplicemente al suo interno. Viene eliminato definitivamente dal framework e il contesto di dispositivo sottostante viene rilasciato da Windows al ritorno dalla chiamata ai `OnDraw` (funzione).

[CClientDC](../mfc/reference/cclientdc-class.md) oggetti incapsulano l'utilizzo di un contesto di dispositivo che rappresenta solo l'area client di una finestra. Il `CClientDC` chiamate al costruttore il `GetDC` funzione e il distruttore chiama il `ReleaseDC` (funzione). [CWindowDC](../mfc/reference/cwindowdc-class.md) oggetti incapsulano un contesto di dispositivo che rappresenta l'intera finestra, inclusi il relativo frame.

[CMetaFileDC](../mfc/reference/cmetafiledc-class.md) oggetti incapsulano disegno in un metafile di Windows. A differenza di `CPaintDC` passato a `OnDraw`, in questo caso, è necessario chiamare [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc) manualmente.

## <a name="mouse-drawing"></a>Disegno con il mouse

La maggior parte delle disegno in un programma con framework e pertanto la maggior parte dei lavoro contesto di dispositivo, ovvero avviene nella visualizzazione `OnDraw` funzione membro. Tuttavia, è possibile utilizzare ancora gli oggetti di contesto di dispositivo per altri scopi. Ad esempio, per fornire commenti e suggerimenti di rilevamento per il movimento del mouse in una vista, è necessario disegnare direttamente nella visualizzazione senza attendere `OnDraw` da chiamare.

In tal caso, è possibile usare una [CClientDC](../mfc/reference/cclientdc-class.md) oggetto contesto di dispositivo su cui disegnare direttamente nella visualizzazione.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Contesti di dispositivo (definizione)](https://msdn.microsoft.com/library/windows/desktop/dd183553)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

- [Interpretazione dell'input utente attraverso una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)

- [Linee e curve](https://msdn.microsoft.com/library/windows/desktop/dd145028)

- [Forme piene](https://msdn.microsoft.com/library/windows/desktop/dd162714)

- [Tipi di carattere e testo](/windows/desktop/gdi/fonts-and-text)

- [Colori](https://msdn.microsoft.com/library/windows/desktop/dd183450)

- [Spazi di coordinate e trasformazioni](https://msdn.microsoft.com/library/windows/desktop/dd183475)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)

