---
title: Interfacce duali multiple
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- multiple dual interfaces
- COM_INTERFACE_ENTRY2 macro
- dual interfaces, exposing multiple
- multiple dual interfaces, exposing with ATL
- IDispatchImpl class, multiple dual interfaces
- COM_INTERFACE_ENTRY_IID macro
ms.assetid: 7fea86e6-247f-4063-be6e-85588a9e3719
ms.openlocfilehash: 2ed0e9e8c74e02917e852b8f95ebff1b048afaef
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62261579"
---
# <a name="multiple-dual-interfaces"></a>Interfacce duali multiple

È possibile combinare i vantaggi di un'interfaccia duale (vale a dire, la flessibilità di vtable e associazione tardiva, rendendo disponibile la classe di linguaggi di scripting e di C++) con le tecniche di ereditarietà multipla.

Sebbene sia possibile esporre interfacce duali multiple in un singolo oggetto COM, non è consigliabile. Se sono presenti più interfacce duali, deve essere presente solo un `IDispatch` interfaccia esposta. Le tecniche disponibili per garantire che questo è il caso comportano, ad esempio perdita di funzione o di maggiore complessità del codice. Lo sviluppatore di prendere in considerazione questo approccio è consigliabile valutare attentamente i vantaggi e svantaggi.

## <a name="exposing-a-single-idispatch-interface"></a>Esponendo una sola interfaccia IDispatch

È possibile esporre interfacce duali multiple in un singolo oggetto mediante la derivazione da almeno due specializzazioni di `IDispatchImpl`. Tuttavia, se si consentono ai client di eseguire una query per il `IDispatch` interfaccia, è necessario usare il [COM_INTERFACE_ENTRY2](reference/com-interface-entry-macros.md#com_interface_entry2) (macro) (o [COM_INTERFACE_ENTRY_IID](reference/com-interface-entry-macros.md#com_interface_entry_iid))) per specificare la classe base da utilizzare per il implementazione di `IDispatch`.

[!code-cpp[NVC_ATL_COM#23](../atl/codesnippet/cpp/multiple-dual-interfaces_1.h)]

Poiché un solo `IDispatch` interfaccia viene esposta, i client che possono accedere solo agli oggetti tramite il `IDispatch` interfaccia non sarà in grado di accedere a metodi o proprietà di qualsiasi altra interfaccia.

## <a name="combining-multiple-dual-interfaces-into-a-single-implementation-of-idispatch"></a>Combinazione di interfacce duali Multiple in una singola implementazione di IDispatch

ATL non fornisce alcun supporto per la combinazione di interfacce duali multiple in una singola implementazione di `IDispatch`. Tuttavia, esistono diversi approcci noti alla combinazione manualmente le interfacce, ad esempio la creazione di una classe basata su modelli che contiene un'unione di tutte le rispettive `IDispatch` interfacce, creando un nuovo oggetto per eseguire il `QueryInterface` (funzione) o tramite un implementazione basata su informazioni sul tipo di oggetti annidati per creare il `IDispatch` interfaccia.

Questi approcci comportano problemi potenziali conflitti dello spazio dei nomi, nonché la complessità del codice e della manutenibilità. Non è consigliabile creare interfacce duali multiple.

## <a name="see-also"></a>Vedere anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
