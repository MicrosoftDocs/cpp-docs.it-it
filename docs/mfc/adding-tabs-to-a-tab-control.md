---
title: Aggiunta di schede a un controllo Tab
ms.date: 11/04/2016
helpviewer_keywords:
- tab controls [MFC], adding tabs
- putting tabs on CTabCtrls [MFC]
- CTabCtrl class [MFC], adding tabs
- tabs [MFC], adding to CTabCtrl class [MFC]
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
ms.openlocfilehash: 89132e94396b51bee4a111b963c67d029f3dd9df
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616524"
---
# <a name="adding-tabs-to-a-tab-control"></a>Aggiunta di schede a un controllo Tab

Dopo aver creato il controllo struttura a schede ([CTabCtrl](reference/ctabctrl-class.md)), aggiungere tutte le schede necessarie.

### <a name="to-add-a-tab-item"></a>Per aggiungere una voce di scheda

1. Preparare una struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) .

1. Chiamare [CTabCtrl:: InsertItem](reference/ctabctrl-class.md#insertitem), passando la struttura.

1. Ripetere i passaggi 1 e 2 per ulteriori elementi della scheda.

Per ulteriori informazioni, vedere [creazione di un controllo](/windows/win32/Controls/tab-controls) struttura a schede nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CTabCtrl](using-ctabctrl.md)<br/>
[Controlli](controls-mfc.md)
