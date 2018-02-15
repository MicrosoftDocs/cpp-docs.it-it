---
title: "Interfacce duali più | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- multiple dual interfaces
- COM_INTERFACE_ENTRY2 macro
- dual interfaces, exposing multiple
- multiple dual interfaces, exposing with ATL
- IDispatchImpl class, multiple dual interfaces
- COM_INTERFACE_ENTRY_IID macro
ms.assetid: 7fea86e6-247f-4063-be6e-85588a9e3719
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 01d87164439a4128ff6205ea6bc3ee3d9cc5573a
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="multiple-dual-interfaces"></a>Più interfacce duali
È possibile combinare i vantaggi di un'interfaccia duale (ovvero, la flessibilità di vtable e l'associazione tardiva, rendendo in tal modo la classe disponibile per i linguaggi di scripting, nonché di C++) con le tecniche di ereditarietà multipla.  
  
 Sebbene sia possibile esporre più interfacce duali in un singolo oggetto COM, non è consigliabile. Se sono presenti più interfacce duali, deve essere presente solo un `IDispatch` interfaccia esposta. Le tecniche disponibili per garantire che questo è il caso comportano, ad esempio perdita di funzione o di maggiore complessità del codice. Lo sviluppatore considerando questo approccio debba valutare con attenzione i vantaggi e svantaggi.  
  
## <a name="exposing-a-single-idispatch-interface"></a>Esposizione di una singola interfaccia IDispatch  
 È possibile esporre più interfacce duali in un singolo oggetto mediante la derivazione da due o più specializzazioni di `IDispatchImpl`. Tuttavia, se si consentono ai client di eseguire una query per il `IDispatch` interfaccia, sarà necessario utilizzare il [COM_INTERFACE_ENTRY2](reference/com-interface-entry-macros.md#com_interface_entry2) macro (o [COM_INTERFACE_ENTRY_IID](reference/com-interface-entry-macros.md#com_interface_entry_iid))) per specificare la classe base da utilizzare per il implementazione di `IDispatch`.  
  
 [!code-cpp[NVC_ATL_COM#23](../atl/codesnippet/cpp/multiple-dual-interfaces_1.h)]  
  
 Poiché un solo `IDispatch` viene esposta l'interfaccia, i client che possono accedere solo gli oggetti tramite il `IDispatch` interfaccia non sarà in grado di accedere ai metodi o proprietà in qualsiasi altra interfaccia.  
  
## <a name="combining-multiple-dual-interfaces-into-a-single-implementation-of-idispatch"></a>La combinazione di più interfacce duali in una singola implementazione di IDispatch  
 ATL non fornisce alcun supporto per la combinazione di più interfacce duali in una singola implementazione di `IDispatch`. Tuttavia, esistono diversi approcci noti per combinare manualmente le interfacce, ad esempio la creazione di una classe basata su modelli che contiene un'unione di tutte le rispettive `IDispatch` interfacce, creando un nuovo oggetto per eseguire il `QueryInterface` funzione o tramite un implementazione basata su typeinfo di oggetti nidificati per creare il `IDispatch` interfaccia.  
  
 Questi approcci presentano problemi potenziali conflitti di spazio dei nomi, nonché la complessità del codice e la gestibilità. Non è consigliabile creare più interfacce duali.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)

