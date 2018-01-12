---
title: QueryInterface | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: QueryInterface
dev_langs: C++
helpviewer_keywords:
- interfaces, pointers
- interfaces, availability
- QueryInterface method
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5714eab684066e74a6d56144d915460b4312f4c2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="queryinterface"></a>QueryInterface
Anche se non esistono meccanismi mediante il quale un oggetto in grado di esprimere la funzionalità fornita in modo statico (prima che ne viene creata un'istanza), il meccanismo COM fondamentale consiste nell'usare il **IUnknown** metodo chiamato [QueryInterface ](http://msdn.microsoft.com/library/windows/desktop/ms682521).  
  
 Ogni interfaccia è derivata da **IUnknown**, in modo che ogni interfaccia è un'implementazione di `QueryInterface`. Indipendentemente dall'implementazione, questo metodo esegue una query di un oggetto utilizzando l'IID dell'interfaccia a cui il chiamante richiede un puntatore. Se l'oggetto supporta tale interfaccia, `QueryInterface` recupera un puntatore all'interfaccia, durante la chiamata anche `AddRef`. In caso contrario, restituisce il **E_NOINTERFACE** codice di errore.  
  
 Si noti che è necessario rispettare [il conteggio dei riferimenti](../atl/reference-counting.md) regole in qualsiasi momento. Se si chiama **versione** su un puntatore a interfaccia per decrementare il conteggio dei riferimenti a zero, non è necessario utilizzare tale puntatore nuovamente. In alcuni casi potrebbe essere necessario ottenere un riferimento debole a un oggetto (ovvero, si consiglia di ottenere un puntatore a una delle relative interfacce senza incrementare il conteggio dei riferimenti), ma non è accettabile per eseguire questa operazione chiamando `QueryInterface` seguito da  **Versione**. Il puntatore ottenuto in modo non è valido e non deve essere utilizzato. Ciò diventa evidente quando [ATL_DEBUG_INTERFACES](reference/debugging-and-error-reporting-macros.md#_atl_debug_interfaces) è definito, in modo da definire questa macro è un modo utile per i bug di conteggio dei riferimenti di ricerca.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [QueryInterface: Spostamento in un oggetto](http://msdn.microsoft.com/library/windows/desktop/ms687230)

