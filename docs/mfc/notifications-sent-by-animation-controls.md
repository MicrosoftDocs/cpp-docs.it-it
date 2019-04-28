---
title: Notifiche inviate mediante controlli Animation
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [MFC], animation controls
- CAnimateCtrl class [MFC], notifications
- controls [MFC], animation
- animation controls [MFC], notifications
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
ms.openlocfilehash: 2a736e4315091b1b26daceb4fe0ce9672ab33ff6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62238309"
---
# <a name="notifications-sent-by-animation-controls"></a>Notifiche inviate mediante controlli Animation

Un controllo animation ([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)) invia due diversi tipi di messaggi di notifica. Le notifiche vengono inviate sotto forma di [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggi.

Il [messaggio ACN_START](/windows/desktop/Controls/acn-start) messaggio viene inviato quando il controllo animazione è stata avviata la riproduzione di una clip. Il [messaggio ACN_STOP](/windows/desktop/Controls/acn-stop) messaggio viene inviato quando il controllo animazione completato o interrotto un filmato.

## <a name="see-also"></a>Vedere anche

[Uso di CAnimateCtrl](../mfc/using-canimatectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
