---
title: Aggiunta di schede a un controllo Tab
ms.date: 11/04/2016
helpviewer_keywords:
- tab controls [MFC], adding tabs
- putting tabs on CTabCtrls [MFC]
- CTabCtrl class [MFC], adding tabs
- tabs [MFC], adding to CTabCtrl class [MFC]
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
ms.openlocfilehash: 8915b3af083ebe318e8527b2f83099bf61e7e3ce
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69509304"
---
# <a name="adding-tabs-to-a-tab-control"></a>Aggiunta di schede a un controllo Tab

Dopo aver creato il controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)), aggiungere tutte le schede necessarie.

### <a name="to-add-a-tab-item"></a>Per aggiungere una voce di scheda

1. Preparare una struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) .

1. Chiamare [CTabCtrl:: InsertItem](../mfc/reference/ctabctrl-class.md#insertitem), passando la struttura.

1. Ripetere i passaggi 1 e 2 per ulteriori elementi della scheda.

Per ulteriori informazioni, vedere [creazione di un controllo](/windows/win32/Controls/tab-controls) struttura a schede nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CTabCtrl](../mfc/using-ctabctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
