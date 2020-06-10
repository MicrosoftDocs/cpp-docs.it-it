---
title: Notifiche inviate mediante controlli Animation
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [MFC], animation controls
- CAnimateCtrl class [MFC], notifications
- controls [MFC], animation
- animation controls [MFC], notifications
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
ms.openlocfilehash: e9e5b94736de44d5cfeef81f5b78a759df3b8aa0
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619916"
---
# <a name="notifications-sent-by-animation-controls"></a>Notifiche inviate mediante controlli Animation

Un controllo di animazione ([CAnimateCtrl](reference/canimatectrl-class.md)) invia due tipi diversi di messaggi di notifica. Le notifiche vengono inviate sotto forma di messaggi di [WM_COMMAND](/windows/win32/menurc/wm-command) .

Il messaggio [ACN_START](/windows/win32/Controls/acn-start) viene inviato quando il controllo animazione inizia a riprodurre una clip. Il messaggio [ACN_STOP](/windows/win32/Controls/acn-stop) viene inviato quando il controllo dell'animazione ha terminato o interrotto la riproduzione di un clip.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CAnimateCtrl](using-canimatectrl.md)<br/>
[Controlli](controls-mfc.md)
