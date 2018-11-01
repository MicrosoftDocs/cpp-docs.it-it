---
title: Stili del controllo Slider
ms.date: 11/04/2016
helpviewer_keywords:
- slider controls [MFC], styles
- CSliderCtrl class [MFC], styles
- styles [MFC], CSliderCtrl
- styles [MFC], slider controls
ms.assetid: 64c491fc-5af1-4f97-ae30-854071b3dc02
ms.openlocfilehash: 7b143d0d27bcb8ee975d4056cf0a307db7b330c6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50588734"
---
# <a name="slider-control-styles"></a>Stili del controllo Slider

I controlli dispositivo di scorrimento ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) può avere un orientamento verticale o orizzontale. Possono avere i segni di graduazione su entrambi i lati, entrambi i lati, o nessuna delle due. Possono inoltre essere utilizzati per specificare un intervallo di valori consecutivi. Queste proprietà sono controllate tramite stili del controllo dispositivo di scorrimento, è necessario specificare quando si crea il controllo dispositivo di scorrimento.

Gli stili di stili TBS_HORZ e TBS_VERT determinano l'orientamento del controllo dispositivo di scorrimento. Se non si specifica un orientamento, il controllo dispositivo di scorrimento è orientato in senso orizzontale.

Lo stile TBS_AUTOTICKS crea un controllo dispositivo di scorrimento con un segno di spunta per ogni incremento dell'intervallo di valori. Questi segni di graduazione vengono aggiunti automaticamente quando si chiama il [SetRange](../mfc/reference/csliderctrl-class.md#setrange) funzione membro. Se non si specifica TBS_AUTOTICKS, è possibile usare le funzioni membro, ad esempio [SetTic](../mfc/reference/csliderctrl-class.md#settic) e [funzione membro SetTicFreq](../mfc/reference/csliderctrl-class.md#setticfreq)per specificare le posizioni dei segni di graduazione. Per creare un controllo dispositivo di scorrimento che non vengono visualizzati segni di graduazione, è possibile usare lo stile TBS_NOTICKS.

È possibile visualizzare i segni di graduazione su uno o entrambi i lati del controllo dispositivo di scorrimento. Per i controlli dispositivo di scorrimento orizzontale, è possibile specificare lo stile TBS_BOTTOM o TBS_TOP. Per i controlli dispositivo di scorrimento verticale, è possibile specificare lo stile TBS_RIGHT o TBS_LEFT. (TBS_BOTTOM e TBS_RIGHT sono le impostazioni predefinite). I segni di graduazione su entrambi i lati del controllo dispositivo di scorrimento con qualsiasi orientamento, specificare lo stile TBS_BOTH.

Un controllo dispositivo di scorrimento è possibile visualizzare un intervallo di selezione solo se si specifica lo stile TBS_ENABLESELRANGE durante la creazione. Quando un dispositivo di scorrimento ha questo stile, i segni di graduazione in corrispondenza delle posizioni iniziale e finale di un intervallo di selezione vengono visualizzati come triangoli (anziché verticale trattini) e l'intervallo di selezione è evidenziato. Gli intervalli di selezione, ad esempio, potrebbero essere utili in una semplice applicazione di pianificazione. L'utente può selezionare un intervallo dei segni di graduazione corrispondente alle ore del giorno per identificare un orario pianificato.

Per impostazione predefinita, la lunghezza del dispositivo di scorrimento di un controllo dispositivo di scorrimento varia quando viene modificato l'intervallo di selezione. Se il controllo dispositivo di scorrimento ha lo stile TBS_FIXEDLENGTH, la lunghezza del dispositivo di scorrimento rimane invariato anche se l'intervallo di selezione viene modificata. Un controllo dispositivo di scorrimento con lo stile TBS_NOTHUMB non include un dispositivo di scorrimento.

## <a name="see-also"></a>Vedere anche

[Uso di CSliderCtrl](../mfc/using-csliderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

