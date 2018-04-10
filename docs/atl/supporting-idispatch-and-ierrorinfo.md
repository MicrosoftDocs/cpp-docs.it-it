---
title: Supporto di IDispatch e IErrorInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- IErrorInfo
- IDispatch
dev_langs:
- C++
helpviewer_keywords:
- ISupportErrorInfoImpl method
- IErrorInfo class suppor in ATL
- IDispatchImpl class
- IDispatch class support in ATL
ms.assetid: 7db2220f-319d-4ce9-9382-d340019f14f7
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f39db3e844df884e8e95352bed2a078b01beede8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="supporting-idispatch-and-ierrorinfo"></a>Supporto di IDispatch e IErrorInfo
È possibile utilizzare la classe modello [IDispatchImpl](../atl/reference/idispatchimpl-class.md) per fornire un'implementazione predefinita del `IDispatch Interface` parte delle interfacce duali sull'oggetto.  
  
 Se viene utilizzata la `IErrorInfo` interfaccia per segnalare gli errori al client, quindi l'oggetto deve supportare il `ISupportErrorInfo Interface` interfaccia. La classe modello [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) fornisce un modo semplice per implementare questa se si dispone solo un'unica interfaccia che genera errori sull'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)

