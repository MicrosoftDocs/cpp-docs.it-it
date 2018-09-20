---
title: Aggiunta di schede a un controllo struttura a schede | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tab controls [MFC], adding tabs
- putting tabs on CTabCtrls [MFC]
- CTabCtrl class [MFC], adding tabs
- tabs [MFC], adding to CTabCtrl class [MFC]
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d5f9a9ab897a91fe886a1ba3ad46fe8fab94d94c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416591"
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

