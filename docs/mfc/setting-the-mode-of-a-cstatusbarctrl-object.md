---
title: Impostazione della modalità di un oggetto CStatusBarCtrl
ms.date: 11/04/2016
f1_keywords:
- CStatusBarCtrl
helpviewer_keywords:
- simple mode and status bar controls
- IsSimple method, using
- SetSimple method [MFC]
- status bar controls [MFC], simple and nonsimple modes
- non-simple mode and status bar controls
- CStatusBarCtrl class [MFC], simple and nonsimple modes
ms.assetid: ca6076e5-1501-4e33-8d35-9308941e46c0
ms.openlocfilehash: 0009f73f11b1a3c57f5001269f34834c22b045c7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50655255"
---
# <a name="setting-the-mode-of-a-cstatusbarctrl-object"></a>Impostazione della modalità di un oggetto CStatusBarCtrl

Sono disponibili due modalità per un `CStatusBarCtrl` oggetto: semplice e non semplice. Nella maggior parte dei casi, il controllo barra di stato avrà una o più parti, insieme a testo e forse un'icona o icone. Si tratta della modalità non semplice. Per altre informazioni su questa modalità, vedere [inizializzazione delle parti di un oggetto CStatusBarCtrl](../mfc/initializing-the-parts-of-a-cstatusbarctrl-object.md).

Tuttavia, vi sono casi in cui è sufficiente visualizzare una singola riga di testo. In questo caso, la modalità semplice è sufficiente per le proprie esigenze. Per modificare la modalità del `CStatusBarCtrl` oggetto su simple, effettuare una chiamata per il [SetSimple](../mfc/reference/cstatusbarctrl-class.md#setsimple) funzione membro. Quando il controllo barra di stato è in modalità semplice, impostare il testo chiamando il `SetText` funzione di membro, il passaggio di 255 come valore per il *nPane* parametro.

È possibile usare la [IsSimple](../mfc/reference/cstatusbarctrl-class.md#issimple) funzione per determinare la modalità di `CStatusBarCtrl` oggetto si trova in.

> [!NOTE]
>  Se l'oggetto barra di stato viene modificato da tipo non semplice su simple, o viceversa, la finestra viene immediatamente ridisegnata e, se applicabile, vengono ripristinati automaticamente eventuali parti definite.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

