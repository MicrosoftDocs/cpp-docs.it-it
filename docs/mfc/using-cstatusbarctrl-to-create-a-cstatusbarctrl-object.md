---
title: Utilizzo di CStatusBarCtrl per creare un oggetto CStatusBarCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CStatusBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- status bar controls [MFC], creating
- CStatusBarCtrl class [MFC], creating
ms.assetid: 365c2b65-12de-49e6-9a2e-416c6ee10d60
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3c68603eff0393d76af4e0617548e5bf1dd4aa63
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46413691"
---
# <a name="using-cstatusbarctrl-to-create-a-cstatusbarctrl-object"></a>Utilizzo di CStatusBarCtrl per creare un oggetto CStatusBarCtrl

Ecco un esempio di un utilizzo tipico dei [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md):

### <a name="to-use-a-status-bar-control-with-parts"></a>Usare un controllo barra di stato con parti

1. Costruire l'oggetto `CStatusBarCtrl`.

1. Chiamare [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#setminheight) se si desidera impostare l'altezza minima del controllo indicatore di stato area di disegno del.

1. Chiamare [SetBkColor](../mfc/reference/cstatusbarctrl-class.md#setbkcolor) per impostare il colore di sfondo del controllo indicatore di stato.

1. Chiamare [SetParts](../mfc/reference/cstatusbarctrl-class.md#setparts) per impostare il numero delle parti in uno stato della barra di controllo e la coordinata del bordo destro di ogni parte.

1. Chiamare [SetText](../mfc/reference/cstatusbarctrl-class.md#settext) per impostare il testo in una determinata parte del controllo indicatore di stato. Il messaggio invalida la parte del controllo che è stato modificato, in modo che venga visualizzato il nuovo testo quando il controllo riceverà il messaggio WM_PAINT.

In alcuni casi, la barra di stato deve essere visualizzata solo una riga di testo. In questo caso, effettuare una chiamata a [SetSimple](../mfc/reference/cstatusbarctrl-class.md#setsimple). Si inserisce il controllo barra di stato in modalità "semplice", che consente di visualizzare una singola riga di testo.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

