---
title: Utilizzo di CAnimateCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- animation controls [MFC], CAnimateCtrl class
- controls [MFC], animation
- CAnimateCtrl class [MFC], about CAnimateCtrl class [MFC]
ms.assetid: 696c0805-bef0-4e2e-a9e7-b37b9215b7f0
ms.openlocfilehash: 79c1a0111317514ef6fd68acd0c6a2ebdccc3ba4
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447099"
---
# <a name="using-canimatectrl"></a>Utilizzo di CAnimateCtrl

Un controllo di animazione, rappresentato dalla classe [CAnimateCtrl](../mfc/reference/canimatectrl-class.md), è una finestra in cui viene visualizzata una clip in formato audio video interleaved (AVI), il formato video/audio standard di Windows. Un clip AVI è costituito da una serie di frame bitmap, ad esempio un film.

Poiché il thread continua l'esecuzione durante la visualizzazione del clip AVI, un uso comune per un controllo di animazione consiste nell'indicare l'attività di sistema durante un'operazione di lunga durata. Ad esempio, nella finestra di dialogo trova di Windows viene visualizzata una lente di ingrandimento quando il sistema cerca un file.

I controlli di animazione possono riprodurre solo clip AVI semplici e non supportano il suono. Per un elenco completo delle limitazioni, vedere [CAnimateCtrl](../mfc/reference/canimatectrl-class.md). Poiché le funzionalità di un controllo di animazione sono fortemente limitate e soggette a modifiche, è consigliabile usare un'alternativa, ad esempio il controllo MCIWnd, se è necessario un controllo per fornire funzionalità di riproduzione e/o registrazione multimediali. Per ulteriori informazioni sul controllo MCIWnd, vedere la documentazione multimediale.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Uso di un controllo Animation](../mfc/using-an-animation-control.md)

- [Notifiche inviate mediante controlli Animation](../mfc/notifications-sent-by-animation-controls.md)

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)
