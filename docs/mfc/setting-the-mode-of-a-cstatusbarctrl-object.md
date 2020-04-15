---
title: Impostazione della modalità di un oggetto CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- simple mode and status bar controls
- IsSimple method, using
- SetSimple method [MFC]
- status bar controls [MFC], simple and nonsimple modes
- non-simple mode and status bar controls
- CStatusBarCtrl class [MFC], simple and nonsimple modes
ms.assetid: ca6076e5-1501-4e33-8d35-9308941e46c0
ms.openlocfilehash: e09a7bd274c44df2da48bbc007a95802fadd8cf0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365410"
---
# <a name="setting-the-mode-of-a-cstatusbarctrl-object"></a>Impostazione della modalità di un oggetto CStatusBarCtrl

Ci sono due `CStatusBarCtrl` modalità per un oggetto: semplice e non semplice. Nella maggior parte dei casi, il controllo barra di stato avrà una o più parti, insieme al testo e forse un'icona o icone. Questa è chiamata la modalità non semplice. Per ulteriori informazioni su questa modalità, vedere [Inizializzazione delle parti di un oggetto CStatusBarCtrl](../mfc/initializing-the-parts-of-a-cstatusbarctrl-object.md).

Tuttavia, in alcuni casi è sufficiente visualizzare una sola riga di testo. In questo caso, la modalità semplice è sufficiente per le vostre esigenze. Per modificare la `CStatusBarCtrl` modalità dell'oggetto in semplice, effettuare una chiamata alla funzione membro [SetSimple.](../mfc/reference/cstatusbarctrl-class.md#setsimple) Una volta che il controllo barra di stato `SetText` è in modalità semplice, impostare il testo chiamando la funzione membro, passando 255 come valore per il *nPane* parametro.

È possibile utilizzare la funzione [IsSimple](../mfc/reference/cstatusbarctrl-class.md#issimple) per determinare in quale modalità si trova l'oggetto. `CStatusBarCtrl`

> [!NOTE]
> Se l'oggetto barra di stato viene modificato da non semplice a semplice o viceversa, la finestra viene immediatamente ridisegnata e, se applicabile, tutte le parti definite vengono ripristinate automaticamente.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
