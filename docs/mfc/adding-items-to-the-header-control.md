---
title: Aggiunta di elementi al controllo Header
ms.date: 11/04/2016
helpviewer_keywords:
- controls [MFC], header
- CHeaderCtrl class [MFC], adding items
- header controls [MFC], adding items to
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
ms.openlocfilehash: 5749a0cae2dfe7e6c9f4c166eca487e36c2d21d2
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616460"
---
# <a name="adding-items-to-the-header-control"></a>Aggiunta di elementi al controllo Header

Dopo aver creato il controllo Header ([CHeaderCtrl](reference/cheaderctrl-class.md)) nella finestra padre, aggiungere tutti gli "elementi intestazione" necessari: in genere uno per colonna.

### <a name="to-add-a-header-item"></a>Per aggiungere una voce di intestazione

1. Preparare una struttura [HD_ITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) .

1. Chiamare [CHeaderCtrl:: InsertItem](reference/cheaderctrl-class.md#insertitem), passando la struttura.

1. Ripetere i passaggi 1 e 2 per aggiungere altri elementi.

Per ulteriori informazioni, vedere [aggiunta di un elemento a un controllo intestazione](/windows/win32/Controls/header-controls) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controlli](controls-mfc.md)
