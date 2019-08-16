---
title: Aggiunta di elementi al controllo Header
ms.date: 11/04/2016
helpviewer_keywords:
- controls [MFC], header
- CHeaderCtrl class [MFC], adding items
- header controls [MFC], adding items to
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
ms.openlocfilehash: d9a35123ddbe77b8e5e1779651fc4cde233863ae
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69509312"
---
# <a name="adding-items-to-the-header-control"></a>Aggiunta di elementi al controllo Header

Dopo aver creato il controllo Header ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) nella finestra padre, aggiungere tutti gli "elementi intestazione" necessari: in genere uno per colonna.

### <a name="to-add-a-header-item"></a>Per aggiungere una voce di intestazione

1. Preparare una struttura [HD_ITEM](/windows/win32/api/commctrl/ns-commctrl-_hd_itemw) .

1. Chiamare [CHeaderCtrl:: InsertItem](../mfc/reference/cheaderctrl-class.md#insertitem), passando la struttura.

1. Ripetere i passaggi 1 e 2 per aggiungere altri elementi.

Per ulteriori informazioni, vedere [aggiunta di un elemento a un controllo intestazione](/windows/win32/Controls/header-controls) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
