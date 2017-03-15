---
title: "Messaggi di notifica dispositivo di scorrimento | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSliderCtrl (classe), notifiche"
  - "messaggi, notifica"
  - "notifiche, CSliderCtrl"
  - "scorrimento (controlli), messaggi di notifica"
ms.assetid: b9121104-3889-4a10-92bf-f3723f1af9d0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Messaggi di notifica dispositivo di scorrimento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un dispositivo di scorrimento alla finestra padre delle azioni utente inviando `WM_HSCROLL` o i messaggi padre di `WM_VSCROLL`, a seconda dell'orientamento del dispositivo di scorrimento.  Per gestire questi messaggi, aggiungere i gestori per i messaggi di `WM_VSCROLL` e di `WM_HSCROLL` alla finestra padre.  Le funzioni membro di [OnVScroll](../Topic/CWnd::OnVScroll.md) e di [OnHScroll](../Topic/CWnd::OnHScroll.md) verranno passate al codice di notifica, nella posizione del dispositivo di scorrimento e un puntatore all'oggetto di [CSliderCtrl](../mfc/reference/csliderctrl-class.md).  Si noti che il puntatore è di tipo **CScrollBar \*** anche se indica `CSliderCtrl` un oggetto.  È possibile avere la necessità di eseguire questo puntatore se è necessario modificare il dispositivo di scorrimento.  
  
 Anziché utilizzare i codici di notifica della barra di scorrimento, i dispositivi di scorrimento inviare un set diverso di codici di notifica.  Un dispositivo di scorrimento invia i codici di notifica di **TB\_BOTTOM**, di **TB\_LINEDOWN**, di **TB\_LINEUP** e di **TB\_TOP** solo quando l'utente interagisce con un dispositivo di scorrimento utilizzando la tastiera.  I messaggi di notifica di **TB\_THUMBTRACK** e di **TB\_THUMBPOSITION** vengono inviati solo quando l'utente sta utilizzando il mouse.  I codici di notifica di **TB\_ENDTRACK**, di **TB\_PAGEDOWN** e di **TB\_PAGEUP** vengono inviati in entrambi i casi.  
  
 Nella tabella seguente sono elencati i messaggi di notifica di slider e gli eventi \(codici tasto o eventi del mouse virtuali\) che genera notifiche da inviare. Per un elenco dei codici tasto virtuali standard, vedere Winuser.h.\)  
  
|Messaggio di notifica|Evento in modo che notifica all'invio|  
|---------------------------|-------------------------------------------|  
|**TB\_BOTTOM**|**VK\_END**|  
|**TB\_ENDTRACK**|`WM_KEYUP` \(l'utente ha rilasciato una chiave che ha inviato un codice tasto virtuale pertinente\)|  
|**TB\_LINEDOWN**|**VK\_RIGHT** o **VK\_DOWN**|  
|**TB\_LINEUP**|**VK\_LEFT** o **VK\_UP**|  
|**TB\_PAGEDOWN**|**VK\_NEXT** \(l'utente ha fatto clic sul canale inferiore o a destra del dispositivo di scorrimento|  
|**TB\_PAGEUP**|**VK\_PRIOR** \(l'utente ha fatto clic sul canale o a sinistra del dispositivo di scorrimento|  
|**TB\_THUMBPOSITION**|`WM_LBUTTONUP` dopo un messaggio di notifica di **TB\_THUMBTRACK**|  
|**TB\_THUMBTRACK**|Spostamento del dispositivo di scorrimento \(l'utente ha trascinato il dispositivo di scorrimento|  
|**TB\_TOP**|**VK\_HOME**|  
  
## Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)