---
title: Elaborazione delle notifiche Header-Control
ms.date: 11/04/2016
helpviewer_keywords:
- CHeaderCtrl class [MFC], processing notifications
- controls [MFC], header
- notifications [MFC], processing for CHeaderCtrl
- header controls [MFC], processing notifications
- header control notifications
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
ms.openlocfilehash: 4513bafedd531c7f0bcb103728c19c0940a2efc9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50626772"
---
# <a name="processing-header-control-notifications"></a>Elaborazione delle notifiche Header-Control

Nella classe view o finestra di dialogo, utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione di gestione di un'istruzione switch per qualsiasi controllo header ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) messaggi di notifica da gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)). Le notifiche vengono inviate alla finestra padre quando l'utente fa clic o si fa doppio clic su un elemento di intestazione, trascina un divisore tra gli elementi e così via.

I messaggi di notifica associati a un controllo di intestazione sono racchiusi [riferimento al controllo intestazione](https://msdn.microsoft.com/library/windows/desktop/bb775239) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

