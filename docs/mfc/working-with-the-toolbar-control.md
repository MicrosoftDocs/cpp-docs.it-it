---
title: Utilizzo del controllo Toolbar
ms.date: 11/04/2016
helpviewer_keywords:
- GetToolBarCtrl method [MFC]
- toolbars [MFC], accessing common control
- CToolBarCtrl class [MFC], accessing toolbar
- toolbar controls [MFC], accessing
ms.assetid: b19409d5-3831-42c7-80ae-195c49dc9085
ms.openlocfilehash: 371f1944fae655556bbc9f89d7ffcce7cc326e5e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365240"
---
# <a name="working-with-the-toolbar-control"></a>Utilizzo del controllo Toolbar

In questo articolo viene illustrato come è possibile accedere al [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto sottostante un [CToolBar](../mfc/reference/ctoolbar-class.md) per un maggiore controllo sulle barre degli strumenti. Questo è un argomento avanzato.

## <a name="procedures"></a>Procedure

#### <a name="to-access-the-toolbar-common-control-underlying-your-ctoolbar-object"></a>Per accedere alla barra degli strumenti controllo comune sottostante il CToolBar oggetto

1. Chiamare [CToolBar::GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#gettoolbarctrl).

`GetToolBarCtrl`restituisce un riferimento a un [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto. È possibile utilizzare il riferimento per chiamare le funzioni membro della classe del controllo barra degli strumenti.

> [!CAUTION]
> Durante `CToolBarCtrl` la chiamata **di funzioni Get** è sicuro, prestare attenzione se si chiamano le funzioni **Set.While** calling Get functions is safe, caution if you call the Set functions. Questo è un argomento avanzato. In genere non è necessario accedere al controllo della barra degli strumenti sottostante.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Controlli (controlli comuni di Windows)Controls (Windows common controls)](../mfc/controls-mfc.md)

- [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)

- [Barre degli strumenti ancorate e mobili](../mfc/docking-and-floating-toolbars.md)

- [Ridimensionamento dinamico della barra degli strumenti](../mfc/docking-and-floating-toolbars.md)

- [Descrizioni comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md)

- [Aggiornamenti della barra di stato di Flyby](../mfc/toolbar-tool-tips.md)

- [Gestione delle notifiche delle descrizioni comandi](../mfc/handling-tool-tip-notifications.md)

- Le classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)

- [Gestione delle notifiche di personalizzazione](../mfc/handling-customization-notifications.md)

- [Barre degli strumenti multiple](../mfc/toolbar-fundamentals.md)

- [Utilizzo delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

- [Barre di controllo](../mfc/control-bars.md)

Per informazioni generali sull'utilizzo dei controlli comuni di Windows, vedere [Controlli comuni](/windows/win32/Controls/common-controls-intro).

## <a name="see-also"></a>Vedere anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)
