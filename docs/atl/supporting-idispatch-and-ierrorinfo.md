---
description: 'Altre informazioni su: supporto di IDispatch e IErrorInfo'
title: Supporto di IDispatch e IErrorInfo
ms.date: 11/04/2016
helpviewer_keywords:
- ISupportErrorInfoImpl method
- IErrorInfo class suppor in ATL
- IDispatchImpl class
- IDispatch class support in ATL
ms.assetid: 7db2220f-319d-4ce9-9382-d340019f14f7
ms.openlocfilehash: 4622c8811fafc9512400345e5876dd24c466bc93
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138450"
---
# <a name="supporting-idispatch-and-ierrorinfo"></a>Supporto di IDispatch e IErrorInfo

È possibile usare la classe modello [IDispatchImpl](../atl/reference/idispatchimpl-class.md) per fornire un'implementazione predefinita della `IDispatch Interface` parte di qualsiasi interfaccia duale sull'oggetto.

Se l'oggetto usa l' `IErrorInfo` interfaccia per segnalare gli errori al client, l'oggetto deve supportare l' `ISupportErrorInfo Interface` interfaccia. La classe modello [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) fornisce un modo semplice per implementare questa operazione se si dispone di una sola interfaccia che genera errori sull'oggetto.

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)
