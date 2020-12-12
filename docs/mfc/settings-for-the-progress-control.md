---
description: 'Altre informazioni su: impostazioni per il controllo dello stato di avanzamento'
title: Impostazioni per il controllo Progress
ms.date: 11/04/2016
helpviewer_keywords:
- CProgressCtrl class [MFC], settings
- progress controls [MFC], settings
ms.assetid: f4616e91-74fa-4000-ba0d-d3ddc0ee075b
ms.openlocfilehash: 0cf3caa5e7b87062b1714f8e5e350840157ff7ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217068"
---
# <a name="settings-for-the-progress-control"></a>Impostazioni per il controllo Progress

Le impostazioni di base per il controllo dello stato di avanzamento ([CProgressCtrl](../mfc/reference/cprogressctrl-class.md)) sono l'intervallo e la posizione corrente. L'intervallo rappresenta l'intera durata dell'operazione. La posizione corrente rappresenta lo stato di avanzamento dell'applicazione verso il completamento dell'operazione. Eventuali modifiche apportate all'intervallo o alla posizione determinano il ridisegnato del controllo dello stato di avanzamento.

Per impostazione predefinita, l'intervallo è impostato su 0-100 e la posizione iniziale è impostata su 0. Per recuperare le impostazioni di intervallo correnti per il controllo dello stato di avanzamento, usare la funzione membro [GetRange](../mfc/reference/cprogressctrl-class.md#getrange) . Per modificare l'intervallo, usare la funzione membro [SetRange](../mfc/reference/cprogressctrl-class.md#setrange) .

Per impostare la posizione, usare [SetPos](../mfc/reference/cprogressctrl-class.md#setpos). Per recuperare la posizione corrente senza specificare un nuovo valore, usare [GetPos](../mfc/reference/cprogressctrl-class.md#getpos). Ad esempio, potrebbe essere necessario semplicemente eseguire una query sullo stato dell'operazione corrente.

Per passare alla posizione corrente del controllo dello stato di avanzamento, usare [StepIt](../mfc/reference/cprogressctrl-class.md#stepit). Per impostare la quantità di ogni passaggio, utilizzare [Sestep](../mfc/reference/cprogressctrl-class.md#setstep)

## <a name="see-also"></a>Vedi anche

[Utilizzo di CProgressCtrl](../mfc/using-cprogressctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
