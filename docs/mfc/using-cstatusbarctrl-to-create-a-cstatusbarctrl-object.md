---
description: 'Altre informazioni su: uso di CStatusBarCtrl per creare un oggetto CStatusBarCtrl'
title: Utilizzo di CStatusBarCtrl per creare un oggetto CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- status bar controls [MFC], creating
- CStatusBarCtrl class [MFC], creating
ms.assetid: 365c2b65-12de-49e6-9a2e-416c6ee10d60
ms.openlocfilehash: 0b76065ce4e90600bdec7e4f4a89ee2c5bb14085
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202379"
---
# <a name="using-cstatusbarctrl-to-create-a-cstatusbarctrl-object"></a>Utilizzo di CStatusBarCtrl per creare un oggetto CStatusBarCtrl

Di seguito è riportato un esempio di uso tipico di [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md):

### <a name="to-use-a-status-bar-control-with-parts"></a>Per utilizzare un controllo barra di stato con parti

1. Costruire l'oggetto `CStatusBarCtrl`.

1. Chiamare [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#setminheight) se si vuole impostare l'altezza minima dell'area di disegno del controllo barra di stato.

1. Chiamare [SetBkColor](../mfc/reference/cstatusbarctrl-class.md#setbkcolor) per impostare il colore di sfondo del controllo barra di stato.

1. Chiamare [Separts](../mfc/reference/cstatusbarctrl-class.md#setparts) per impostare il numero di parti in un controllo barra di stato e la coordinata del bordo destro di ogni parte.

1. Chiamare SetText per impostare il testo in una determinata parte del controllo [barra di stato](../mfc/reference/cstatusbarctrl-class.md#settext) . Il messaggio invalida la parte del controllo che è stata modificata, causando la visualizzazione del nuovo testo quando il controllo riceve il messaggio di WM_PAINT.

In alcuni casi, la barra di stato deve solo visualizzare una riga di testo. In tal caso, effettuare una chiamata a [sesimple](../mfc/reference/cstatusbarctrl-class.md#setsimple). In questo modo il controllo barra di stato viene inserito in modalità "semplice", che visualizza una sola riga di testo.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
