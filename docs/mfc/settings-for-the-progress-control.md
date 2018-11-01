---
title: Impostazioni per il controllo Progress
ms.date: 11/04/2016
helpviewer_keywords:
- CProgressCtrl class [MFC], settings
- progress controls [MFC], settings
ms.assetid: f4616e91-74fa-4000-ba0d-d3ddc0ee075b
ms.openlocfilehash: 444dc45c816e0dfc2fd45bad999ad90c2acacc01
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481779"
---
# <a name="settings-for-the-progress-control"></a>Impostazioni per il controllo Progress

Le impostazioni di base per il controllo progress ([CProgressCtrl](../mfc/reference/cprogressctrl-class.md)) sono l'intervallo e la posizione corrente. L'intervallo rappresenta l'intera durata dell'operazione. La posizione corrente rappresenta lo stato di avanzamento dell'applicazione ha compiuto verso il completamento dell'operazione. Le modifiche apportate all'intervallo o alla posizione causano il controllo di stato ridisegnato.

Per impostazione predefinita, l'intervallo è impostato su 0 - 100 e la posizione iniziale è impostato su 0. Per recuperare le impostazioni dell'intervallo corrente per il controllo di stato di avanzamento, usare il [GetRange](../mfc/reference/cprogressctrl-class.md#getrange) funzione membro. Per modificare l'intervallo, usare il [SetRange](../mfc/reference/cprogressctrl-class.md#setrange) funzione membro.

Per impostare la posizione, usare [funzione membro SetPos](../mfc/reference/cprogressctrl-class.md#setpos). Per recuperare la posizione corrente senza specificare un nuovo valore, usare [GetPos](../mfc/reference/cprogressctrl-class.md#getpos). Ad esempio, è possibile semplicemente effettuare una query sullo stato dell'operazione corrente.

Per istruzioni sulla posizione corrente del controllo di stato, usare [StepIt](../mfc/reference/cprogressctrl-class.md#stepit). Per impostare la quantità di ogni passaggio, utilizzare [SetStep](../mfc/reference/cprogressctrl-class.md#setstep)

## <a name="see-also"></a>Vedere anche

[Uso di CProgressCtrl](../mfc/using-cprogressctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

