---
title: Notifiche inviate mediante controlli Animation
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [MFC], animation controls
- CAnimateCtrl class [MFC], notifications
- controls [MFC], animation
- animation controls [MFC], notifications
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
ms.openlocfilehash: 8c437e6950435b49c280c4f1bb9225002545d6f2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50449296"
---
# <a name="notifications-sent-by-animation-controls"></a>Notifiche inviate mediante controlli Animation

Un controllo animation ([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)) invia due diversi tipi di messaggi di notifica. Le notifiche vengono inviate sotto forma di [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggi.

Il [messaggio ACN_START](/windows/desktop/Controls/acn-start) messaggio viene inviato quando il controllo animazione è stata avviata la riproduzione di una clip. Il [messaggio ACN_STOP](/windows/desktop/Controls/acn-stop) messaggio viene inviato quando il controllo animazione completato o interrotto un filmato.

## <a name="see-also"></a>Vedere anche

[Uso di CAnimateCtrl](../mfc/using-canimatectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

