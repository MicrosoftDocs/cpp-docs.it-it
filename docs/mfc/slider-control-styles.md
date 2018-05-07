---
title: Stili del controllo Slider | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- slider controls [MFC], styles
- CSliderCtrl class [MFC], styles
- styles [MFC], CSliderCtrl
- styles [MFC], slider controls
ms.assetid: 64c491fc-5af1-4f97-ae30-854071b3dc02
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9fa099e050bd460756ff9e2584d37f9e628293f0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="slider-control-styles"></a>Stili del controllo Slider
Scorrimento (controlli) ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) può avere un orientamento verticale o orizzontale. Hanno segni di graduazione su entrambi i lati, entrambi i lati o nessuno. Possono inoltre essere utilizzati per specificare un intervallo di valori consecutivi. Queste proprietà vengono controllate utilizzando stili del controllo dispositivo di scorrimento, che è specificare quando si crea il dispositivo di scorrimento.  
  
 Il `TBS_HORZ` e `TBS_VERT` determinano l'orientamento del controllo dispositivo di scorrimento. Se non si specifica un orientamento, il dispositivo di scorrimento è orientato orizzontalmente.  
  
 Il `TBS_AUTOTICKS` stile crea un controllo dispositivo di scorrimento con un segno di graduazione per ogni incremento dell'intervallo di valori. I segni di graduazione vengono aggiunti automaticamente quando si chiama il [SetRange](../mfc/reference/csliderctrl-class.md#setrange) funzione membro. Se non si specifica `TBS_AUTOTICKS`, è possibile utilizzare le funzioni membro, ad esempio [SetTic](../mfc/reference/csliderctrl-class.md#settic) e [funzione membro SetTicFreq](../mfc/reference/csliderctrl-class.md#setticfreq), per specificare le posizioni dei segni di graduazione. Per creare un controllo dispositivo di scorrimento che non vengono visualizzati i segni di graduazione, è possibile utilizzare il `TBS_NOTICKS` stile.  
  
 È possibile visualizzare i segni di graduazione su uno o entrambi i lati del controllo dispositivo di scorrimento. Per i controlli dispositivo di scorrimento orizzontale, è possibile specificare il `TBS_BOTTOM` o `TBS_TOP` stile. Per i controlli dispositivo di scorrimento verticale, è possibile specificare il `TBS_RIGHT` o `TBS_LEFT` stile. (`TBS_BOTTOM` e `TBS_RIGHT` sono le impostazioni predefinite.) I segni di graduazione su entrambi i lati del controllo dispositivo di scorrimento in qualsiasi posizione, specificare il `TBS_BOTH` stile.  
  
 Un controllo dispositivo di scorrimento è possibile visualizzare un intervallo di selezione solo se si specifica il `TBS_ENABLESELRANGE` durante la creazione di stile. Quando un controllo dispositivo di scorrimento con questo stile, i segni di graduazione in corrispondenza delle posizioni iniziale e finale di un intervallo di selezione vengono visualizzati come triangoli (anziché verticale trattini) e viene evidenziata nell'intervallo di selezione. Gli intervalli di selezione, ad esempio, potrebbero essere utili in una semplice applicazione di pianificazione. L'utente può selezionare un intervallo dei segni di graduazione corrispondente alle ore del giorno per identificare un orario pianificato.  
  
 Per impostazione predefinita, la lunghezza del dispositivo di scorrimento di un controllo dispositivo di scorrimento varia quando viene modificato l'intervallo di selezione. Se il controllo dispositivo di scorrimento ha il **TBS_FIXEDLENGTH** stile, la lunghezza del dispositivo di scorrimento viene mantenuta anche se viene modificato l'intervallo di selezione. Un controllo dispositivo di scorrimento che ha il **TBS_NOTHUMB** style non include un dispositivo di scorrimento.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

