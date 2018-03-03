---
title: Interfacce duali ed eventi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- events [C++], dual interfaces
- dual interfaces, events
ms.assetid: bb382f7c-e885-4274-bf07-83f3602615d2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 87774f0237eb42c4bd2f97185230b3c869688ca8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dual-interfaces-and-events"></a>Gli eventi e le interfacce duali
Sebbene sia possibile progettare un'interfaccia di eventi come un doppio, esistono una serie di motivi una buona progettazione non eseguire questa operazione. Il motivo principale è che l'origine dell'evento viene generato solo l'evento tramite vtable o `Invoke`, ma non entrambi. Se l'origine evento genera l'evento come una chiamata al metodo vtable diretta, la `IDispatch` metodi non verranno mai utilizzati e risulta chiaro che l'interfaccia deve essere stato interfaccia vtable pura. Se l'origine evento viene generato l'evento come una chiamata a `Invoke`, i metodi vtable non verranno mai utilizzati ed è che l'interfaccia avrebbe potuto dispatch. Se si definiscono le interfacce eventi come queste interfacce, si richiederà i client implementare una parte di un'interfaccia che non verrà mai utilizzata.  
  
> [!NOTE]
>  Questo argomento non si applica alle interfacce duali in generale. Da una prospettiva di implementazione, queste interfacce rappresentano un modo rapido, semplice e ben supportato di implementazione di interfacce che sono accessibili a un'ampia gamma di client.  
  
 Vi sono ulteriori motivi per evitare interfacce duali. Visual Basic né Internet Explorer le supportano.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)

