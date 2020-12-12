---
description: 'Altre informazioni su: utilizzo del controllo Toolbar'
title: Utilizzo del controllo Toolbar
ms.date: 11/04/2016
helpviewer_keywords:
- GetToolBarCtrl method [MFC]
- toolbars [MFC], accessing common control
- CToolBarCtrl class [MFC], accessing toolbar
- toolbar controls [MFC], accessing
ms.assetid: b19409d5-3831-42c7-80ae-195c49dc9085
ms.openlocfilehash: bb5b14b35deeff515468a16c82a606704300a395
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197465"
---
# <a name="working-with-the-toolbar-control"></a>Utilizzo del controllo Toolbar

Questo articolo illustra come è possibile accedere all'oggetto [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) sottostante un [CToolBar](../mfc/reference/ctoolbar-class.md) per un maggiore controllo sulle barre degli strumenti. Si tratta di un argomento avanzato.

## <a name="procedures"></a>Procedure

#### <a name="to-access-the-toolbar-common-control-underlying-your-ctoolbar-object"></a>Per accedere al controllo comune della barra degli strumenti sottostante l'oggetto CToolBar

1. Chiamare [CToolBar:: GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#gettoolbarctrl).

`GetToolBarCtrl` Restituisce un riferimento a un oggetto [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) . È possibile utilizzare il riferimento per chiamare le funzioni membro della classe del controllo Toolbar.

> [!CAUTION]
> Quando si chiamano `CToolBarCtrl` le funzioni **Get** è sicuro, prestare attenzione se si chiamano le funzioni **set** . Si tratta di un argomento avanzato. Normalmente non è necessario accedere al controllo Toolbar sottostante.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Controlli (controlli comuni di Windows)](../mfc/controls-mfc.md)

- [Nozioni fondamentali sulle barre degli strumenti](../mfc/toolbar-fundamentals.md)

- [Barre degli strumenti ancorate e mobili](../mfc/docking-and-floating-toolbars.md)

- [Ridimensionamento dinamico della barra degli strumenti](../mfc/docking-and-floating-toolbars.md)

- [Descrizioni comando delle barre degli strumenti](../mfc/toolbar-tool-tips.md)

- [Aggiornamenti della barra di stato sorvolo](../mfc/toolbar-tool-tips.md)

- [Gestione delle notifiche delle descrizioni comando](../mfc/handling-tool-tip-notifications.md)

- Classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)

- [Gestione delle notifiche di personalizzazione](../mfc/handling-customization-notifications.md)

- [Più barre degli strumenti](../mfc/toolbar-fundamentals.md)

- [Uso di barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

- [Barre di controllo](../mfc/control-bars.md)

Per informazioni generali sull'uso dei controlli comuni di Windows, vedere [controlli comuni](/windows/win32/Controls/common-controls-intro).

## <a name="see-also"></a>Vedi anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)
