---
title: Introduzione a COM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs: C++
helpviewer_keywords: COM
ms.assetid: 120735d9-db71-4ad3-a730-ce576ea2354e
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2a8953949e722265afabc22410174b84c017276c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="introduction-to-com"></a>Introduzione a COM
COM è fondamentale "modello di oggetto" su quali controlli ActiveX e OLE vengono compilati. Consente a un oggetto per esporne la funzionalità per gli altri componenti e applicazioni host. Definisce come l'oggetto espone sia il funzionamento di questa esposizione tra processi e nelle reti. COM definisce anche il ciclo di vita dell'oggetto.  
  
 Questi concetti sono fondamentali per COM:  
  
-   [Interfacce](../atl/interfaces-atl.md) , ovvero il meccanismo tramite il quale un oggetto espone le proprie funzionalità.  
  
-   [IUnknown](../atl/iunknown.md) : l'interfaccia di base in cui tutti gli altri si basano. Implementa il conteggio dei riferimenti e l'interfaccia query meccanismi di esecuzione tramite COM.  
  
-   [Il conteggio dei riferimenti](../atl/reference-counting.md) , ovvero la tecnica mediante il quale un oggetto (o esclusivamente, un'interfaccia) decide quando non è più utilizzato e pertanto è possibile rimuovere se stesso.  
  
-   [QueryInterface](../atl/queryinterface.md) : il metodo utilizzato per eseguire query su oggetto per una determinata interfaccia.  
  
-   [Marshalling](../atl/marshaling.md) , ovvero il meccanismo che consente agli oggetti di essere utilizzati tra diversi thread, processi e i limiti della rete, consentendo l'indipendenza dalla posizione.  
  
-   [Aggregazione](../atl/aggregation.md) , in cui è possibile rendere un oggetto di utilizzo di un altro.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM e ATL](../atl/introduction-to-com-and-atl.md)   
 [Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363)

