---
title: Introduzione a COM | Microsoft Docs
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
ms.openlocfilehash: 5a408ecb1a96aab284a4ac8c7cdd59909ed7c0ea
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43216523"
---
# <a name="introduction-to-com"></a>Introduzione a COM
COM è fondamentale "modello a oggetti" su quali controlli ActiveX e OLE vengono compilati. Consente a un oggetto per esporne la funzionalità agli altri componenti e alle applicazioni host. Definisce come l'oggetto espone sé sia come questa esposizione funziona tra processi e tra reti. COM definisce anche il ciclo di vita dell'oggetto.  
  
 Questi concetti sono fondamentali per COM:  
  
-   [Interfacce](../atl/interfaces-atl.md) , ovvero il meccanismo attraverso il quale un oggetto espone le proprie funzionalità.  
  
-   [IUnknown](../atl/iunknown.md) , ovvero l'interfaccia di base su cui si basano tutti gli altri. Implementa l'interfaccia in esecuzione tramite COM. meccanismi di query e il conteggio dei riferimenti  
  
-   [Il conteggio dei riferimenti](../atl/reference-counting.md) , ovvero la tecnica mediante il quale un oggetto (o esclusivamente, un'interfaccia) decide quando non è più in uso ed è pertanto possibile rimuovere se stesso.  
  
-   [QueryInterface](../atl/queryinterface.md) , ovvero il metodo utilizzato per eseguire query su oggetto per una determinata interfaccia.  
  
-   [Marshalling](../atl/marshaling.md) , ovvero il meccanismo che consente agli oggetti da utilizzare tra thread, processi e i limiti di rete, consentendo l'indipendenza dalla posizione.  
  
-   [Aggregazione](../atl/aggregation.md) , usare un modo in cui è possibile rendere un oggetto di un altro.  
  
## <a name="see-also"></a>Vedere anche  
 [Introduzione a COM e ATL](../atl/introduction-to-com-and-atl.md)   
 [Modello a oggetti del componente](/windows/desktop/com/the-component-object-model)

