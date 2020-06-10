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
ms.openlocfilehash: c313382b8be7538ba5bb465c6ba383955e414662
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619789"
---
# <a name="processing-header-control-notifications"></a>Elaborazione delle notifiche Header-Control

Nella visualizzazione o nella classe della finestra di dialogo, utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per creare una funzione di gestione [OnChildNotify](reference/cwnd-class.md#onchildnotify) con un'istruzione switch per qualsiasi messaggio di notifica di controllo intestazione ([CHeaderCtrl](reference/cheaderctrl-class.md)) che si desidera gestire (vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md)). Le notifiche vengono inviate alla finestra padre quando l'utente fa clic o fa doppio clic su un elemento di intestazione, trascina un divisore tra gli elementi e così via.

I messaggi di notifica associati a un controllo intestazione sono elencati in [riferimento al controllo intestazione](/windows/win32/controls/header-control-reference) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controlli](controls-mfc.md)
