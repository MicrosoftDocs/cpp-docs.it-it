---
title: QueryInterface | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- QueryInterface
dev_langs:
- C++
helpviewer_keywords:
- interfaces, pointers
- interfaces, availability
- QueryInterface method
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a0f00e9ad0a94aaa96afb3031b57e1c7da703dc
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208189"
---
# <a name="queryinterface"></a>QueryInterface
Anche se sono presenti meccanismi mediante il quale un oggetto in grado di indicare la funzionalità fornita in modo statico (prima, viene creata un'istanza), lo strumento COM fondamentale consiste nell'usare la `IUnknown` metodo denominato [QueryInterface](/windows/desktop/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)).  
  
 Ogni interfaccia è derivata da `IUnknown`, in modo che ogni interfaccia dispone di un'implementazione di `QueryInterface`. Indipendentemente dall'implementazione, questo metodo esegue una query un oggetto utilizzando l'IID dell'interfaccia a cui il chiamante desidera che un puntatore. Se l'oggetto supporta tale interfaccia, `QueryInterface` recupera un puntatore all'interfaccia, durante la chiamata anche `AddRef`. In caso contrario, restituisce il codice di errore E_NOINTERFACE.  
  
 Si noti che è necessario rispettare [conteggio dei riferimenti](../atl/reference-counting.md) regole in qualsiasi momento. Se si chiama `Release` su un puntatore a interfaccia per decrementare il conteggio dei riferimenti su zero, è consigliabile non usare tale puntatore nuovamente. In alcuni casi potrebbe essere necessario ottenere un riferimento debole a un oggetto (vale a dire, è possibile ottenere un puntatore a una delle relative interfacce senza incrementare il conteggio dei riferimenti), ma non è accettabile eseguire questa operazione chiamando `QueryInterface` seguita da `Release`. Il puntatore ottenuto in questo modo non è valido e non deve essere utilizzato. Ciò diventa evidente quando [ATL_DEBUG_INTERFACES](reference/debugging-and-error-reporting-macros.md#_atl_debug_interfaces) è definito, in modo che definisce questa macro è un modo utile per i bug nel conteggio dei riferimenti di ricerca.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [QueryInterface: Spostamenti all'interno di un oggetto](/windows/desktop/com/queryinterface--navigating-in-an-object)

