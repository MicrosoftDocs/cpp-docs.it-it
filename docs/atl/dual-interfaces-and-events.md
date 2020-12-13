---
description: 'Altre informazioni su: interfacce ed eventi doppi'
title: Interfacce ed eventi doppi
ms.date: 11/04/2016
helpviewer_keywords:
- events [C++], dual interfaces
- dual interfaces, events
ms.assetid: bb382f7c-e885-4274-bf07-83f3602615d2
ms.openlocfilehash: 231df7a0dfc8376acd6a9a0f9d85d0ed68fdd0b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153027"
---
# <a name="dual-interfaces-and-events"></a>Interfacce ed eventi doppi

Sebbene sia possibile progettare un'interfaccia di evento come doppia, esistono diversi motivi di progettazione validi per evitare questa operazione. Il motivo fondamentale è che l'origine dell'evento genererà solo l'evento tramite vtable o via `Invoke` , non entrambi. Se l'origine evento genera l'evento come chiamata al metodo vtable diretto, i `IDispatch` metodi non verranno mai usati ed è chiaro che l'interfaccia deve essere un'interfaccia vtable pura. Se l'origine evento genera l'evento come una chiamata a `Invoke` , i metodi vtable non verranno mai usati ed è chiaro che l'interfaccia deve essere un'interfaccia dispatch. Se si definiscono le interfacce evento come doppie, sarà necessario che i client implementino parte di un'interfaccia che non verrà mai usata.

> [!NOTE]
> Questo argomento non si applica alle interfacce duali, in generale. Dal punto di vista dell'implementazione, i doppi sono un modo rapido, pratico e ben supportato per implementare le interfacce accessibili a un'ampia gamma di client.

Esistono ulteriori motivi per evitare la doppia interfaccia eventi; né Visual Basic né Internet Explorer li supportano.

## <a name="see-also"></a>Vedi anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
