---
description: 'Altre informazioni su: stili del controllo Slider'
title: Stili del controllo Slider
ms.date: 11/04/2016
helpviewer_keywords:
- slider controls [MFC], styles
- CSliderCtrl class [MFC], styles
- styles [MFC], CSliderCtrl
- styles [MFC], slider controls
ms.assetid: 64c491fc-5af1-4f97-ae30-854071b3dc02
ms.openlocfilehash: cec057683862212a4d999ec7d0488c5f2a0837cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216912"
---
# <a name="slider-control-styles"></a>Stili del controllo Slider

I controlli dispositivo di scorrimento ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) possono avere un orientamento verticale o orizzontale. Possono avere segni di graduazione su entrambi i lati, entrambi i lati o nessuno di essi. Possono anche essere usati per specificare un intervallo di valori consecutivi. Queste proprietà vengono controllate tramite gli stili del controllo Slider, che è possibile specificare quando si crea il controllo dispositivo di scorrimento.

Gli stili TBS_HORZ e TBS_VERT determinano l'orientamento del controllo dispositivo di scorrimento. Se non si specifica un orientamento, il controllo dispositivo di scorrimento è orientato orizzontalmente.

Lo stile TBS_AUTOTICKS crea un controllo dispositivo di scorrimento con un segno di graduazione per ogni incremento nell'intervallo di valori. Questi segni di graduazione vengono aggiunti automaticamente quando si chiama la funzione membro [SetRange](../mfc/reference/csliderctrl-class.md#setrange) . Se non si specifica TBS_AUTOTICKS, è possibile utilizzare funzioni membro, ad esempio [SetTic](../mfc/reference/csliderctrl-class.md#settic) e [SetTicFreq](../mfc/reference/csliderctrl-class.md#setticfreq), per specificare le posizioni dei segni di graduazione. Per creare un controllo dispositivo di scorrimento che non Visualizza i segni di graduazione, è possibile utilizzare lo stile TBS_NOTICKS.

È possibile visualizzare i segni di graduazione su uno o entrambi i lati del controllo dispositivo di scorrimento. Per i controlli slider orizzontali, è possibile specificare lo stile TBS_BOTTOM o TBS_TOP. Per i controlli dispositivo di scorrimento verticali è possibile specificare lo stile TBS_RIGHT o TBS_LEFT. (TBS_BOTTOM e TBS_RIGHT sono le impostazioni predefinite). Per i segni di graduazione su entrambi i lati del controllo dispositivo di scorrimento in qualsiasi orientamento, specificare lo stile del TBS_BOTH.

Un controllo dispositivo di scorrimento può visualizzare un intervallo di selezione solo se si specifica lo stile del TBS_ENABLESELRANGE al momento della creazione. Quando un controllo dispositivo di scorrimento presenta questo stile, i segni di graduazione nelle posizioni iniziale e finale di un intervallo di selezione vengono visualizzati come triangoli (anziché trattini verticali) e l'intervallo di selezione è evidenziato. Ad esempio, gli intervalli di selezione possono essere utili in una semplice applicazione di pianificazione. L'utente può selezionare un intervallo di segni di graduazione corrispondenti alle ore di un giorno per identificare un'ora della riunione pianificata.

Per impostazione predefinita, la lunghezza del dispositivo di scorrimento di un controllo dispositivo di scorrimento varia in base alla modifica dell'intervallo di selezione. Se il controllo dispositivo di scorrimento ha lo stile TBS_FIXEDLENGTH, la lunghezza del dispositivo di scorrimento rimarrà invariata anche se cambia l'intervallo di selezione. Un controllo dispositivo di scorrimento con lo stile TBS_NOTHUMB non include un dispositivo di scorrimento.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
