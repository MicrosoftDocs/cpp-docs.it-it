---
title: Interfacce duali ed eventi
ms.date: 11/04/2016
helpviewer_keywords:
- events [C++], dual interfaces
- dual interfaces, events
ms.assetid: bb382f7c-e885-4274-bf07-83f3602615d2
ms.openlocfilehash: 01233edb63145d69d335349bb9dff91e6a4aca5a
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57292546"
---
# <a name="dual-interfaces-and-events"></a>Interfacce duali ed eventi

Sebbene sia possibile progettare un'interfaccia di eventi come duale, esistono una serie di motivi una buona progettazione di non eseguire questa operazione. Il motivo fondamentale è che l'origine dell'evento viene generato solo l'evento tramite vtable o `Invoke`, ma non entrambi. Se l'origine dell'evento viene generato l'evento come una chiamata al metodo diretto vtable il `IDispatch` metodi non verranno mai utilizzati e risulta chiaro che l'interfaccia doveva essere un'interfaccia vtable pure. Se l'origine dell'evento viene generato l'evento come una chiamata a `Invoke`, i metodi di vtable non saranno mai utilizzati ed è chiaro che l'interfaccia doveva essere un'interfaccia dispatch. Se si definiscono le interfacce eventi come queste interfacce, si richiederà ai client di implementare parte di un'interfaccia che non verrà mai utilizzata.

> [!NOTE]
>  Questo argomento non si applica alle interfacce duali, in generale. Da una prospettiva di implementazione, queste interfacce sono un modo rapido, comodo e ben supportato dell'implementazione di interfacce che sono accessibili per un'ampia gamma di client.

Sono disponibili altre ragioni per evitare le interfacce duali; Visual Basic, né Internet Explorer li supportano.

## <a name="see-also"></a>Vedere anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
