---
title: Aggiunta di elementi al controllo Header
ms.date: 11/04/2016
helpviewer_keywords:
- controls [MFC], header
- CHeaderCtrl class [MFC], adding items
- header controls [MFC], adding items to
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
ms.openlocfilehash: 897612c6d5ac96704cc0a945df65146e6a01480a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394754"
---
# <a name="adding-items-to-the-header-control"></a>Aggiunta di elementi al controllo Header

Dopo aver creato il controllo intestazione ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) nella finestra padre, aggiungere tanti "elementi di intestazione" necessari: in genere uno per ogni colonna.

### <a name="to-add-a-header-item"></a>Per aggiungere una voce di intestazione

1. Preparare un' [HD_ITEM](/windows/desktop/api/commctrl/ns-commctrl-_hd_itema) struttura.

1. Chiamare [CHeaderCtrl:: InsertItem](../mfc/reference/cheaderctrl-class.md#insertitem), passando la struttura.

1. Ripetere i passaggi 1 e 2 per aggiungere altri elementi.

Per altre informazioni, vedere [aggiunta di un elemento a un controllo intestazione](/windows/desktop/Controls/header-controls) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
