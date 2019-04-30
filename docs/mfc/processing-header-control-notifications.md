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
ms.openlocfilehash: 3c5d147741123f97a53b18a854db9204738d0a2f
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64339611"
---
# <a name="processing-header-control-notifications"></a>Elaborazione delle notifiche Header-Control

Nella classe view o finestra di dialogo, utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione di gestione di un'istruzione switch per qualsiasi controllo header ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) messaggi di notifica da gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)). Le notifiche vengono inviate alla finestra padre quando l'utente fa clic o si fa doppio clic su un elemento di intestazione, trascina un divisore tra gli elementi e così via.

I messaggi di notifica associati a un controllo di intestazione sono racchiusi [riferimento al controllo intestazione](/windows/desktop/controls/header-control-reference) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
