---
description: 'Altre informazioni su: elaborazione Header-Control notifiche'
title: Elaborazione delle notifiche Header-Control
ms.date: 11/04/2016
helpviewer_keywords:
- CHeaderCtrl class [MFC], processing notifications
- controls [MFC], header
- notifications [MFC], processing for CHeaderCtrl
- header controls [MFC], processing notifications
- header control notifications
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
ms.openlocfilehash: ac1cdbf5efc3e82cdf417a38072cf344ca2ee1a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154851"
---
# <a name="processing-header-control-notifications"></a>Elaborazione delle notifiche Header-Control

Nella visualizzazione o nella classe della finestra di dialogo, utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per creare una funzione di gestione [OnChildNotify](reference/cwnd-class.md#onchildnotify) con un'istruzione switch per qualsiasi messaggio di notifica di controllo intestazione ([CHeaderCtrl](reference/cheaderctrl-class.md)) che si desidera gestire (vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md)). Le notifiche vengono inviate alla finestra padre quando l'utente fa clic o fa doppio clic su un elemento di intestazione, trascina un divisore tra gli elementi e così via.

I messaggi di notifica associati a un controllo intestazione sono elencati in [riferimento al controllo intestazione](/windows/win32/controls/header-control-reference) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controlli](controls-mfc.md)
