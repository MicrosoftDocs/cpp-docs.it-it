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
ms.openlocfilehash: f76fbe9f85d978a5c2865b48720588b620508a07
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951052"
---
# <a name="slider-control-styles"></a>Stili del controllo Slider
Scorrimento (controlli) ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) può avere un orientamento verticale o orizzontale. Possono avere i segni di graduazione su entrambi i lati, entrambi i lati o nessuno dei due. Possono inoltre essere utilizzati per specificare un intervallo di valori consecutivi. Queste proprietà vengono controllate utilizzando stili del controllo dispositivo di scorrimento, che puoi specificare quando si crea il controllo dispositivo di scorrimento.  
  
 Gli stili stili TBS_HORZ e TBS_VERT determinano l'orientamento del controllo dispositivo di scorrimento. Se non si specifica un orientamento, controllo dispositivo di scorrimento è orientato orizzontalmente.  
  
 Lo stile TBS_AUTOTICKS crea un controllo dispositivo di scorrimento con un segno di graduazione per ogni incremento dell'intervallo di valori. I segni di graduazione vengono aggiunti automaticamente quando si chiama il [SetRange](../mfc/reference/csliderctrl-class.md#setrange) funzione membro. Se non si specifica TBS_AUTOTICKS, è possibile utilizzare le funzioni membro, ad esempio [SetTic](../mfc/reference/csliderctrl-class.md#settic) e [funzione membro SetTicFreq](../mfc/reference/csliderctrl-class.md#setticfreq), per specificare le posizioni dei segni di graduazione. Per creare un controllo dispositivo di scorrimento che non vengono visualizzati i segni di graduazione, è possibile utilizzare lo stile TBS_NOTICKS.  
  
 È possibile visualizzare i segni di graduazione su uno o entrambi i lati del controllo dispositivo di scorrimento. Per i controlli dispositivo di scorrimento orizzontale, è possibile specificare lo stile TBS_BOTTOM o TBS_TOP. Per i controlli dispositivo di scorrimento verticale, è possibile specificare lo stile TBS_RIGHT o TBS_LEFT. (TBS_BOTTOM e TBS_RIGHT sono le impostazioni predefinite). I segni di graduazione su entrambi i lati del controllo dispositivo di scorrimento in qualsiasi posizione, specificare lo stile TBS_BOTH.  
  
 Un controllo dispositivo di scorrimento è possibile visualizzare un intervallo di selezione solo se si specifica lo stile TBS_ENABLESELRANGE durante la creazione. Quando un controllo dispositivo di scorrimento con questo stile, i segni di graduazione in corrispondenza delle posizioni iniziale e finale di un intervallo di selezione vengono visualizzati come triangoli (anziché verticale trattini) e viene evidenziata nell'intervallo di selezione. Gli intervalli di selezione, ad esempio, potrebbero essere utili in un'applicazione di programmazione semplice. L'utente può selezionare un intervallo dei segni di graduazione corrispondente alle ore del giorno per identificare un orario pianificato.  
  
 Per impostazione predefinita, la lunghezza del dispositivo di scorrimento di un controllo dispositivo di scorrimento varia quando viene modificato l'intervallo di selezione. Se il controllo dispositivo di scorrimento ha lo stile TBS_FIXEDLENGTH, la lunghezza del dispositivo di scorrimento rimane invariato anche se viene modificato l'intervallo di selezione. Un controllo dispositivo di scorrimento con lo stile TBS_NOTHUMB non include un dispositivo di scorrimento.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

