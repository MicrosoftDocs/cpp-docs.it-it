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
ms.openlocfilehash: c7c602dcdd70a3539f9137589d31820ee5470e49
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50461581"
---
# <a name="manipulating-the-progress-control"></a>Modifica del controllo Progress

Esistono tre modi per modificare la posizione corrente di un controllo di stato ([CProgressCtrl](../mfc/reference/cprogressctrl-class.md)).

- La posizione può essere modificata da un incremento predefinito.

- La posizione può essere modificata da un quantità arbitraria.

- La posizione può essere modificata su un valore specifico.

### <a name="to-change-the-position-by-a-preset-amount"></a>Per modificare la posizione di una quantità di set di impostazioni

1. Usare la [SetStep](../mfc/reference/cprogressctrl-class.md#setstep) funzione membro per impostare la quantità di incremento. Per impostazione predefinita, questo valore è 10. In genere, questo valore è impostato come una delle impostazioni iniziali per il controllo. Il valore di incremento può essere negativo.

1. Usare la [StepIt](../mfc/reference/cprogressctrl-class.md#stepit) funzione membro per incrementare la posizione. In questo modo il controllo venga ricreato.

    > [!NOTE]
    >  `StepIt` comporterà il ritorno a capo. Ad esempio, dato un intervallo di 1 -100, un passaggio di 20 e una posizione di 90, `StepIt` imposterà la posizione a 10.

### <a name="to-change-the-position-by-an-arbitrary-amount"></a>Per modificare la posizione da un quantità arbitraria

1. Usare la [OffsetPos](../mfc/reference/cprogressctrl-class.md#offsetpos) funzione membro per modificare la posizione. `OffsetPos` accetta i valori negativi.

    > [!NOTE]
    >  `OffsetPos`, a differenza di `StepIt`, la posizione non andrà a capo. La nuova posizione viene regolata per rimanere all'interno dell'intervallo.

### <a name="to-change-the-position-to-a-specific-value"></a>Per modificare la posizione su un valore specifico

1. Usare la [funzione membro SetPos](../mfc/reference/cprogressctrl-class.md#setpos) funzione membro per impostare la posizione su un valore specifico. Se necessario, la nuova posizione viene regolata per rientrare nell'intervallo.

In genere, il controllo di stato di avanzamento viene usato esclusivamente per l'output. Per ottenere la posizione corrente senza specificare un nuovo valore, usare [GetPos](../mfc/reference/cprogressctrl-class.md#getpos).

## <a name="see-also"></a>Vedere anche

[Uso di CProgressCtrl](../mfc/using-cprogressctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

