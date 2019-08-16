---
title: Notifiche inviate mediante controlli Animation
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [MFC], animation controls
- CAnimateCtrl class [MFC], notifications
- controls [MFC], animation
- animation controls [MFC], notifications
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
ms.openlocfilehash: 68ede3bc55669a29eef192d38b29b8c1ab433e4b
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508022"
---
# <a name="notifications-sent-by-animation-controls"></a>Notifiche inviate mediante controlli Animation

Un controllo di animazione ([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)) invia due tipi diversi di messaggi di notifica. Le notifiche vengono inviate sotto forma di messaggi [WM_COMMAND](/windows/win32/menurc/wm-command) .

Il messaggio [ACN_START](/windows/win32/Controls/acn-start) viene inviato quando il controllo animazione inizia a riprodurre un clip. Il messaggio [ACN_STOP](/windows/win32/Controls/acn-stop) viene inviato quando il controllo dell'animazione ha terminato o interrotto la riproduzione di un clip.

## <a name="see-also"></a>Vedere anche

[Uso di CAnimateCtrl](../mfc/using-canimatectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
