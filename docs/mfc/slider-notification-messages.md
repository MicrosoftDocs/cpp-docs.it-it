---
title: I messaggi di notifica dispositivo di scorrimento | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CSliderCtrl class [MFC], notifications
- slider controls [MFC], notification messages
- messages, notification
- notifications [MFC], CSliderCtrl
ms.assetid: b9121104-3889-4a10-92bf-f3723f1af9d0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c383458905d16dda935254e56a5aa9f56a153e83
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956161"
---
# <a name="slider-notification-messages"></a>Messaggi di notifica dispositivo di scorrimento
Un controllo dispositivo di scorrimento notifica alla finestra padre le azioni dell'utente mediante l'invio di messaggi WM_HSCROLL o WM_VSCROLL, a seconda dell'orientamento del controllo dispositivo di scorrimento l'elemento padre. Per gestire questi messaggi, aggiungere i gestori per gli i messaggi WM_HSCROLL e WM_VSCROLL alla finestra padre. Il [OnHScroll](../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../mfc/reference/cwnd-class.md#onvscroll) vengono passate un codice di notifica, la posizione di scorrimento e un puntatore a funzioni membro il [CSliderCtrl](../mfc/reference/csliderctrl-class.md) oggetto. Si noti che l'indicatore di misura è di tipo `CScrollBar *` anche se invece punta a un `CSliderCtrl` oggetto. Potrebbe essere necessario un cast di tipo puntatore ' this ' se è necessario modificare il controllo dispositivo di scorrimento.  
  
 Anziché utilizzare lo scorrimento della barra di codici di notifica, scorrimento (controlli) inviare un set diverso di codici di notifica. Un controllo dispositivo di scorrimento invia i codici di notifica TB_BOTTOM, TB_LINEDOWN, TB_LINEUP e TB_TOP solo quando l'utente interagisce con un controllo dispositivo di scorrimento utilizzando la tastiera. I messaggi di notifica TB_THUMBPOSITION e TB_THUMBTRACK vengono inviati solo quando l'utente sta usando il mouse. I codici di notifica TB_ENDTRACK TB_PAGEDOWN e TB_PAGEUP vengono inviati in entrambi i casi.  
  
 Nella tabella seguente sono elencati i messaggi di notifica del controllo dispositivo di scorrimento e degli eventi (codici di tasti virtuali o gli eventi del mouse) che le notifiche da inviare. (Per un elenco di codici di tasti virtuali standard, vedere winuser. h).  
  
|Messaggio di notifica|Evento che ha causato la notifica da inviare|  
|--------------------------|-------------------------------------------|  
|TB_BOTTOM|VK_END|  
|TB_ENDTRACK|WM_KEYUP (l'utente ha rilasciato un tasto che ha inviato un codice tasto virtuale pertinente)|  
|TB_LINEDOWN|VK_RIGHT o VK_DOWN|  
|TB_LINEUP|VK_LEFT o VK_UP|  
|TB_PAGEDOWN|VK_NEXT (il canale inferiore o a destra del dispositivo di scorrimento scelto dall'utente)|  
|TB_PAGEUP|VK_PRIOR (l'utente fa clic sul canale di sopra o a sinistra del dispositivo di scorrimento)|  
|TB_THUMBPOSITION|WM_LBUTTONUP dopo un messaggio di notifica TB_THUMBTRACK|  
|TB_THUMBTRACK|Spostamento di dispositivo di scorrimento (l'utente ha trascinato il dispositivo di scorrimento)|  
|TB_TOP|VK_HOME|  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

