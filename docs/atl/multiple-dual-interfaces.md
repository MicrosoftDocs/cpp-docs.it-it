---
description: 'Altre informazioni su: più interfacce duali'
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
ms.openlocfilehash: d90c0176b3165cc0e5b976a29ec58b58fd3a7a56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159415"
---
# <a name="multiple-dual-interfaces"></a>Interfacce duali multiple

È possibile combinare i vantaggi di un'interfaccia duale (ovvero la flessibilità di vtable e associazione tardiva, rendendo la classe disponibile per i linguaggi di scripting e C++) con le tecniche di ereditarietà multipla.

Sebbene sia possibile esporre più interfacce duali in un singolo oggetto COM, non è consigliabile. Se sono presenti più interfacce duali, deve essere esposta una sola `IDispatch` interfaccia. Le tecniche disponibili per assicurarsi che questo sia il caso, ad esempio la perdita di funzioni o una maggiore complessità del codice. Lo sviluppatore che prende in considerazione questo approccio deve valutare con attenzione i vantaggi e gli svantaggi.

## <a name="exposing-a-single-idispatch-interface"></a>Esposizione di una singola interfaccia IDispatch

È possibile esporre più interfacce duali in un singolo oggetto derivando da due o più specializzazioni di `IDispatchImpl` . Tuttavia, se si consente ai client di eseguire query per l' `IDispatch` interfaccia, sarà necessario utilizzare la macro [COM_INTERFACE_ENTRY2](reference/com-interface-entry-macros.md#com_interface_entry2) (o [COM_INTERFACE_ENTRY_IID](reference/com-interface-entry-macros.md#com_interface_entry_iid))) per specificare la classe di base da utilizzare per l'implementazione di `IDispatch` .

[!code-cpp[NVC_ATL_COM#23](../atl/codesnippet/cpp/multiple-dual-interfaces_1.h)]

Poiché solo un' `IDispatch` interfaccia viene esposta, i client che possono accedere agli oggetti solo tramite l' `IDispatch` interfaccia non saranno in grado di accedere ai metodi o alle proprietà in un'altra interfaccia.

## <a name="combining-multiple-dual-interfaces-into-a-single-implementation-of-idispatch"></a>Combinazione di più interfacce duali in una singola implementazione di IDispatch

ATL non fornisce alcun supporto per combinare più interfacce duali in un'unica implementazione di `IDispatch` . Esistono tuttavia diversi approcci noti per combinare manualmente le interfacce, ad esempio la creazione di una classe basata su modelli che contiene un'Unione di `IDispatch` interfacce separate, la creazione di un nuovo oggetto per eseguire la `QueryInterface` funzione o l'utilizzo di un'implementazione basata su TypeInfo di oggetti annidati per creare l' `IDispatch` interfaccia.

Questi approcci presentano problemi con potenziali collisioni di spazi dei nomi, nonché la complessità e la gestibilità del codice. Non è consigliabile creare più interfacce duali.

## <a name="see-also"></a>Vedi anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
