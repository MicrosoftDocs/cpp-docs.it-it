---
description: 'Altre informazioni su: aggiunta di schede a un controllo struttura a schede'
title: Aggiunta di schede a un controllo Tab
ms.date: 11/04/2016
helpviewer_keywords:
- tab controls [MFC], adding tabs
- putting tabs on CTabCtrls [MFC]
- CTabCtrl class [MFC], adding tabs
- tabs [MFC], adding to CTabCtrl class [MFC]
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
ms.openlocfilehash: ca25edf349fb11271d4e355241f4724d11bc4ac0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185466"
---
# <a name="adding-tabs-to-a-tab-control"></a>Aggiunta di schede a un controllo Tab

Dopo aver creato il controllo struttura a schede ([CTabCtrl](reference/ctabctrl-class.md)), aggiungere tutte le schede necessarie.

### <a name="to-add-a-tab-item"></a>Per aggiungere una voce di scheda

1. Preparare una struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) .

1. Chiamare [CTabCtrl:: InsertItem](reference/ctabctrl-class.md#insertitem), passando la struttura.

1. Ripetere i passaggi 1 e 2 per ulteriori elementi della scheda.

Per ulteriori informazioni, vedere [creazione di un controllo](/windows/win32/Controls/tab-controls) struttura a schede nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTabCtrl](using-ctabctrl.md)<br/>
[Controlli](controls-mfc.md)
