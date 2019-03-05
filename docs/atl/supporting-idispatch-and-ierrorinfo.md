---
title: Supporto di IDispatch e IErrorInfo
ms.date: 11/04/2016
f1_keywords:
- IErrorInfo
- IDispatch
helpviewer_keywords:
- ISupportErrorInfoImpl method
- IErrorInfo class suppor in ATL
- IDispatchImpl class
- IDispatch class support in ATL
ms.assetid: 7db2220f-319d-4ce9-9382-d340019f14f7
ms.openlocfilehash: aa3800b529238ba78cb3aacc555d1a1d7afb94ca
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57290547"
---
# <a name="supporting-idispatch-and-ierrorinfo"></a>Supporto di IDispatch e IErrorInfo

È possibile usare la classe modello [IDispatchImpl](../atl/reference/idispatchimpl-class.md) per fornire un'implementazione predefinita del `IDispatch Interface` parte di tutte le interfacce duali sull'oggetto.

Se l'oggetto utilizza il `IErrorInfo` interfaccia per segnalare gli errori al client, quindi l'oggetto deve supportare il `ISupportErrorInfo Interface` interfaccia. La classe modello [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) fornisce un modo semplice per implementare questa se si dispone solo un'unica interfaccia che genera errori sull'oggetto.

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)
