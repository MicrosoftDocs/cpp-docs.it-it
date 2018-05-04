---
title: Introduzione a COM | Documenti Microsoft
ms.custom: index-page
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- COM
ms.assetid: 120735d9-db71-4ad3-a730-ce576ea2354e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 938d0c45cae5ec9a2988f77f539af1a3d5513b83
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="introduction-to-com"></a>Introduzione a COM
COM è fondamentale "modello di oggetto" su quali controlli ActiveX e OLE vengono compilati. Consente a un oggetto per esporne la funzionalità per gli altri componenti e applicazioni host. Definisce come l'oggetto espone sia il funzionamento di questa esposizione tra processi e nelle reti. COM definisce anche il ciclo di vita dell'oggetto.  
  
 Questi concetti sono fondamentali per COM:  
  
-   [Interfacce](../atl/interfaces-atl.md) , ovvero il meccanismo attraverso il quale un oggetto espone le proprie funzionalità.  
  
-   [IUnknown](../atl/iunknown.md) , ovvero l'interfaccia di base su cui si basano tutti gli altri utenti. Implementa il conteggio dei riferimenti e l'interfaccia query meccanismi di esecuzione tramite COM.  
  
-   [Conteggio dei riferimenti](../atl/reference-counting.md) , ovvero la tecnica mediante il quale un oggetto (o esclusivamente, un'interfaccia) decide quando non è più utilizzato e pertanto è libero di rimuovere se stesso.  
  
-   [QueryInterface](../atl/queryinterface.md) , ovvero il metodo utilizzato per eseguire query su oggetto per una determinata interfaccia.  
  
-   [Marshalling](../atl/marshaling.md) , ovvero il meccanismo che consente agli oggetti di essere utilizzati tra diversi thread, processi e i limiti della rete, che consente l'indipendenza dalla posizione.  
  
-   [Aggregazione](../atl/aggregation.md) , in cui è possibile rendere un oggetto di utilizzo di un altro.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM e ATL](../atl/introduction-to-com-and-atl.md)   
 [Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363)

