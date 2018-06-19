---
title: QueryInterface | Documenti Microsoft
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
ms.openlocfilehash: cde92ee56e51a86acbfb7e459571291bc3cae76c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32356961"
---
# <a name="queryinterface"></a>QueryInterface
Anche se non esistono meccanismi mediante il quale un oggetto in grado di esprimere la funzionalità fornita in modo statico (prima che ne viene creata un'istanza), il meccanismo COM fondamentale consiste nell'usare il **IUnknown** metodo chiamato [QueryInterface ](http://msdn.microsoft.com/library/windows/desktop/ms682521).  
  
 Ogni interfaccia è derivata da **IUnknown**, in modo che ogni interfaccia è un'implementazione di `QueryInterface`. Indipendentemente dall'implementazione, questo metodo esegue una query di un oggetto utilizzando l'IID dell'interfaccia a cui il chiamante richiede un puntatore. Se l'oggetto supporta tale interfaccia, `QueryInterface` recupera un puntatore all'interfaccia, durante la chiamata anche `AddRef`. In caso contrario, restituisce il **E_NOINTERFACE** codice di errore.  
  
 Si noti che è necessario rispettare [il conteggio dei riferimenti](../atl/reference-counting.md) regole in qualsiasi momento. Se si chiama **versione** su un puntatore a interfaccia per decrementare il conteggio dei riferimenti a zero, non è necessario utilizzare tale puntatore nuovamente. In alcuni casi potrebbe essere necessario ottenere un riferimento debole a un oggetto (ovvero, si consiglia di ottenere un puntatore a una delle relative interfacce senza incrementare il conteggio dei riferimenti), ma non è accettabile per eseguire questa operazione chiamando `QueryInterface` seguito da  **Versione**. Il puntatore ottenuto in modo non è valido e non deve essere utilizzato. Ciò diventa evidente quando [ATL_DEBUG_INTERFACES](reference/debugging-and-error-reporting-macros.md#_atl_debug_interfaces) è definito, in modo da definire questa macro è un modo utile per i bug di conteggio dei riferimenti di ricerca.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [QueryInterface: Spostamento in un oggetto](http://msdn.microsoft.com/library/windows/desktop/ms687230)

