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
ms.openlocfilehash: 79b499533196447898ce62ea9dc86c1674fc0302
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446403"
---
# <a name="setting-the-mode-of-a-cstatusbarctrl-object"></a>Impostazione della modalità di un oggetto CStatusBarCtrl

Esistono due modalità per un oggetto `CStatusBarCtrl`: semplice e non semplice. Nella maggior parte dei casi, il controllo barra di stato avrà una o più parti, oltre a testo ed eventualmente un'icona o icone. Questa operazione viene definita modalità non semplice. Per ulteriori informazioni su questa modalità, vedere [inizializzazione delle parti di un oggetto CStatusBarCtrl](../mfc/initializing-the-parts-of-a-cstatusbarctrl-object.md).

Tuttavia, in alcuni casi è necessario visualizzare solo una singola riga di testo. In questo caso, la modalità semplice è sufficiente per le proprie esigenze. Per modificare la modalità dell'oggetto `CStatusBarCtrl` in Simple, effettuare una chiamata alla funzione membro [sesimple](../mfc/reference/cstatusbarctrl-class.md#setsimple) . Quando il controllo barra di stato è in modalità semplice, impostare il testo chiamando la funzione membro `SetText`, passando 255 come valore per il parametro *nPane* .

È possibile utilizzare la funzione [nosimple](../mfc/reference/cstatusbarctrl-class.md#issimple) per determinare la modalità in cui si trova l'oggetto `CStatusBarCtrl`.

> [!NOTE]
>  Se l'oggetto barra di stato viene modificato da non semplice a semplice o viceversa, la finestra viene immediatamente ridisegnato e, se applicabile, le parti definite vengono ripristinate automaticamente.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
