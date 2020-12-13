---
description: 'Altre informazioni su: aggiunta di elementi al controllo intestazione'
title: Aggiunta di elementi al controllo Header
ms.date: 11/04/2016
helpviewer_keywords:
- controls [MFC], header
- CHeaderCtrl class [MFC], adding items
- header controls [MFC], adding items to
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
ms.openlocfilehash: 91c33a7528f6637a91181559d71ed82b13420b38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339063"
---
# <a name="adding-items-to-the-header-control"></a>Aggiunta di elementi al controllo Header

Dopo aver creato il controllo Header ([CHeaderCtrl](reference/cheaderctrl-class.md)) nella finestra padre, aggiungere tutti gli "elementi intestazione" necessari: in genere uno per colonna.

### <a name="to-add-a-header-item"></a>Per aggiungere una voce di intestazione

1. Preparare una struttura [HD_ITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) .

1. Chiamare [CHeaderCtrl:: InsertItem](reference/cheaderctrl-class.md#insertitem), passando la struttura.

1. Ripetere i passaggi 1 e 2 per aggiungere altri elementi.

Per ulteriori informazioni, vedere [aggiunta di un elemento a un controllo intestazione](/windows/win32/Controls/header-controls) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controlli](controls-mfc.md)
