---
title: Aggiunta di schede a un controllo Tab
ms.date: 11/04/2016
helpviewer_keywords:
- tab controls [MFC], adding tabs
- putting tabs on CTabCtrls [MFC]
- CTabCtrl class [MFC], adding tabs
- tabs [MFC], adding to CTabCtrl class [MFC]
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
ms.openlocfilehash: f769de7bcf3e410cca717c17237d1e49ef8562c9
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57293589"
---
# <a name="adding-tabs-to-a-tab-control"></a>Aggiunta di schede a un controllo Tab

Dopo aver creato il controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)), aggiungere le schede in base alle esigenze.

### <a name="to-add-a-tab-item"></a>Per aggiungere un elemento di scheda

1. Preparare una [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) struttura.

1. Chiamare [CTabCtrl:: InsertItem](../mfc/reference/ctabctrl-class.md#insertitem), passando la struttura.

1. Ripetere i passaggi 1 e 2 per altri elementi di lavoro.

Per altre informazioni, vedere [creazione di un controllo struttura a schede](/windows/desktop/Controls/tab-controls) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CTabCtrl](../mfc/using-ctabctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
