---
title: Interfacce ed eventi doppi
ms.date: 11/04/2016
helpviewer_keywords:
- events [C++], dual interfaces
- dual interfaces, events
ms.assetid: bb382f7c-e885-4274-bf07-83f3602615d2
ms.openlocfilehash: 4ce5048c25bd55feb0f1eb20fc04ec6bfeead746
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319611"
---
# <a name="dual-interfaces-and-events"></a>Interfacce ed eventi doppi

Sebbene sia possibile progettare un'interfaccia eventi come duale, esistono una serie di buoni motivi di progettazione per non farlo. Il motivo fondamentale è che l'origine dell'evento genererà l'evento solo tramite vtable o via , non entrambi. `Invoke` Se l'origine eventi genera l'evento come chiamata `IDispatch` diretta al metodo vtable, i metodi non verranno mai utilizzati ed è chiaro che l'interfaccia avrebbe dovuto essere un'interfaccia vtable pura. Se l'origine dell'evento genera `Invoke`l'evento come una chiamata a , i metodi vtable non verranno mai utilizzati ed è chiaro che l'interfaccia avrebbe dovuto essere un'interfaccia dispatch. Se si definiscono le interfacce eventi come duali, sarà necessario che i client implementino parte di un'interfaccia che non verrà mai utilizzata.

> [!NOTE]
> Questo argomento non si applica alle interfacce duali, in generale. Dal punto di vista dell'implementazione, i duali sono un modo rapido, pratico e ben supportato di implementare interfacce accessibili a un'ampia gamma di client.

Esistono altri motivi per evitare le interfacce a doppio evento; né Visual Basic né Internet Explorer li supportano.

## <a name="see-also"></a>Vedere anche

[Interfacce doppie e ATL](../atl/dual-interfaces-and-atl.md)
