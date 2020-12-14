---
description: 'Altre informazioni su: contesti di dispositivo'
title: Contesti di dispositivo
ms.date: 11/04/2016
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
ms.openlocfilehash: 725387ad3aa3f099c72c82aecd14d89bad7168bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261593"
---
# <a name="device-contexts"></a>Contesti di dispositivo

Un contesto di dispositivo è una struttura di dati di Windows che contiene informazioni sugli attributi di disegno di un dispositivo, ad esempio uno schermo o una stampante. Tutte le chiamate di disegno vengono eseguite tramite un oggetto del contesto di dispositivo che incapsula le API di Windows per il disegno di linee, forme e testo. I contesti di dispositivo consentono il disegno indipendente dal dispositivo in Windows. I contesti di dispositivo possono essere usati per creare sullo schermo, sulla stampante o su un metafile.

Gli oggetti [CPaintDC](reference/cpaintdc-class.md) incapsulano l'idioma comune di Windows, chiamando la `BeginPaint` funzione, quindi disegnando nel contesto di dispositivo, quindi chiamando la `EndPaint` funzione. Il `CPaintDC` costruttore chiama `BeginPaint` per l'utente e il distruttore chiama `EndPaint` . Il processo semplificato consiste nel creare l'oggetto [CDC](reference/cdc-class.md) , definire e quindi eliminare definitivamente l' `CDC` oggetto. Nel Framework, gran parte di questo processo è automatizzato. In particolare, alla `OnDraw` funzione viene passato un oggetto `CPaintDC` già preparato (via `OnPrepareDC` ) ed è sufficiente attingervi. Viene eliminato dal Framework e il contesto di dispositivo sottostante viene rilasciato a Windows al ritorno dalla chiamata alla `OnDraw` funzione.

Gli oggetti [CClientDC](reference/cclientdc-class.md) incapsulano l'utilizzo di un contesto di dispositivo che rappresenta solo l'area client di una finestra. Il `CClientDC` costruttore chiama la `GetDC` funzione e il distruttore chiama la `ReleaseDC` funzione. Gli oggetti [CWindowDC](reference/cwindowdc-class.md) incapsulano un contesto di dispositivo che rappresenta l'intera finestra, incluso il relativo frame.

Gli oggetti [CMetaFileDC](reference/cmetafiledc-class.md) incapsulano il disegno in un metafile di Windows. Diversamente dall'oggetto `CPaintDC` passato a `OnDraw` , è necessario in questo caso chiamare [OnPrepareDC](reference/cview-class.md#onpreparedc) manualmente.

## <a name="mouse-drawing"></a>Disegno del mouse

La maggior parte del disegno in un programma Framework, e pertanto la maggior parte del lavoro del contesto del dispositivo, viene eseguita nella `OnDraw` funzione membro della vista. Tuttavia, è comunque possibile usare gli oggetti del contesto del dispositivo per altri scopi. Per fornire, ad esempio, il feedback di rilevamento per il movimento del mouse in una visualizzazione, è necessario eseguire la traccia direttamente nella visualizzazione senza attendere la `OnDraw` chiamata di.

In tal caso, è possibile usare un oggetto del contesto di dispositivo [CClientDC](reference/cclientdc-class.md) per attingere direttamente alla visualizzazione.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Contesti di dispositivo (definizione)](/windows/win32/gdi/device-contexts)

- [Disegno in una visualizzazione](drawing-in-a-view.md)

- [Interpretazione dell'input utente tramite una visualizzazione](interpreting-user-input-through-a-view.md)

- [Linee e curve](/windows/win32/gdi/lines-and-curves)

- [Forme piene](/windows/win32/gdi/filled-shapes)

- [Tipi di carattere e testo](/windows/win32/gdi/fonts-and-text)

- [Colori](/windows/win32/gdi/colors)

- [Spazi di coordinate e trasformazioni](/windows/win32/gdi/coordinate-spaces-and-transformations)

## <a name="see-also"></a>Vedi anche

[Oggetti finestra](window-objects.md)
