---
title: Oggetti grafici
ms.date: 11/04/2016
f1_keywords:
- HRGN
- HFONT
- HBITMAP
helpviewer_keywords:
- CRgn class [MFC], HRGN handle type
- HPEN [MFC]
- objects [MFC], graphic
- palettes [MFC], creating in device context
- pens [MFC], creating in device context
- bitmaps [MFC], creating in device contexts
- palette objects [MFC]
- memory [MFC], display contexts
- MFC, graphic objects
- regions [MFC], creating in device context
- CPen class [MFC], HPEN handle type
- GDI objects [MFC]
- HRGN [MFC]
- graphic objects [MFC]
- GDI objects [MFC], graphic-object classes
- CFont class [MFC], HFONT handle type
- HFONT and class CFont [MFC]
- HBITMAP and class CBitmap [MFC]
- fonts [MFC], creating in device context
- images [MFC], graphic objects [MFC]
- CBitmap class [MFC], HBITMAP handle type
- HPALETTE and class CPalette [MFC]
- CBrush class [MFC], HBRUSH handle type
- objects [MFC], graphic objects
- drawing [MFC], in device contexts
- device contexts [MFC], graphic objects [MFC]
- brushes [MFC], creating in device context
- region objects [MFC]
- pen objects [MFC]
- GDI [MFC], graphic-object classes
- graphic objects [MFC], creating in device context
- HBRUSH and class CBrush [MFC]
- painting and device context [MFC]
- CPalette class [MFC], HPALETTE handle type
ms.assetid: 41963b25-34b7-4343-8446-34ba516b83ca
ms.openlocfilehash: a7d038a971fd1d280c100024f8af9a1ec74d8627
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618644"
---
# <a name="graphic-objects"></a>Oggetti grafici

Windows offre un'ampia gamma di strumenti di disegno da usare in contesti di dispositivo, tra cui penne per tracciare linee, pennelli per riempire le aree interne e tipi di carattere per aggiungere testo. MFC offre classi di oggetti grafici equivalenti agli strumenti di disegno di Windows. La tabella seguente mostra le classi disponibili e i tipi di handle Graphics Device Interface (GDI) di Windows equivalenti.

> [!NOTE]
> Per ulteriori informazioni, vedere la [documentazione di GDI+ SDK](/windows/win32/gdiplus/-gdiplus-gdi-start).

Questo articolo descrive l'uso di queste classi di oggetti grafici:

### <a name="classes-for-windows-gdi-objects"></a>Classi per oggetti GDI di Windows

|Classe|Tipo di handle di Windows|
|-----------|-------------------------|
|[CPen](reference/cpen-class.md)|`HPEN`|
|[CBrush](reference/cbrush-class.md)|`HBRUSH`|
|[CFont](reference/cfont-class.md)|**HFONT**|
|[CBitmap](reference/cbitmap-class.md)|`HBITMAP`|
|[CPalette](reference/cpalette-class.md)|`HPALETTE`|
|[CRgn](reference/crgn-class.md)|**HRGN**|

> [!NOTE]
> La classe [CImage](../atl-mfc-shared/reference/cimage-class.md) fornisce un supporto ottimizzato per le bitmap.

Ogni classe di oggetti grafici nella libreria di classi ha un costruttore che permette di creare oggetti grafici di tale classe, che è quindi necessario inizializzare con la funzione di creazione appropriata, ad esempio `CreatePen`.

Ogni classe di oggetti grafici nella libreria di classi include un operatore di cast che eseguirà il cast di un oggetto MFC all'handle di Windows associato. L'handle risultante è valido fino a quando l'oggetto associato non lo scollega. Utilizzare la `Detach` funzione membro dell'oggetto per scollegare l'handle.

Il codice seguente esegue il cast di un oggetto `CPen` a un handle di Windows:

[!code-cpp[NVC_MFCDocViewSDI#5](codesnippet/cpp/graphic-objects_1.cpp)]

#### <a name="to-create-a-graphic-object-in-a-device-context"></a>Per creare un oggetto grafico in un contesto di dispositivo

1. Definire un oggetto grafico sullo stack frame. Inizializzare l'oggetto con la funzione di creazione specifica del tipo, ad esempio `CreatePen`. In alternativa, inizializzare l'oggetto nel costruttore. Vedere la discussione relativa alla [creazione in una fase e in due fasi](one-stage-and-two-stage-construction-of-objects.md), che fornisce un esempio di codice.

1. [Selezionare l'oggetto nel contesto di dispositivo corrente](selecting-a-graphic-object-into-a-device-context.md), salvando l'oggetto grafico precedente selezionato in precedenza.

1. Al termine delle operazioni sull'oggetto grafico corrente, selezionare di nuovo il vecchio oggetto grafico nel contesto di dispositivo per ripristinarne lo stato.

1. Consentire l'eliminazione automatica dell'oggetto grafico allocato al frame quando si esce dall'ambito.

> [!NOTE]
> Se si prevede di usare ripetutamente un oggetto grafico, è possibile allocarlo una volta e selezionarlo in un contesto di dispositivo ogni volta che è necessario. Assicurarsi di eliminare l'oggetto quando non è più necessario.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Costruzione di oggetti grafici in una fase e in due fasi](one-stage-and-two-stage-construction-of-objects.md)

- [Esempio di costruzione di una penna in una fase e in due fasi](one-stage-and-two-stage-construction-of-objects.md)

- [Selezione di un oggetto grafico in un contesto di dispositivo](selecting-a-graphic-object-into-a-device-context.md)

- [Contesti di dispositivo](device-contexts.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](window-objects.md)
