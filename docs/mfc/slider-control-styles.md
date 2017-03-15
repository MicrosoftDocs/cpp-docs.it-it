---
title: "Stili del controllo Slider | Microsoft Docs"
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
  - "CSliderCtrl (classe), stili"
  - "scorrimento (controlli), stili"
  - "stili, CSliderCtrl"
  - "stili, scorrimento (controlli)"
ms.assetid: 64c491fc-5af1-4f97-ae30-854071b3dc02
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Stili del controllo Slider
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I dispositivi di scorrimento \([CSliderCtrl](../mfc/reference/csliderctrl-class.md)\) possono avere un orientamento verticale o orizzontale.  Non possono contenere segni di graduazione da entrambi i lati, entrambi i membri, o nessuno.  Possono essere utilizzati per specificare un intervallo di valori consecutivi.  Queste proprietà sono controllate utilizzando stili del dispositivo di scorrimento, specificate quando si crea il dispositivo di scorrimento.  
  
 Gli stili di `TBS_VERT` e di `TBS_HORZ` determina l'orientamento del dispositivo di scorrimento.  Se non si specifica un orientamento, il controllo è orientato orizzontalmente.  
  
 Lo stile di `TBS_AUTOTICKS` crea un dispositivo di scorrimento con un segno di graduazione per ogni incremento nell'intervallo di valori.  I segni di graduazione vengono aggiunti automaticamente quando si chiama la funzione membro di [SetRange](../Topic/CSliderCtrl::SetRange.md).  Se non si specifica `TBS_AUTOTICKS`, è possibile utilizzare le funzioni membro, ad esempio [SetTic](../Topic/CSliderCtrl::SetTic.md) e [SetTicFreq](../Topic/CSliderCtrl::SetTicFreq.md), per specificare le posizioni dei segni di graduazione.  Per creare un dispositivo di scorrimento non visualizzati segni di graduazione, è possibile utilizzare lo stile di `TBS_NOTICKS`.  
  
 È possibile visualizzare i segni di graduazione uno o da entrambi i lati del dispositivo di scorrimento.  Per i dispositivi di scorrimento orizzontali, è possibile specificare lo stile di `TBS_TOP` o di `TBS_BOTTOM`.  Per i dispositivi di scorrimento, è possibile specificare lo stile di `TBS_LEFT` o di `TBS_RIGHT`. \(`TBS_BOTTOM` e `TBS_RIGHT` sono le impostazioni predefinite.\) Per i segni di graduazione su entrambi i lati del dispositivo di scorrimento all'orientamento, specificare lo stile di `TBS_BOTH`.  
  
 Un dispositivo di scorrimento può visualizzare un intervallo di selezione solo se si specifica lo stile di `TBS_ENABLESELRANGE` quando viene creato.  Se un dispositivo di scorrimento ha questo stile, i segni di graduazione le posizioni iniziale e finale di un intervallo di selezione vengono visualizzate come triangoli \(anziché i trattini verticali\) e l'intervallo di selezione è evidenziato.  Ad esempio, gli intervalli di selezione possono rivelarsi utili in un'applicazione semplice di pianificazione.  L'utente può selezionare un intervallo di segni di graduazione che corrispondono alle ore in un giorno per identificare un tempo di riunione impostata.  
  
 Per impostazione predefinita, la lunghezza del dispositivo di scorrimento di un dispositivo di scorrimento varia alle modifiche dell'intervallo di selezione.  Se il dispositivo di scorrimento ha lo stile di **TBS\_FIXEDLENGTH**, la lunghezza del dispositivo di scorrimento rimane la stessa anche se le modifiche intervallo di selezione.  Un dispositivo di scorrimento che presenta lo stile di **TBS\_NOTHUMB** non include un dispositivo di scorrimento.  
  
## Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)