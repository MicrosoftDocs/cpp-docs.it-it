---
title: Messaggi di notifica dispositivo di scorrimento | Documenti Microsoft
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
ms.openlocfilehash: b003e23a1fef2b44600b9fd15dfe4ca541df5369
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33381979"
---
# <a name="slider-notification-messages"></a>Messaggi di notifica dispositivo di scorrimento
Un controllo dispositivo di scorrimento comunica alla finestra padre di azioni utente inviando padre `WM_HSCROLL` o `WM_VSCROLL` messaggi, a seconda dell'orientamento del controllo dispositivo di scorrimento. Per gestire questi messaggi, aggiungere i gestori per il `WM_HSCROLL` e `WM_VSCROLL` messaggi della finestra padre. Il [OnHScroll](../mfc/reference/cwnd-class.md#onhscroll) e [OnVScroll](../mfc/reference/cwnd-class.md#onvscroll) un codice di notifica, la posizione del dispositivo di scorrimento e un puntatore a funzioni membro verranno passate il [CSliderCtrl](../mfc/reference/csliderctrl-class.md) oggetto. Si noti che il puntatore è di tipo **CScrollBar \***  anche se punta a un `CSliderCtrl` oggetto. Potrebbe essere necessario il cast di tipo puntatore ' this ' se è necessario modificare il controllo dispositivo di scorrimento.  
  
 Anziché utilizzare lo scorrimento della barra di codici di notifica, i controlli dispositivo di scorrimento inviano un diverso set di codici di notifica. Invia un controllo dispositivo di scorrimento di **TB_BOTTOM**, **TB_LINEDOWN**, **TB_LINEUP**, e **TB_TOP** notifica codici solo quando l'utente interagisce con un controllo dispositivo di scorrimento utilizzando la tastiera. Il **TB_THUMBPOSITION** e **TB_THUMBTRACK** messaggi di notifica vengono inviati solo quando l'utente sta usando il mouse. Il **TB_ENDTRACK**, **TB_PAGEDOWN**, e **TB_PAGEUP** i codici di notifica vengono inviati in entrambi i casi.  
  
 Nella tabella seguente sono elencati i messaggi di notifica del controllo dispositivo di scorrimento e degli eventi (codici di tasti virtuali o gli eventi del mouse) che le notifiche da inviare. (Per un elenco di codici di tasti virtuali standard, vedere winuser. h).  
  
|Messaggio di notifica|Evento che ha causato la notifica da inviare|  
|--------------------------|-------------------------------------------|  
|**TB_BOTTOM**|**VK_END**|  
|**TB_ENDTRACK**|`WM_KEYUP` (l'utente ha rilasciato un tasto che ha inviato un codice tasto virtuale pertinente)|  
|**TB_LINEDOWN**|**VK_RIGHT** o **VK_DOWN**|  
|**TB_LINEUP**|**VK_LEFT** o **VK_UP**|  
|**TB_PAGEDOWN**|**VK_NEXT** (il canale inferiore o a destra del dispositivo di scorrimento scelto dall'utente)|  
|**TB_PAGEUP**|**VK_PRIOR** (l'utente fa clic sul canale di sopra o a sinistra del dispositivo di scorrimento)|  
|**TB_THUMBPOSITION**|`WM_LBUTTONUP` segue un **TB_THUMBTRACK** messaggio di notifica|  
|**TB_THUMBTRACK**|Spostamento del dispositivo (l'utente trascinata il dispositivo di scorrimento)|  
|**TB_TOP**|**VK_HOME**|  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

