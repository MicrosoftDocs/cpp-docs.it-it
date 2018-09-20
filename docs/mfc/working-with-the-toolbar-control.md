---
title: Utilizzo del controllo della barra degli strumenti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- GetToolBarCtrl method [MFC]
- toolbars [MFC], accessing common control
- CToolBarCtrl class [MFC], accessing toolbar
- toolbar controls [MFC], accessing
ms.assetid: b19409d5-3831-42c7-80ae-195c49dc9085
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2acc0274b4bdd3ad1f6696ccede9865762b5efc1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431489"
---
# <a name="working-with-the-toolbar-control"></a>Utilizzo del controllo Toolbar

Questo articolo illustra come è possibile accedere la [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto sottostante una [CToolBar](../mfc/reference/ctoolbar-class.md) per un maggiore controllo sulla barra degli strumenti. Si tratta di un argomento avanzato.

## <a name="procedures"></a>Procedure

#### <a name="to-access-the-toolbar-common-control-underlying-your-ctoolbar-object"></a>Per accedere al controllo comune barra degli strumenti sottostante l'oggetto CToolBar

1. Chiamare [CToolBar:: GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#gettoolbarctrl).

`GetToolBarCtrl` Restituisce un riferimento a un [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto. È possibile utilizzare il riferimento per chiamare funzioni membro della classe del controllo della barra degli strumenti.

> [!CAUTION]
>  Durante la chiamata `CToolBarCtrl` **ottenere** funzioni siano al sicuro, prestare attenzione se si chiama il **impostare** funzioni. Si tratta di un argomento avanzato. In genere non è necessario accedere al controllo della barra degli strumenti sottostante.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Controlli (controlli comuni di Windows)](../mfc/controls-mfc.md)

- [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)

- [Ancoraggio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md)

- [Ridimensionamento in modo dinamico la barra degli strumenti](../mfc/docking-and-floating-toolbars.md)

- [Descrizioni comandi barra degli strumenti](../mfc/toolbar-tool-tips.md)

- [Aggiornamenti della barra di stato in tempo reale](../mfc/toolbar-tool-tips.md)

- [Gestione delle notifiche delle descrizioni comandi](../mfc/handling-tool-tip-notifications.md)

- Il [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) classi

- [Gestione delle notifiche di personalizzazione](../mfc/handling-customization-notifications.md)

- [Più barre degli strumenti](../mfc/toolbar-fundamentals.md)

- [Uso delle barre degli strumenti precedente](../mfc/using-your-old-toolbars.md)

- [Barre di controllo](../mfc/control-bars.md)

Per informazioni generali sull'utilizzo dei controlli comuni di Windows, vedere [Common Controls](/windows/desktop/Controls/common-controls-intro).

## <a name="see-also"></a>Vedere anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)

