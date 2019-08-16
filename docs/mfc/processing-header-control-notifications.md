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
ms.openlocfilehash: f60a0c918476702881984f976b220130727cf4b0
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507950"
---
# <a name="processing-header-control-notifications"></a>Elaborazione delle notifiche Header-Control

Nella visualizzazione o nella classe della finestra di dialogo, usare il Finestra Proprietà per creare una funzione di gestione [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) con un'istruzione switch per tutti i messaggi di notifica di controllo intestazione ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) che si vuole gestire (vedere [mapping di messaggi a funzioni ](../mfc/reference/mapping-messages-to-functions.md)). Le notifiche vengono inviate alla finestra padre quando l'utente fa clic o fa doppio clic su un elemento di intestazione, trascina un divisore tra gli elementi e così via.

I messaggi di notifica associati a un controllo intestazione sono elencati in [riferimento al controllo intestazione](/windows/win32/controls/header-control-reference) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
