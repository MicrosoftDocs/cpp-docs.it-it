---
title: Messaggi di notifica dispositivo di scorrimento
ms.date: 11/04/2016
helpviewer_keywords:
- CSliderCtrl class [MFC], notifications
- slider controls [MFC], notification messages
- messages, notification
- notifications [MFC], CSliderCtrl
ms.assetid: b9121104-3889-4a10-92bf-f3723f1af9d0
ms.openlocfilehash: bee2d602512ea1a6af39b0bb218ee7333b399c80
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62307328"
---
# <a name="slider-notification-messages"></a>Messaggi di notifica dispositivo di scorrimento

Un controllo dispositivo di scorrimento notifica alla finestra padre le azioni dell'utente mediante l'invio di messaggi WM_HSCROLL o WM_VSCROLL, a seconda dell'orientamento del controllo dispositivo di scorrimento l'elemento padre. Per gestire questi messaggi, aggiungere i gestori per gli i messaggi WM_HSCROLL e WM_VSCROLL alla finestra padre. Il [OnHScroll](../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../mfc/reference/cwnd-class.md#onvscroll) funzioni membro vengono passate un codice di notifica, la posizione del dispositivo di scorrimento e un puntatore per il [CSliderCtrl](../mfc/reference/csliderctrl-class.md) oggetto. Si noti che il puntatore è di tipo `CScrollBar *` anche se punta a un `CSliderCtrl` oggetto. Potrebbe essere necessario il cast di tipo puntatore ' this ' se è necessario modificare il controllo dispositivo di scorrimento.

Anziché utilizzare lo scorrimento della barra di codici di notifica, i controlli dispositivo di scorrimento inviano un diverso set di codici di notifica. Un controllo dispositivo di scorrimento invia i codici di notifica TB_BOTTOM TB_LINEDOWN, TB_LINEUP e TB_TOP solo quando l'utente interagisce con un controllo dispositivo di scorrimento tramite tastiera. I messaggi di notifica TB_THUMBPOSITION e TB_THUMBTRACK vengono inviati solo quando l'utente sta usando il mouse. I codici di notifica TB_ENDTRACK e TB_PAGEDOWN TB_PAGEUP vengono inviati in entrambi i casi.

La tabella seguente elenca i messaggi di notifica del controllo dispositivo di scorrimento e degli eventi (codici di tasti virtuali o gli eventi del mouse) che le notifiche da inviare. (Per un elenco di codici di tasti virtuali standard, vedere winuser. h).

|Messaggio di notifica|Evento che ha causato la notifica da inviare|
|--------------------------|-------------------------------------------|
|TB_BOTTOM|VK_END|
|TB_ENDTRACK|WM_KEYUP (l'utente ha rilasciato un tasto che ha inviato un codice tasto virtuale pertinente)|
|TB_LINEDOWN|VK_RIGHT o VK_DOWN|
|TB_LINEUP|VK_LEFT o VK_UP|
|TB_PAGEDOWN|VK_NEXT (l'utente ha fatto clic sul canale di sotto o a destra del dispositivo di scorrimento)|
|TB_PAGEUP|VK_PRIOR (l'utente ha fatto clic sul canale di sopra o a sinistra del dispositivo di scorrimento)|
|TB_THUMBPOSITION|Segue un messaggio di notifica TB_THUMBTRACK WM_LBUTTONUP|
|TB_THUMBTRACK|Spostamento del dispositivo (l'utente ha trascinato il dispositivo di scorrimento)|
|TB_TOP|VK_HOME|

## <a name="see-also"></a>Vedere anche

[Uso di CSliderCtrl](../mfc/using-csliderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
