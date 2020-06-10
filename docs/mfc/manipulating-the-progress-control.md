---
title: Modifica del controllo Progress
ms.date: 11/04/2016
helpviewer_keywords:
- CProgressCtrl class [MFC], working with
- progress controls [MFC], manipulating
- CProgressCtrl class [MFC], manipulating
- controlling progress controls [MFC]
- CProgressCtrl class [MFC], using
ms.assetid: 9af561d1-980b-4003-a6da-ff79be15bf23
ms.openlocfilehash: 3e3521a82854a85062f9b06bc33eb268d4b9c7a6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622427"
---
# <a name="manipulating-the-progress-control"></a>Modifica del controllo Progress

Esistono tre modi per modificare la posizione corrente di un controllo Progress ([CProgressCtrl](reference/cprogressctrl-class.md)).

- La posizione può essere modificata da un valore di incremento preimpostato.

- La posizione può essere modificata da un valore arbitrario.

- La posizione può essere modificata in un valore specifico.

### <a name="to-change-the-position-by-a-preset-amount"></a>Per modificare la posizione in base a un valore predefinito

1. Utilizzare la funzione membro [sestep](reference/cprogressctrl-class.md#setstep) per impostare la quantità di incremento. Per impostazione predefinita, questo valore è 10. Questo valore viene in genere impostato come una delle impostazioni iniziali per il controllo. Il valore del passaggio può essere negativo.

1. Usare la funzione membro [StepIt](reference/cprogressctrl-class.md#stepit) per incrementare la posizione. In questo modo il controllo viene ridisegnato automaticamente.

    > [!NOTE]
    >  `StepIt`provocherà il wrapping della posizione. Ad esempio, dato un intervallo di 1 -100, un passaggio di 20 e una posizione di 90, `StepIt` imposta la posizione su 10.

### <a name="to-change-the-position-by-an-arbitrary-amount"></a>Per modificare la posizione di un importo arbitrario

1. Utilizzare la funzione membro [OffsetPos](reference/cprogressctrl-class.md#offsetpos) per modificare la posizione. `OffsetPos`accetterà i valori negativi.

    > [!NOTE]
    >  `OffsetPos`, diversamente da `StepIt` , non esegue il wrapping della posizione. La nuova posizione viene regolata in modo da rimanere nell'intervallo.

### <a name="to-change-the-position-to-a-specific-value"></a>Per impostare la posizione su un valore specifico

1. Utilizzare la funzione membro [SetPos](reference/cprogressctrl-class.md#setpos) per impostare la posizione su un valore specifico. Se necessario, la nuova posizione viene modificata in modo che sia compresa nell'intervallo.

In genere, il controllo dello stato di avanzamento viene utilizzato solo per l'output. Per ottenere la posizione corrente senza specificare un nuovo valore, usare [GetPos](reference/cprogressctrl-class.md#getpos).

## <a name="see-also"></a>Vedere anche

[Utilizzo di CProgressCtrl](using-cprogressctrl.md)<br/>
[Controlli](controls-mfc.md)
