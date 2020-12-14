---
description: 'Altre informazioni su: messaggi di notifica Slider'
title: Messaggi di notifica dispositivo di scorrimento
ms.date: 11/04/2016
helpviewer_keywords:
- CSliderCtrl class [MFC], notifications
- slider controls [MFC], notification messages
- messages, notification
- notifications [MFC], CSliderCtrl
ms.assetid: b9121104-3889-4a10-92bf-f3723f1af9d0
ms.openlocfilehash: fab8d515e71fd2ca8fd390a41b6d1bf68442c24c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216886"
---
# <a name="slider-notification-messages"></a>Messaggi di notifica dispositivo di scorrimento

Un controllo dispositivo di scorrimento notifica alla finestra padre le azioni dell'utente inviando i messaggi padre WM_HSCROLL o WM_VSCROLL, a seconda dell'orientamento del controllo dispositivo di scorrimento. Per gestire questi messaggi, aggiungere i gestori per la WM_HSCROLL e WM_VSCROLL i messaggi alla finestra padre. Alle funzioni membro [OnHScroll](../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../mfc/reference/cwnd-class.md#onvscroll) verrà passato un codice di notifica, la posizione del dispositivo di scorrimento e un puntatore all'oggetto [CSliderCtrl](../mfc/reference/csliderctrl-class.md) . Si noti che il puntatore è di tipo `CScrollBar *` anche se punta a un `CSliderCtrl` oggetto. Potrebbe essere necessario typecast questo puntatore se è necessario modificare il controllo Slider.

Anziché utilizzare i codici di notifica della barra di scorrimento, i controlli dispositivo di scorrimento inviano un set di codici di notifica diverso. Un controllo dispositivo di scorrimento invia i codici di notifica TB_BOTTOM, TB_LINEDOWN, TB_LINEUP e TB_TOP solo quando l'utente interagisce con un controllo dispositivo di scorrimento usando la tastiera. I messaggi di notifica TB_THUMBPOSITION e TB_THUMBTRACK vengono inviati solo quando l'utente utilizza il mouse. I codici di notifica TB_ENDTRACK, TB_PAGEDOWN e TB_PAGEUP vengono inviati in entrambi i casi.

Nella tabella seguente sono elencati i messaggi di notifica del dispositivo di scorrimento e gli eventi (codici chiave virtuali o eventi del mouse) che causano l'invio delle notifiche. Per un elenco di codici chiave virtuali standard, vedere Winuser. h.

|Messaggio di notifica|Evento che ha causato l'invio della notifica|
|--------------------------|-------------------------------------------|
|TB_BOTTOM|VK_END|
|TB_ENDTRACK|WM_KEYUP (l'utente ha rilasciato una chiave che ha inviato un codice di chiave virtuale pertinente)|
|TB_LINEDOWN|VK_RIGHT o VK_DOWN|
|TB_LINEUP|VK_LEFT o VK_UP|
|TB_PAGEDOWN|VK_NEXT (l'utente ha fatto clic sul canale sotto o a destra del dispositivo di scorrimento)|
|TB_PAGEUP|VK_PRIOR (l'utente ha fatto clic sul canale sopra o a sinistra del dispositivo di scorrimento)|
|TB_THUMBPOSITION|WM_LBUTTONUP dopo un messaggio di notifica TB_THUMBTRACK|
|TB_THUMBTRACK|Spostamento del dispositivo di scorrimento (l'utente ha trascinato il dispositivo di scorrimento)|
|TB_TOP|VK_HOME|

## <a name="see-also"></a>Vedi anche

[Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
